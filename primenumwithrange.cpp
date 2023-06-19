#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n,i,arr[i];
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=2;j<n;j++){
            if(n%j==0){
                continue;
            }
            else{
            arr[i]=j;
            continue;
            }
        }
    }
}