#include  <bits/stdc++.h>
using namespace std;
 
class Node {
    public:
        int data;
        Node* next;

    public:
    Node(int data1 , Node* next1) {
        data = data1;
        next = next1;

    }

    public: 
    Node(int data1) {
        data = data1;
        next = nullptr;

    }
};

Node* convertArr2ll(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size();i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;

    }
    return head;

}
int main () {
    vector<int> arr = {12, 5, 8, 7};
    Node *head = convertArr2ll(arr);
    // cout << head->data;
    Node *temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next; 
    }
}
