#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cout<<"No of rows:";
    cin>>n;
    cout<<"No of columns:";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int rows=0;
    int rowe=n-1;
    int cols=0;
    int cole=m-1;
    while(rows<=rowe && cols<=cole){
        for(int col=cols;col<=cole;col++){
            cout<<arr[rows][col]<<" ";

        }
        rows++;
        for(int row=rows;row<=rowe;row++){
            cout<<arr[row][cole]<<" ";

        }
        cole--;
        for(int col=cole;col>=cols;col--){
            cout<<arr[rowe][col]<<" ";

        }
        rowe--;
        for(int row=rowe;row>=rows;row--){
            cout<<arr[row][cols]<<" ";

        }
        cols++;
    }

    cout<<endl;

    return 0;


}