#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    node* head;
    node* tail;
    public:
    list(){
        head=tail=NULL;
    }

    // Function to create Linked list
    void createLinkedList(){
        int n,val;
        cout<<"Enter size of linked list : ";
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Enter value of node "<<i+1<<" : ";
            cin>>val;
            push_back(val);
        }
    }
    // Function to insert a new node at the beginning of the linked list
    void push_front(int val){
        node* newNode= new node(val);//DMA
    
        if(head==NULL){//if ll is empty 
            head=tail=newNode;
            return;
        }
        // if ll has some nodes
        newNode->next=head;
        head=newNode;
        
    }

    // Function to insert a new node at the end of the linked list
    void push_back(int val){
        node* newNode= new node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        
        tail->next=newNode;
        tail=newNode;
        
    }

    // Function to insert a new node at the given position in the linked list
    void insert(int val,int pos){
        if (head == NULL) {
            if (pos == 0) {
                push_front(val);
            } 
            else {
                cout << "Invalid Position!" << endl;
            }
        return;
        }

        if(pos<0){
            return ;
        }

        if(pos==0){
            push_front(val);
            return;
        }
        node* temp=head;
        for(int i=0;i<pos-1;i++){
            if (temp->next == NULL) {
                cout << "Invalid Position!" << endl;
                return;
            }
            temp=temp->next;
        }

        node* newNode= new node(val);
        newNode->next=temp->next;
        temp->next=newNode;
        if (newNode->next == NULL) {
        tail = newNode;
        }

    }

    // Function to delete a node from the beginning of the linked list
    void pop_front(){
        if(head==NULL){
            return ;
        }
        node* temp=head;
        head=head->next; 

        if(head==NULL) tail=NULL;

        temp->next=NULL;
        delete temp;
    }
    // Function to delete a node from the end of the linked list
    void pop_back(){
        if(head==NULL){
            return ;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
    // Function to delete a node from specific position from the linked list
    void deleteNode(int pos){
        node* temp;
        node* curr=head;
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(pos<0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos==0){
            if(head==tail){
                delete head;
                head=tail=NULL;
                return;
            }
            head=head->next;
            delete curr;
            return;
        }
        for(int i=0;i<pos-1;i++ ){
            if (curr == NULL || curr->next == NULL) {
                cout << "Invalid Position" << endl;
                return;
            }
            curr=curr->next;
        }
        if(curr->next==NULL) {
            cout << "Invalid Position" << endl;
            return;
        }
        temp=curr->next;
        curr->next=temp->next;
        if(temp==tail) tail=curr;
        delete temp;
    }

    // To print entire linked list 
    void display(){
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout << "NULL" << endl;
    }

    // Function to search an element in the linked list
void search(int key) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    node* temp = head;
    int pos = 0;

    while (temp != NULL) {
        if (temp->data == key) {
            cout << "Element found at position " << pos << endl;
            return;
        }

        temp = temp->next;
        pos++;
    }

    cout << "Element not found." << endl;
}

    // Function to count nodes
    int countNodes() {
        int count = 0;
        node *temp = head;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        return count;
    }
};

int main() {
    list ll;
    int choice, val, pos, key;

    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Create Linked List\n";
        cout << "2. Insert at Beginning\n";
        cout << "3. Insert at End\n";
        cout << "4. Insert at Specific Position\n";
        cout << "5. Delete from Beginning\n";
        cout << "6. Delete from End\n";
        cout << "7. Delete from Specific Position\n";
        cout << "8. Display Linked List\n";
        cout << "9. Search an Element\n";
        cout << "10. Count Nodes\n";
        cout << "11. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            ll.createLinkedList();
            break;

        case 2:
            cout << "Enter value: ";
            cin >> val;
            ll.push_front(val);
            break;

        case 3:
            cout << "Enter value: ";
            cin >> val;
            ll.push_back(val);
            break;

        case 4:
            cout << "Enter value: ";
            cin >> val;
            cout << "Enter position: ";
            cin >> pos;
            ll.insert(val, pos);
            break;

        case 5:
            ll.pop_front();
            break;

        case 6:
            ll.pop_back();
            break;

        case 7:
            cout << "Enter position: ";
            cin >> pos;
            ll.deleteNode(pos);
            break;

        case 8:
            ll.display();
            break;

        case 9:
            cout << "Enter element to search: ";
            cin >> key;
            ll.search(key);
            break;

        case 10:
            cout << "Total Nodes = " << ll.countNodes() << endl;
            break;

        case 11:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 11);

    return 0;
}