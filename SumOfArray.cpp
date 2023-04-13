#include<iostream>
using namespace std;

int main(){
    int sum;
    sum=0;
    int n;
    cout<<"Enter number of elements in array:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
        sum=sum+array[i];
    }
    cout<<sum<<endl;

}