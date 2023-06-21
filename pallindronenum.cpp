#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int num , rem,temp,reverse=0;
    cin<<num;
    temp=num;
     while(temp!=0){
        reverse= reverse*10+rem;
        rem= temp%10;
        temp= temp/10;}
        
        if(num==reverse){
            cout<< num<<"  is pallindrone num";
        }
        else{
            cout<< num<<" is not a pallindrone num";
        }

    }

