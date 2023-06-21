#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int num,rem,temp, product=1,sum=0,count=0;
    cin>>num;
    temp=num;
    while(temp!=0){

        rem = temp %10 ;
        temp = temp/10;
        if(temp!=0){
        count = count+1;}
    }
    
        for(int i=1;i<=count;i++){
            product=product*rem;
        }
        sum= sum+product;
        temp=temp/10;
        if(num==sum){
            cout<<num<<"  is armstrong num";
        }
        else{
            cout<<num<<"  is not a armstrong num";
        }
    }


