#include <iostream>
#include <set>
using namespace std;

int main(){
    // set is a type of container which have functions similar to map 
    set<int> s;
     
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);


    //Set ignores duplicate values and storeds them only once 
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // Size of set
    cout<<"set size = "<<s.size()<<endl;
    // iterating through set 
    for ( auto p:s){
        cout<<p<<" ";
    }
    cout<<endl;
    //Lowerbound(x) in set --> return the iterator for value >=x present in set 
    cout<<" lower bound = "<<*(s.lower_bound(4))<<endl; //lower_bound(x) returns an iterator pointing to the first element in the set which is ≥ x (greater than or equal to x).

    // Lower bound 7
    auto it = s.lower_bound(7);
    if(it != s.end()) cout << "lower bound of 7 = " << *it << endl;
    else cout << "lower bound of 7 = not found" << endl;

    // upper_bound(x) returns an iterator pointing to the first element in the set which is > x (strictly greater than x).
    cout<<"upper bound = "<<*(s.upper_bound(1))<<endl;
    return 0;
}