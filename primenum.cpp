#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=2;i<num;i++){
        if(num%i==0 ){
            if(num==i && num%i==0){
            cout<<num<<" is not a prime num";}
            break;
        }
        else{
            cout<<num<<" is a prime num";
            break;
        }
       
    }
}