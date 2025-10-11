#include <iostream>
#include <map>
using namespace std;

int main() {
    // Map is a key-value pair container
    // It stores unique keys in sorted order (by default ascending order)
    map<string, int> m; // key: string, value: int

    // Inserting values
    m["Tv"] = 100;
    m["Laptop"] = 100;
    m["Headphones"] = 50;
    m["Tablet"] = 120;
    m["Watch"] = 50;

    // Iterating through map
    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    cout<<endl;
    // To insert key value pair in map 
    m.insert({"Camera",25});

    // Similarly by emplace (we not need to create object)
    m.emplace("Book",55);

    //To erase we have to pass key 
    m.erase("Tv");

    // Iterating through map again
    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
cout<<endl;

    // count 
    cout<<"count = "<<m.count("Laptop")<<endl;

    //value stored by laptop
    cout<<"laptop ="<<m["Laptop"]<<endl;

    // to find any key 
    if(m.find("Camera") != m.end()){
        cout<<"Found\n";
    }
    else{
        cout<<"not found\n";
    }
    return 0;
}
