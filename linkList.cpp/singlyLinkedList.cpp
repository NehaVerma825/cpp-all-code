#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;   //pointer storing addr

    //creating Node constructor
    Node(int data){  
        this->data = data;
        this->next = NULL;
    }
    //destructor 
    ~Node(){
        int value = this->data;
        //memory free
        if(this-> next !=NULL){
            delete next;
            this->next= NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head , int d){
    
    Node * temp = new Node(d); // Create a new node with the given value
    temp-> next= head;  // Set the next pointer of the new node to the current head
    head = temp;  // Move the head to point to the new node OR updating head

}

void InsertAtTail(Node* &tail, int d){
    Node * temp = new Node(d); // Create a new node with the given value
    tail->next = temp;
    tail= tail->next;
}

void InsertAtPostion(Node* &tail, Node* &head, int position ,int d){
    //insert at start
    if(position== 1){
        InsertAtHead(head ,d);
        return;
    }

     Node* temp = head;
     int count= 1;
     while(count <position-1){
        temp= temp-> next;
        count++;
     }

     //inserting tail at last position
     if(temp->next ==NULL){
        InsertAtTail(tail ,d);
        return;
     }
     
     //creating a node for d
     Node * NodeToInsert = new Node(d);  // here d is data 
     NodeToInsert->next = temp->next;
     temp->next= NodeToInsert;

}
void print(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp-> data <<" ";  //printing current node
        temp = temp -> next;  // temp ko aage badhao 
    }
    cout<<endl;
}


void deleteNode(int position ,Node* & head){
    //deleting first or starting node
    if(position == 1){
        Node* temp = head;
        head = head->next;
         //memory free of start node
         temp->next=NULL;
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
        prev ->next= current->next;
        current->next= NULL;
        delete current;
        // delete (current->next);

    }
}

bool detectLoop(Node* head){
    if(head == NULL){   //SC= O(n) and TC= O(n)
        return false;
    }
    map<Node* , bool> visited;
    Node* temp = head;
    
    while(temp!= NULL){
        //cycle is present
        if(visited[temp]==true){
            cout<<"present on element "<<temp->data<<endl;
            return true;
        }
        visited[temp]= true;
        temp = temp->next;
    }
    return false;
}

//floyd method for better space complexity
Node* floydDetectLoop(Node* head){   //SC= O(1) and TC= O(n)
    if(head == NULL){
        return NULL;
    }

    Node*slow = head;
    Node* fast = head;
    while(slow != NULL && fast!= NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;  //moving fast 2 steps ahead
        }
        slow= slow->next;   //moving slow 1 steps ahead
        if(slow == fast){
            cout<<" present at node "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

//getting starting node of loop
Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while(slow != intersection){
        slow= slow->next;
        intersection= intersection->next;
    }
    return slow;
}

//removing loop forming node
void removeLoopNode(Node* head){
    if(head == NULL){
        return ;
    }
    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp= temp->next;
    }
    temp->next = NULL;

}



int main(){
//created a new node
Node* node1 = new Node( 10);
//    cout<<node1-> data <<endl;
//    cout<<node1 -> next <<endl;

//head pointed to node1
Node* head = node1;
//tail pointed to node1
Node* tail = node1;
// print(head);

// InsertAtHead( head,12);
// print (head);

InsertAtTail(tail,12);
// print(head);

InsertAtTail(tail,23);
// print(head);

InsertAtPostion(tail, head ,4,26);

tail->next= head->next ; //making list circular by join two nodes

cout<<"head "<<head->data <<endl;
cout<<"tail "<<tail->data <<endl;
// print(head);
if(floydDetectLoop(head) != NULL){
    cout<<"cycle is present"<<endl;
}
else{
    cout<<"cycle is not present"<<endl;
}
Node* loop= getStartingNode(head);
cout<<" loop starts at " <<loop ->data<<endl;

removeLoopNode(head);
print(head);

// deleteNode(4, head);
// print(head);

// cout<<"head "<<head->data <<endl; //do check for while deleting last node how t handle tail
// cout<<"tail "<<tail->data <<endl;



}