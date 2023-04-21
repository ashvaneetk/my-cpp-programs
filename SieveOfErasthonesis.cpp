#include<iostream>
using namespace std;

int Prime_Till_N(int n){
    int primeList[n+1];
    for(int i=0;i<n+1;i++){
        primeList[i]=0;
    }
    for(int j=0;j<=n;j++){
        if(primeList[j]==0){
            for(int k=j*j;k<=n;k=k+j){
                primeList[k]=1;
            }
        }
    }
    for(int l=2;l<n+1;l++){
        if(primeList[l]==0){
            cout<<l;
        }
    }
    cout<<endl;
    return 0;
}
int main(){
    int isprime;
    cout<<"Enter number till which you want to have prime numbers: ";
    cin>>isprime;
    Prime_Till_N(isprime);
    
    
    return 0;

}