#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int start;
    int sum =0;
    int end;
    cin>>start>>end;
    for(int i=start;i<=end;i++){
        sum= sum+i;
    }
    cout<<sum;
}