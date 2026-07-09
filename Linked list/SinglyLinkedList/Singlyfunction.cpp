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
    void countNodes() {
        int count = 0;
        node *temp = head;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        cout<< "total nodes are : "<<count;
    }
};

int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.display();
    ll.push_back(4);
    ll.display();
    ll.pop_front();
    ll.display();
    ll.pop_back();
    ll.display();
    ll.insert(1,0);
    ll.display();
    ll.deleteNode(2);
    ll.display();
    ll.search(2);
    ll.display();
    ll.countNodes();
    return 0;
}