//Link list Node
struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};
class Solution {
  private:
    // Function to insert a node at the end of the list
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

  public:
    Node* copyList(Node* head) {
        // Step 1: Create a clone list  TC= O(n)
        Node* cloneHead = NULL; // Corrected from 'Node* cloneHead= NULL:'
        Node* cloneTail = NULL; // Corrected from 'Node* cloneTail = NULL:'
        Node* temp = head;
        while (temp != NULL) { // Corrected from 'while(temp != NULL){'
            insertAtTail(cloneHead, cloneTail, temp->data); // Fixed 'cloneTail' declaration error
            temp = temp->next;
        }
       
        // Step 2: Add clone nodes in between the original list    TC= O(n)
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while (originalNode != NULL && cloneNode != NULL) {
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;   
           
            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }
       
        // Step 3: Copy random pointers    TC= O(n)
        temp = head;
        while (temp != NULL) {
            if (temp->next != NULL) {
                temp->next->arb = temp->arb ? temp->arb->next : temp->arb;
               
                // if(temp->arb != NULL){
                //     temp->next->arb = temp->arb->next;
                // }
                // else{
                //     temp->next = temp->arb;
                // }
            }
            temp = temp->next->next;
        }
       
        // Step 4: Revert changes done in step 2    TC= O(n)
        originalNode = head;
        cloneNode = cloneHead; // Corrected from 'clonehead'
        while (originalNode != NULL && cloneNode != NULL) {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            if (originalNode != NULL) {
                cloneNode->next = originalNode->next;  
            }
            cloneNode = cloneNode->next;
        }
       
        // Step 5: Return ans    overall  TC= O(n)
        return cloneHead;    
    }
};

class Solution {
  private:
    // Function to insert a node at the end of the list
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

  public:
    Node* copyList(Node* head) {
        // Step 1: Create a clone list  TC= O(n)
        Node* cloneHead = NULL; // Corrected from 'Node* cloneHead= NULL:'
        Node* cloneTail = NULL; // Corrected from 'Node* cloneTail = NULL:'
        Node* temp = head;
        while (temp != NULL) { // Corrected from 'while(temp != NULL){'
            insertAtTail(cloneHead, cloneTail, temp->data); // Fixed 'cloneTail' declaration error
            temp = temp->next;
        }
       
        // Step 2: Add clone nodes in between the original list    TC= O(n)
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while (originalNode != NULL && cloneNode != NULL) {
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;   
           
            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }
       
        // Step 3: Copy random pointers    TC= O(n)
        temp = head;
        while (temp != NULL) {
            if (temp->next != NULL) {
                temp->next->arb = temp->arb ? temp->arb->next : temp->arb;
               
                // if(temp->arb != NULL){
                //     temp->next->arb = temp->arb->next;
                // }
                // else{
                //     temp->next = temp->arb;
                // }
            }
            temp = temp->next->next;
        }
       
        // Step 4: Revert changes done in step 2    TC= O(n)
        originalNode = head;
        cloneNode = cloneHead; // Corrected from 'clonehead'
        while (originalNode != NULL && cloneNode != NULL) {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            if (originalNode != NULL) {
                cloneNode->next = originalNode->next;  
            }
            cloneNode = cloneNode->next;
        }
       
        // Step 5: Return ans    overall  TC= O(n)
        return cloneHead;    
    }
};
