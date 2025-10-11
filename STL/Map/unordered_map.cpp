#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    // Unordered map has unordered data (not in sorted form)
    unordered_map<string ,int> m;
    
    // Insert key-value pairs
    m.emplace("tv",100);
    m.emplace("laptop",100);
    m.emplace("fridge",100);
    m.emplace("watch",100);

    // Iterate through the unordered_map
    for (auto p: m){
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    return 0;
}
