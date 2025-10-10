#include <iostream>
#include <deque>
using namespace std;

int main(){
    //Deque -->> Implemented with the help of Dynamic array and it has all functions that we used it vector 
    deque<int> d;


    //push_back() and push_front()
    d.push_back(1);//insert from end or at the end
    d.push_back(2);
    d.push_front(3);//insert from begining or at begining
    d.push_front(5);

    for(int e:d){
        cout<<e<<" ";
    }
    cout<<endl;

    //pop_back() and pop_front()
    d.pop_back();//delete from end 
    d.pop_front();//Delete from begining 
    for(int e:d){
        cout<<e<<" ";
    }
    cout<<endl;
    
    // As it is implemented as dynamic array so we cam also access its elements via index
    cout<<d[1];


    // It also have all other functions used by vectors 

    return 0;
}