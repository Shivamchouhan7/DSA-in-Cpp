#include <iostream>
#include <vector>
using namespace std;

//Approach for finding the count of prime number in a range 

// In this Sieve of Eratosthenes we assume all numbers to be prime 

int count_prime(int n){
    int count=0;
    vector<bool> isPrime(n+1,true);

    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            count++;
            for(int j=i*i;j<=n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    return count;

}

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    cout<<"There are "<<count_prime(n)<<" prime number are there in this range \n";
    return 0;
}