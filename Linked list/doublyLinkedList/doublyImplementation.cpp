#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};
class DoublyList{
    Node *head;
    Node *tail;
    public:
    DoublyList(){
        head=tail=NULL;
    }
    
    void createLinkedList(){
        int n,val;
        cout<<"Enter size of linked list : ";
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Enter value of node "<<i+1<<" : ";
            cin>>val;
            insertEnd(val);
        }
    }
    void insertBegining(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            head->prev=newNode;
            newNode->next=head;
            head=newNode;
        }
    }
    void insertEnd(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
    }
    void display(){
        if(head==NULL){
            cout<<"Doubly linked List is empty "<<endl;
            return;
        }
        cout<<"NULL <=> ";
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" <=> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void deleteBegining(){
        if(head==NULL){
            cout<<"Doubly linked List is empty "<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
            
        }
        else{
            tail=NULL;
        }
        temp->next=NULL;
        delete temp;
    }
    void deleteEnd(){
        if(head==NULL){
            cout<<"Doubly linked List is empty "<<endl;
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        if(tail!=NULL){
            tail->next=NULL;
        }
        else{
            head=NULL;
        }
        temp->prev=NULL;
        delete temp;
    }
    void insertAt(int val,int pos){
        if(pos<0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos==0){
            insertBegining(val);
            return;
        }
        Node* temp=head;
        for(int i=0;i<pos-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"Invalid Position";
            return;
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        newNode->prev=temp;
        if(temp->next!=NULL){
            temp->next->prev=newNode;
        }
        else{
            tail=newNode;
        }
        temp->next=newNode;

    }
    void deleteAt(int pos){
        if(head==NULL){
            cout<<"Doubly linked List is empty "<<endl;
            return;
        }
        if(pos<0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos==0){
            deleteBegining();
            return;
        }
        Node* temp=head;
        for(int i=0;i<pos && temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"Invalid Position"<<endl;
            return;
        }
        temp->prev->next=temp->next;
        if(temp->next!=NULL){
            temp->next->prev=temp->prev;
        }   
        delete temp;
    }
    void search(int key){
        Node* temp=head;
        int pos=0;
        while(temp!=NULL){
            if(temp->data==key){
                cout<<"Element found at position "<<pos<<endl;
                return;
            }
            temp=temp->next;
            pos++;
        }
        cout<<"Element not found."<<endl;
    }
    int countNodes(){
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }

};
int main(){
    DoublyList ll;
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
            ll.insertBegining(val);
            break;

        case 3:
            cout << "Enter value: ";
            cin >> val;
            ll.insertEnd(val);
            break;

        case 4:
            cout << "Enter value: ";
            cin >> val;
            cout << "Enter position: ";
            cin >> pos;
            ll.insertAt(val, pos);
            break;

        case 5:
            ll.deleteBegining();
            break;

        case 6:
            ll.deleteEnd();
            break;

        case 7:
            cout << "Enter position: ";
            cin >> pos;
            ll.deleteAt(pos);
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