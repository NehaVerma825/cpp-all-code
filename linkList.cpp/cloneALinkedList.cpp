class Solution {
private: 
    void insertAtTail(Node* &head , Node* &tail , int d){
        Node* newNode= new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }


//SC=O(N) ; TC=O(N)
public:
    Node* copyList(Node* head) {
        // Step 1: Create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        // Step 2: Creating unordered map
        unordered_map<Node*, Node*> oldToNewNode;
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL){
            oldToNewNode[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL){
            cloneNode->arb = oldToNewNode[originalNode->arb];
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        
        return cloneHead;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline after T
    while (T--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Node *head = NULL, *tail = NULL;
        for (int i = 0; i < arr.size(); ++i) {
            append(&head, &tail, arr[i]);
        }

        getline(cin, input);
        stringstream ss2(input);
        vector<int> arr2;
        while (ss2 >> number) {
            arr2.push_back(number);
        }

        Node *temp = head;
        for (int i = 0; i < arr2.size(); i += 2) {
            int a = arr2[i];
            int b = arr2[i + 1];

            Node *tempA = head;
            Node *tempB = head;
            for (int j = 1; j < a; ++j) {
                tempA = tempA->next;
            }
            for (int j = 1; j < b; ++j) {
                tempB = tempB->next;
            }

            tempA->arb = tempB;
        }

        Solution ob;
        Node *res = ob.copyList(head);

        if (validation(head, res)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends