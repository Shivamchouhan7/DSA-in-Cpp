#include <iostream>
using namespace std;

// To buy and sell stock for maximum profit

// Function to calculate maximum profit 
int maxprofit(int price[],int n){
    int bestbuy=price[0]; // Assume first day's price as the best price to buy
    int maxprofit=0;
    for(int i=1;i<n;i++){
        if(price[i]>bestbuy){
            maxprofit =max(maxprofit,price[i]-bestbuy);
        }
        bestbuy = min(bestbuy,price[i]);
    }
    return maxprofit;
}

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int price[n];
    cout<<"Enter the prices of stock :-\n";
    for(int &e:price){
        cin>>e;
    }
    int maximumprofit=maxprofit(price,n);
    cout<<"maximum profit is :"<<maximumprofit;
    return 0;
}