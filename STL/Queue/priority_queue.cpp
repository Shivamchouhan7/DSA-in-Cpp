#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Priority Queue uses heap internally
    // By default, it works as a MAX HEAP — the largest element has the highest priority
    priority_queue<int> q; // Default: Max Heap

    // Insert elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Printing and deleting elements (in descending order)
    while (!q.empty()) {
        cout << q.top() << " "; // top() gives highest priority element
        q.pop();                // remove top element
    }
    cout << endl;

    // Re-inserting elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Swapping with another priority queue
    priority_queue<int> q2;
    q2.swap(q); // q becomes empty after swap

    // Printing sizes
    cout << "q size : " << q.size() << endl;   // 0
    cout << "q2 size : " << q2.size() << endl; // 4

    // Creating a MIN HEAP using greater<int> as a comparator (functor)
    priority_queue<int, vector<int>, greater<int>> q3; //greater<int> Comparator (functor) that reverses the order

    // Insert elements
    q3.push(1);
    q3.push(2);
    q3.push(3);
    q3.push(4);

    // Printing and deleting elements (in ascending order)
    while (!q3.empty()) {
        cout << q3.top() << " "; // smallest element at the top
        q3.pop();
    }
    cout << endl;

    return 0;
}
