// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int data1, Node* next1){
//         data = data1;
//         next = next1;
//     }
//     public:
//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
    
// };
// int lengthOfLL(Node* head){
//     int count=0;
//     Node* temp = head;
//     while(temp !=0){
//         temp = temp ->next;
//         count++;
//     }
//     return count;
// }
// int main(){
//     vector<int> arr= {2,4,6,8};
//     Node* head = new Node(arr);
//     cout<< lengthOfLL(head);
//     return 0;
// }
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
int lengthOfLL(Node* head){
    int count=0;
    Node* temp = head;
    while(temp !=0){
        temp = temp ->next;
        count++;
    }
    return count;
}
int main(){
    vector<int> arr= {2,4,6,8};
    Node* head = convertArrToLL(arr);
    cout<< lengthOfLL(head);
    // cout<< head ->data;
    return 0;
}