#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
Node* reverse1(Node* head){
    //base case
    if(head ==NULL || head->next==NULL){
        return head;
    }

    Node* chotaHead = reverse1(head->next);
    head->next->next= head;
    head->next=NULL;
    return chotaHead;
}


//using recursion
void reverse(Node*& head, Node*& curr , Node*& prev){
    //base case 
    if(curr == NULL){
        head= prev;
        return ;
    }
    Node* forward= curr->next;
    reverse(head, forward, curr);
    curr->next= prev;
    
  
}

Node* reverseLinkedList(Node *head)
{   
   //method 3 
    reverse1(head);


   //method 2
    /*Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;
    */

    
    // for empty and single node list  method 1
    /*if(head ==NULL ||head->next == NULL){
        return head;
    }
    Node * prev = NULL;
    Node* curr = head;
    Node* forward= NULL;
    while(curr != NULL){
        forward=curr->next;
        curr ->next= prev;
        prev= curr;
        curr= forward;
    }
    return prev;  */
}

int main(){


    return 0;
}