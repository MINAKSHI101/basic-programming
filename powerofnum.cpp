#include<iostream>
#include<stdio.h>
using namespace std;
void Power(int num){
    int product=1,sum,temp=num,rem = temp%10;{
        for(int i=1;i<=3;i++){
            product = rem*product;
        }
    }
void Sumnum(int product){
    int sum=0;
    sum=sum+product;


    }
}

int main(){
    int num,rem,temp,sum,product;
    cin>>num;
    temp=num;
    while(temp!=0){
        temp=temp/10;
        rem= temp%10;
    }
    
    cout<< Sumnum(product);
    
    }
   