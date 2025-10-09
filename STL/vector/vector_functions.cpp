#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1;
    
    //push_back and pop_back
    vec1.push_back(1);//insert or push 1 at the end of the vector
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(5);
    cout<<"after push"<<endl;
    for(int e:vec1){
        cout<<e;
    }
    cout<<endl;
    vec1.pop_back();
    cout<<"after pop"<<endl;
    for(int e:vec1){
        cout<<e;
    }
    cout<<endl;
    
    //emplace_back() ---> somehow same as push_back()
    vec1.emplace_back(5);
    cout<<"after emplase_back"<<endl;
    for(int e:vec1){
        cout<<e;
    }
    cout<<endl;

    // front() --> point towards 1st element of vector
    cout<<"front element"<<vec1.front();
    cout<< endl;
    // front() --> point towards Last element of vector
    cout<<"last element"<<vec1.back();
    cout<< endl;
    // erase() --> To erase the element or range of elements , for range we ahave to provide it the start and end value where start is included but end is not erase[start,end)
    cout<<"after erase begining element "<<endl;
    vec1.erase(vec1.begin()); // here begin() points towards the beginning 
    for(int e:vec1){
        cout<<e;
    }
    cout<<endl;
     // to erase or delete value at index 2 is 
    cout<<"after erase index 2 element "<<endl;
     vec1.erase(vec1.begin()+2);
     for(int e:vec1){
        cout<<e;
    }
    cout<<endl;// here it will delete or erase 4
    // erase will change the value of size but not of capacity
    cout<<"size after erase : "<<vec1.size()<<endl;
    cout<<"capacity after erase : "<<vec1.capacity()<<endl;

    // insert() --> used to insert value at some position vec.insert(position , value );
    vec1.insert(vec1.begin()+2,4);
    vec1.insert(vec1.begin(),1);
    cout<<"after inserting 1 at index 0 and 4 at  index 2  "<<endl;
     for(int e:vec1){
        cout<<e;
    }
    cout<<endl;

    // clear() --> full vector is clreared ,it reduce size to 0 but capacity remains the same 

    /*vec1.clear();
    cout<<"after clear "<<endl;
     for(int e:vec1){
        cout<<e;
    }
    cout<<endl;*/

    // empty() --> to check whether the vector is empty or nor
    
    cout<<"is empty "<<vec1.empty()<<endl; // here it is not empty so it print 0

    // VECTOR ITERATOR 
     
    // begin() --> points towards begining element of vector 
    cout<<"value at begining : "<<*(vec1.begin())<<endl;
    // end() --> points toward the value next to end value, it may be garbage value or some other  
    cout<<"value after end : "<<*(vec1.end())<<endl;

    

    return 0;
}