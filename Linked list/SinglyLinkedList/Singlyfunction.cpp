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
        else{// if ll has some nodes
            newNode->next=head;
            head=newNode;
        }
    }


};

int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    return 0;
}