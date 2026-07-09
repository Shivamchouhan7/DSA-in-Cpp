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

    // To print entire linked list 
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout << "NULL" << endl;
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
    return 0;
}