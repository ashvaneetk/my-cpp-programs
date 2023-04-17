#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter max columns:";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=x-i;j>=0;j--){
            cout<<" ";
            
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }

        cout<<endl;

    }
    return 0;
}