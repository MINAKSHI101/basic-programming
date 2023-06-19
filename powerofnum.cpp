#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n,x;
    int product = 1;
    cin>>x>>n;
    for(int i= 1;i<n+1;i++){
        product=x*product;
        
    }
    cout<< product;
}