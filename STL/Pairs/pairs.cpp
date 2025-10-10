#include <iostream>
#include <vector>

using namespace std;

int main(){
    //Pairs -->> 

    // To initialize with multiple pairs 
    pair<int ,int> p1[] ={
        {1,2},
        {2,3}
    }; // we have to use [] brackets
  
    //To initialize with single pair
    pair<int ,int> p2 ={1,2};


    //To initialize pair with different types
    pair<int ,string> p3 ={1,"hello"};

    //To initialize pair inside pair 
    pair<int ,pair<char,int>> p4 ={1,{'a',3}};


    //Vector of pair
    vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};

    // Accessing pair elements by .first and .second

    cout << "First pair array element:" << endl;
    cout << p1[0].first << " " << p1[0].second << endl; //Accessing via index 
    cout << p1[1].first << " " << p1[1].second << endl;

    cout << "\nSingle pair:" << endl;
    cout << p2.first << " " << p2.second << endl;

    cout << "\nDifferent type pair:" << endl;
    cout << p3.first << " " << p3.second << endl;

    cout << "\nPair inside Pair:" << endl;
    cout << p4.first << " " <<"{" <<p4.second.first <<","<<p4.second.second<<"}"<< endl;

    // inserting in vector of pairs
    vec.push_back({4,5}); //insert
    vec.emplace_back(4,5); //inplace object create

    for( auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }



    return 0;
}