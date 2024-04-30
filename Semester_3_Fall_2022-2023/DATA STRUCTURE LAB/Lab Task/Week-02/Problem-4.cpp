#include<bits/stdc++.h>
using namespace std;

int main(){

    int i, j, row=3, col=3;

    int a[row][col], b[row][col], c[row][col];

    cout<<"First Matrix: "<< endl;

    for(i = 0; i<row; i++){
        for(j =0; j<col; j++){
            cin>>a[i][j];
        }
        cout<<""<<endl;
    }

    cout<<"Second Matrix: "<< endl;
    for(i = 0; i<row; i++){
        for(j =0; j<col; j++){
            cin>>b[i][j];
        }
        cout<<""<<endl;
    }

    cout<<"Third Matrix: "<< endl;
    for(i = 0; i<row; i++){
        for(j =0; j<col; j++){
            cin>>c[i][j];
        }
        cout<<""<<endl;
    }

    cout<<"Addition Matrix: "<< endl;
    for(i = 0; i<row; i++){
        for(j =0; j<col; j++){
            cout<<a[i][j]+b[i][j]+c[i][j] <<" ";
        }
        cout<<""<<endl;
    }


return 0;
}
