#include <iostream>
#include <map>
using namespace std;

int main() {
    // Map is a key-value pair container
    // It stores unique keys in sorted order (ascending by default)
    map<string, int> m; // key: string, value: int

    // Inserting values
    m["Tv"] = 100;
    m["Laptop"] = 100;
    m["Headphones"] = 50;
    m["Tablet"] = 120;
    m["Watch"] = 50;

    // Iterating through map
    cout << "Initial map:\n";
    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    // Insert using insert()
    m.insert({"Camera", 25});

    // Insert using emplace() (faster, constructs in-place)
    m.emplace("Book", 55);

    // Erase element by key
    m.erase("Tv");

    // Iterating through map again
    cout << "After insertions and erase:\n";
    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    // Count — returns 1 if key exists, else 0
    cout << "count(\"Laptop\") = " << m.count("Laptop") << endl;

    // Accessing value by key
    cout << "Laptop = " << m["Laptop"] << endl;

    // Finding a key
    if (m.find("Camera") != m.end()) {
        cout << "Found\n";
    } else {
        cout << "Not found\n";
    }

    return 0;
}
