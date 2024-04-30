#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[10], i;

    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<10; i++){
        cin>>a[i];
    }

    cout<<" "<<endl;

    cout<<"Normal Order: ";
    for(i=0; i<10; i++){
        cout<<a[i]<< " ";
    }

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<< "Reverse Order: ";
    for(i = 10-1; i>=0; i--){
         cout<<a[i]<< " ";
    }

    cout<<" "<<endl;

return 0;
}
