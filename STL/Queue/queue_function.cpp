#include <iostream>
#include <queue>
using namespace std;

int main(){
    //Queue follows FIFO → First In, First Out
    queue<int> q;

    //to insert element
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    
//printing and deleting elements
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

   // Re-inserting elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    queue<int> q2;
    //Swaping in another queue
     q2.swap(q); // q becomes empty after swap

    // printing sizes 
     cout<<"q size : "<<q.size()<<endl;//0
     cout<<"q2 size : "<<q2.size()<<endl;//4

    return 0;
}