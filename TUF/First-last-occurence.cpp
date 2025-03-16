/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

 */

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;
    while(low<=high) {
        int mid = (low + high) / 2; 
        if(arr[mid] >= x) {
            ans = mid;
            high = mid - 1; 

        }else  {
            low = mid + 1;
        }
    }
    return ans;
}
int upperBound(vector<int> &arr  , int x, int n ) {
        int low = 0, high = n - 1;
    int ans = n;
    while(low<=high) {
        int mid = (low + high) / 2; 
        if(arr[mid] > x) {
            ans = mid;
            high = mid - 1; 

        }else  {
            low = mid + 1;
        }
    }
    return ans;
}
pair<int, int> firstandlastpossition(vector<int> &arr , int n , int k){
    int lb = lowerBound(arr, n, k);
    if(lb ==n || arr[lb] != k )
        return {-1, -1};
    return {lb, upperBound(arr, n, k) - 1};
}

