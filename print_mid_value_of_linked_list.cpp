//print middle value of a linked list

#include<iostream>
using namespace std;

struct Node{
int data;
struct Node* next;
};


struct Node* insertToNode(Node* head, int data){

Node* temp = new Node;
temp->data = data;
temp->next = NULL;

if(head == NULL)
    head = temp;
else{
    Node* temp2 = head;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

return head;

};

void printMiddleNode(Node* head, int mid){

Node* temp = head;

while(--mid){
    temp = temp->next;
}

cout<<"Middle value is: "<<temp->data;
}
int main(){
int n;
cout<<"How many values to enter: ";
cin>>n;
struct Node* head = NULL;
int x;
for(int i = 0; i<n; i++){
    cin>>x;
    head = insertToNode(head, x);
}

int mid = (n%2 == 0) ? n/2 +1 : n/2+1;

printMiddleNode(head, mid);
}
