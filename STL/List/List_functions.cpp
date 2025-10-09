#include <iostream>
#include <list>
using namespace std;

int main(){
    //List -->> Implemented as a Doubly Linked list and it has all functions that we used it vector 
    list<int> l;


    //push_back() and push_front()
    l.push_back(1);//insert from end or at the end
    l.push_back(2);
    l.push_front(3);//insert from begining or at begining
    l.push_front(5);

    for(int e:l){
        cout<<e<<" ";
    }
    cout<<endl;

    //pop_back() and pop_front()
    l.pop_back();//delete from end 
    l.pop_front();//Delete from begining 
    for(int e:l){
        cout<<e<<" ";
    }
    cout<<endl;


    return 0;
}