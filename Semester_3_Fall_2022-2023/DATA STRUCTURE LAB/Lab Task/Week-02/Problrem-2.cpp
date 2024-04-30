#include<bits/stdc++.h>
using namespace std;

int main(){


    int a[10], i, e=0, o=0;

    cout<<"Enter 10 Array Elements: "<<endl;
    for(i = 0; i<10; i++){
        cin>>a[i];
    }

    for(i=0; i<10; i++){
        if(a[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }

    cout<< e <<" Even Numbers"<<endl;
    cout<< o <<" Odd Numbers"<<endl;

return 0;
}
