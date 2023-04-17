#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter x:";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=x;k>i;k--){
            cout<<"  ";
        }
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int p=x;p>0;p--){
        for(int q=p;q>0;q--){
            cout<<"*";
        }
        for(int r=p;r<x;r++){
            cout<<"  ";
        }
        for(int s=p;s>0;s--){
            cout<<"*";
        }
        cout<<endl;
    }
}