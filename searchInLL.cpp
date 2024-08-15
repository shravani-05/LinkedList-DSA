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
int searchInLL(Node* head, int value){
    Node* temp = head;//intializing the temp to head
    while(temp){//while travelling to all the elements of the LL
        if(temp-> data == value)//Check the temp data is equal to the value 
        return 1;//then return 1
        temp = temp->next;//temp points to the next node
    }
    return 0;//if element not found then return 0
}
int main(){
    vector<int> arr= {2,4,6,8};
    Node* head = convertArrToLL(arr);
    cout<< searchInLL(head,1);//call the function give head pointer and the value to be found
    return 0;
}