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
    void findMiddle(){ // Function to find the middle element of the linked list
        // Using the slow and fast pointer approach
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return ;
        }
        node * slow=head;
        node * fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        cout<<"Middle Element is : "<<slow->data<<endl;

    }

};

int main(){
    list ll;
    ll.createLinkedList();
    ll.display();
    ll.findMiddle();
    return 0;
}