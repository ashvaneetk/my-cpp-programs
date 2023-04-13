#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows:";
    cin>>n;
    cout<<"Enter columns:";
    cin>>m;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int arrtrans[m][n];
    for (int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            arrtrans[b][a]=arr[a][b];
        }
    }
    for (int c=0;c<m;c++){
        for (int d=0;d<n;d++){
            cout<<arrtrans[c][d];
        }
        cout<<endl;
        
    }
    return 0;
}