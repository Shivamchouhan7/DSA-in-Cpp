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
    void reverseLL(){
        node * prev=NULL;
        node * curr=head;
        node * next=NULL;
        tail=head;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

        }
        head=prev;
    }
};
int main(){ 
    list ll;
    ll.createLinkedList();
    ll.display();
    ll.reverseLL();
    ll.display();
    return 0;
}