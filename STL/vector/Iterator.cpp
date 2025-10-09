#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec ={1,2,3,4,5};

    //ITERATOR --> by this we can directly acccess the memory location 
    vector<int>::iterator it;

    //For loop to print vector (Forward loop)
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // reverse Iterator (rbegin() ,rend())
    /* for(vector<int>::reverse_iterator it = vec.rbegin();it != vec.rend();it++){
        cout<<*(it)<<" ";
    }*/
    for(auto it = vec.rbegin();it != vec.rend();it++){ // here auto will work same as --> vector<int>::reverse_iterator
        cout<<*(it)<<" ";
    }
    cout<<endl;
    return 0;
}