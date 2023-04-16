#include<iostream>
using namespace std;

int main(){
    int n,m,o,p;
    cout<<"Enter Row of First Matrix:";
    cin>>n;
    cout<<"Enter column of First Matrix:";
    cin>>m;
    int arr1[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr1[i][j];

        }
    }
    cout<<"Enter Row in Second Matrix:";
    cin>>o;
    if(m!=o){
        return 0;
    }
    cout<<"Enter Column of Second Matrix:";
    cin>>p;
    int arr2[o][p];
    for(int k=0;k<o;k++){
        for(int l=0;l<p;l++){
            cin>>arr2[k][l];
        }
    }

    int mularr[n][p];
    for(int a=0;a<n;a++){
        for(int b=0;b<p;b++){
            mularr[a][b]=0;
        }
    }
    for (int x=0;x<n;x++){
        for(int y=0;y<p;y++){
            for(int z=0;z<m;z++){
                mularr[x][y]+=arr1[x][z]*arr2[z][y];
            }
        }
    }
    for(int c;c<n;c++){
        for(int d=0;d<p;d++){
            cout<<mularr[c][d]<<" ";
        }
        cout<<endl;
    }
    return 0;
 
}