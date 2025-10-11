#include <iostream>
#include <map>
using namespace std;

int main() {
    // Multimap is a key-value pair container
    // It stores keys in sorted order and allows duplicate keys
    multimap<string, int> m;

    //  Correct way to insert values
    m.insert({"Tv", 100});
    m.insert({"Tv", 200});
    m.insert({"Tv", 300});
    m.insert({"Laptop", 100});
    m.insert({"Headphones", 50});
    m.insert({"Tablet", 120});
    m.insert({"Watch", 50});
    m.insert({"Laptop", 90}); // duplicate key allowed

    // Iterating through multimap
    cout << "Contents of multimap:\n";
    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;

    // Count how many values exist for a specific key
    cout << "Laptop count: " << m.count("Laptop") << endl;

    // Retrieve all values for a particular key
    auto range = m.equal_range("Laptop");
    cout << "\nAll values for key 'Laptop':\n";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " " << it->second << endl;
    }
    cout<<endl;
    //to erase single occurane of tv
    m.erase(m.find("Tv"));

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    
    //to erase full occurane of tv
    m.erase("Tv");

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    return 0;
}
