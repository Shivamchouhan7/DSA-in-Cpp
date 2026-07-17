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
class Circularlist{
    node* head;
    node* tail;
    public:
    Circularlist(){
        head=tail=NULL;
    }
    ~Circularlist(){
        if(head==NULL) return;
        node* cur = head->next;
        while(cur != head){
            node* nxt = cur->next;
            delete cur;
            cur = nxt;
        }
        delete head;
        head = tail = NULL;
    }

    // Function to create Linked list
    void createLinkedList(){
        while(head != NULL) {
            pop_front();
        }
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
            tail->next=head;
            return;
        }
        // if ll has some nodes
        newNode->next=head;
        head=newNode;
        tail->next=head;
        
    }

    // Function to insert a new node at the end of the linked list
    void push_back(int val){
        node* newNode= new node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
            return;
        }
        
        tail->next=newNode;
        tail=newNode;
        tail->next=head;
        
    }

    // Function to insert a new node at the given position in the linked list
    void insert(int val,int pos){
        if(pos<0){
            cout<<"Invalid position"<<endl;
            return ;
        }

        if(pos==0){
            push_front(val);
            return;
        }
        if(pos>countNodes()){
            cout<<"Invalid position"<<endl;
            return ;
        }
        node* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        node* newNode= new node(val);
        newNode->next=temp->next;
        temp->next=newNode;
        if (temp == tail) {
        tail = newNode;
        }
        tail->next = head;

    }

    // Function to delete a node from the beginning of the linked list
    void pop_front(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return ;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        node* temp=head;
        head=head->next;
        tail->next=head;

        temp->next=NULL;
        delete temp;
    }
    // Function to delete a node from the end of the linked list
    void pop_back(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return ;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        node* temp=tail;
        node*prev=head;
        while(prev->next!=tail){
            prev=prev->next;
        }   
        tail=prev;  
        tail->next=head;
        temp->next=NULL;
        delete temp;
    }
    // Function to delete a node from specific position from the linked list
    void deleteNode(int pos){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(pos<0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos==0){
            pop_front();
            return;
        }
        if(pos>=countNodes()){
            cout<<"Invalid position"<<endl;
            return;
        }
        node* curr=head;
        for(int i=0;i<pos-1;i++ ){
            curr=curr->next;
        }
        
        node* temp=curr->next;
        curr->next=temp->next;
        if(temp==tail) {
            tail=curr;
        }
        tail->next=head;
        delete temp;
        
    }

    // To print entire linked list 
    void display(){
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        node* temp=head;
        do{
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }while (temp != head);
        cout << "Head" << endl;
    }

    // Function to search an element in the linked list
void search(int key) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    node* temp = head;
    int pos = 0;

    do {
        if (temp->data == key) {
            cout << "Element found at position " << pos << endl;
            return;
        }

        temp = temp->next;
        pos++;
    }while (temp != head);

    cout << "Element not found." << endl;
}

    // Function to count nodes
    int countNodes() {
        if(head == NULL) {
            return 0;
        }
        int count = 0;
        node *temp = head;

        do
        {
            count++;
            temp = temp->next;
        }while (temp != head);

        return count;
    }
};

int main() {
    Circularlist ll;
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