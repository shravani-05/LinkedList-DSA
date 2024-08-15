#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    
};
Node* convertArrToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node( arr[i]);
        mover ->next=temp;
        mover = temp;
    }
    return head;
}
int main(){
    vector<int> arr= {2,4,6,8};
    Node* head = convertArrToLL(arr);
    Node* temp = head;//initialize a temp variable pointing at head
    while(temp!=nullptr){//this should only work till the last node of the LL
        cout<< temp->data<<" ";//printing the data
        temp = temp ->next;//going to next node of the LL
    }
    return 0;
}