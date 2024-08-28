#include<iostream>
using namespace std;


//Following is the class structure of the Node class:

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

//approach 1
Node* getMiddle(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    // 2 node - needed or not
            if(head->next->next==NULL){
            return head->next;
    }
    Node* slow= head;
    Node* fast= head->next;

    while (fast!= NULL){
        fast= fast->next;
        if(fast!= NULL){
            fast= fast->next;
        }
         slow=slow->next;
    }
    return slow;


}

 int getLength( Node* head){ //traversing upto lenth n
     int len = 0;
     while(head != NULL){
         len++;
         head= head->next;
     }
     return len;
 }

//approach 2
Node *findMiddle(Node *head) {
    
    int len = getLength(head);
    int ans = (len/2);
    Node* temp= head;
    int cnt=0;
    while(cnt<ans){
        temp= temp->next;
        cnt++;
    }
    return temp;
   }



int main(){
   

   
    
}


