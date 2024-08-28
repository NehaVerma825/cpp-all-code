#include<iostream>
using namespace std;

  //Definition for singly-linked list.
 class Node {
  public:
      int data;
      Node *next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node *next) : data(x), next(next) {}
  };
 
 //solution 1
  Node* kReverse(Node* head, int k) {
    //base case
    if(head==NULL){
        return NULL;
    }

    //reverse first K nodes
    Node*next= NULL;
    Node*curr = head;
    Node*prev = NULL;
    int count = 0;


    while(curr != NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev= curr;
        curr= next;
        count++;
    }

    // step 2. recursion call
    if(next != NULL){
        head-> next =  kReverse(next, k);
    }

    //step 3. return head of reversed list
    return prev;

}


//solution 2
Node* kReverse(Node* head, int k) {

    //base case
    if(head == NULL)
    return head;
     //if our length is less than k so return as it is

     int len =0;
    Node* check = head;

    while(check != NULL){

        len++;

        check = check->next;
    }

    if(len<k ){
        return head;
    }

    //step1: reverse 1st k group

    Node* curr = head;

    Node* next = NULL;

    Node* prev = NULL;

    int cnt = 0;
    while(cnt < k && curr != NULL){

        next = curr -> next;

        curr -> next = prev;

        prev = curr;

        curr = next;

        cnt++;

    }

    //step2: for others use recursion

    if (next != NULL) {

        head->next = kReverse(next, k);

    }

    return prev;

}