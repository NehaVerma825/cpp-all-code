#include<iostream>
using namespace std;
class Node{

};

class Solution {
private:
    Node* reverse( Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr!= NULL){
            next=curr-> next;
            curr-> next = prev;
            prev= curr;
            curr= next;
        }
        return prev;
    }
    void insertAtTail(struct Node* &head, struct Node* &tail, int val){
        Node* temp = new Node(val);
        //empty list
        if(head == NULL){
            head= temp;
            tail= temp;
            return;
        }
        else{
            tail->next = temp;
            tail= temp;
        }
    }
    
struct Node* add(struct Node* num1, struct Node* num2){
    int carry = 0;
    Node* ansHead= NULL;
    Node* ansTail = NULL;
    while(num1 != NULL || num2 != NULL || carry != 0){
        int val1= 0;
        if(num1 != NULL){
            val1 = num1->data;
        }
        int val2= 0;
        if(num2 != NULL){
            val2= num2-> data;
        }
        int sum = carry + val1 + val2;
        int digit = sum%10;
        
        //creat node and add in ans LL
        insertAtTail( ansHead, ansTail, digit);
        carry = sum/10;
        if (num1 != NULL){
            num1 = num1->next;
        }
        if(num2 != NULL){
           num2 = num2-> next;
        }
    }
    return ansHead;
    
}
  public:
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(struct Node* num1, struct Node* num2) {
       //step1. reverse input 2 ll
       num1 = reverse(num1);
       num2 = reverse(num2);
       
       //step2. add 2 ll
       Node* ans = add(num1, num2);
       
       //step3. reverse ans ll
       ans = reverse(ans);
       return ans;
       
    }
};