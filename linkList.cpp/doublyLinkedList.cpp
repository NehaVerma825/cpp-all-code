#include<iostream>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     //constructor
//     Node(int d){
//         this->data=d;
//         this->next= NULL;
//         this->prev = NULL;
//     }
// };

// //traversing a linked list
// void print(Node* head){
//         Node* temp= head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl; 

// }
// //gives length of linked list
// int getLength(Node* head ){
//     int len= 0;
//      Node* temp= head;
//         while(temp != NULL){     
//            len++;
//             temp=temp->next;
//         }
//         return len;
// }   
// void insertAtHead(Node* &head, int d  ){
//     Node* temp = new Node(d); //creating new node
//     temp->next= head;
//     head->prev= temp;
//     head = temp;
// }

// void insertAtTail(Node* &tail,int d){
//     Node* temp= new Node(d);//creating new node for inserting at tail
//     tail->next = temp;
//     temp->prev= tail;
//     tail= temp;   
// }

// void insertAtPosition(Node *&tail, Node *&head,int position, int d){
//     //insert at start
//     if (position == 1){
//         insertAtHead(head,d);
//         return;
//     }

//     Node* temp = head;
//     int count= 1;
//     while(count <position-1){
//         temp= temp-> next;
//         count++;
//     }

//      //inserting tail at last position
//      if(temp->next == NULL){
//         insertAtTail(tail ,d);
//         return;
//      }
     
//      //creating a node for d
//      Node * NodeToInsert = new Node(d);  // here d is data 
//      NodeToInsert->next = temp->next;
//      temp->next->prev= NodeToInsert;
//      temp->next = NodeToInsert;
//      NodeToInsert->prev= temp; 

// }


//without initialising a node 
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next= NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next= NULL;
        }
        cout<<"memory has free for node with data " <<val <<endl;
    }
};

//traversing a linked list
void print(Node* head){
        Node* temp= head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl; 

}
//gives length of linked list
int getLength(Node* head ){
    int len= 0;
     Node* temp= head;
        while(temp != NULL){     
           len++;
            temp=temp->next;
        }
        return len;
}   
void insertAtHead(Node* &tail,Node* &head, int d  ){
    //empty list
    if(head == NULL){
       Node*temp = new Node(d);
       head = temp;
       tail = temp;
    }
    else{
    Node* temp = new Node(d); //creating new node
    temp->next= head;
    head->prev= temp;
    head = temp;
   

    }
   
}

void insertAtTail(Node* &tail, Node* &head,int d){
    if(tail == NULL){
       Node*temp = new Node(d);
       tail= temp;
       head = temp;
    }
    else{
    Node* temp= new Node(d);//creating new node for inserting at tail
    tail->next = temp;
    temp->prev= tail;
    tail= temp; 
    }
     
}

void insertAtPosition(Node *&tail, Node *&head,int position, int d){
    //insert at start
    if (position == 1){
        insertAtHead( tail, head, d);
        return;
    }

    Node* temp = head;
    int count= 1;
    while(count <position-1){
        temp= temp-> next;
        count++;
    }

     //inserting tail at last position
     if(temp->next == NULL){
        insertAtTail(tail, head,d);
        return; 
     }
     
     //creating a node for d
     Node* NodeToInsert = new Node(d);  // here d is data 
     NodeToInsert->next = temp->next;
     temp->next->prev= NodeToInsert;
     temp->next = NodeToInsert;
     NodeToInsert->prev= temp; 

}

void deleteNode(int position ,Node* & head){
    //deleting first or starting node
    if(position == 1){
        Node* temp = head;
        temp->next->prev= NULL;
        head= temp->next;
        temp->next = NULL;
        delete temp;

    }
    else{
        //deleting any middle or last node
        Node* current =head;
        Node* prev = NULL;
        int count =1;
        while(count <position){
            prev=current;
            current= current->next;
            count++;
        }
        current->prev = NULL;
        prev->next=current->next;
        current->next = NULL; 
        delete current;
        // delete (current->next);

    }
}


int main(){
//     Node* node1= new Node(10);
//     Node* head = node1;
//     Node* tail = node1;
//     print(head);
//     // cout<<getLength(head)<<endl;

//     insertAtHead(head, 11);
//     print(head);
//     insertAtHead(head, 13);
//     print(head);
//     insertAtHead(head, 25);
//     print(head);
//     insertAtHead(head, 51);
//     print(head);
//     insertAtTail(tail, 45);
//     print(head);

//     insertAtPosition(tail,head,2,100);
//     print(head);

// //this is not working
//     insertAtPosition(tail,head,1,104);
//     print(head);
//     insertAtPosition(tail,head,8,108);
//     print(head);




//without initialising a node 

//  Node* node1= new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(tail, head, 11);
    print(head);
    insertAtHead( tail,head, 13);
    print(head);
    insertAtHead(tail,head, 25);
    print(head);
    insertAtHead(tail,head,51);
    print(head);
    insertAtTail(tail,head, 45);
    print(head);

    insertAtPosition(tail,head,2,100);   //all this is correct
    print(head);

//this is not working
    insertAtPosition(tail,head,1,104);
    print(head);
    insertAtPosition(tail,head,8,108);
    print(head);

    deleteNode(7,head); //handle the case of deletion at head
    print(head);
    cout<<"head "<<head->data <<endl;
    cout<<"tail "<<tail->data <<endl;

    


    return 0;
}