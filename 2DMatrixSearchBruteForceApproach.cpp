#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    cout<<"Order of Matrix:";
    cin>>n;
    cin>>m;
    int arr[n][m];
    cout<<"Enter Matrix:";
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        
        }
    }

    int x;
    cout<<"Enter Number to search:";
    cin>>x;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<"Element Found at:";
                return 0;
            }
        }
    }

    cout<<"Element not found.";
    return 0;
}