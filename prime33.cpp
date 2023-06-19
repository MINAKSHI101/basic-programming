#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int num;
    bool isprime=true;
    cin>>num;
    if(num<2){
        isprime=false;
        cout<<num<<"  is not prime";
    }
    else{

        for(int i=2;i<num;i++){
            if(num%i==0){
            isprime = false;
            break;
            
            
        }
        }
    
        cout<< num<<" is a prime num";       
    }
}