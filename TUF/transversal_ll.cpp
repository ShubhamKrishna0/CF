#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int data1):val(data1) , next(nullptr) {}
    ListNode(int data1 , ListNode* next1) : val(data1), next(next1){}
};


/*
val: An integer value stored in the node.
next: A pointer to the next node in the linked list.
Additionally, the structure has two constructors:

ListNode(int data1): This initializes the node's value (val)
 to data1 and sets the next pointer to nullptr (meaning it doesn't 
 point to any other node initially).

ListNode(int data1, ListNode* next1): This initializes the node's
 value (val) to data1 and sets the next pointer to point to the node passed as next1 .
*/
class Solution{
public:
vector<int>LLTransversal (ListNode* head) {//function for linkedlist transversal
    ListNode *temp = head;
    vector<int> ans ;

    while(temp!= nullptr) {
        ans.push_back(temp->val);
        temp = temp->next;
    }
    return ans;
}
};

int main() {
    ListNode *y1 = new ListNode(2);
    ListNode *y2 = new ListNode(5);
    ListNode *y3 = new ListNode(8);
    ListNode *y4 = new ListNode(7);

        // Linking the nodes
    y1->next = y2;
    y2->next = y3;
    y3->next = y4;

    Solution sol;

    vector<int> result = sol.LLTransversal(y1);

    cout << "linkedlist value" << endl;
    for(int val : result) {
        cout << val << " ";

    }
    cout << endl;
        //Clean up 
    //Allocated memory
    delete y1;
    delete y2;
    delete y3;
    delete y4;

    return 0;
}
