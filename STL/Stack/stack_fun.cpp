#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    //to insert element
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

   // Re-inserting elements
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    stack<int> s2;
    //Swaping in another stack
     s2.swap(s); // s becomes empty after swap

    // printing sizes 
     cout<<"s size : "<<s.size()<<endl;//0
     cout<<"s2 size : "<<s2.size()<<endl;//4

    return 0;
}