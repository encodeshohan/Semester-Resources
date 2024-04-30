#include<bits/stdc++.h>
using namespace std;

    void oddNumDet(int a, int b){
        int i;
        cout<<"Number from "<<a<< " to "<< b<<" : ";
        for (i = a; i<=b; i++){
                cout<<i<<" ";

        }
        cout<<""<<endl;
        cout<<"Odd Number: ";
        for(i = a; i<=b; i++){
            if(i%2 != 0){
                cout<<i<< " ";
            }
        }
    }


int main(){

        int c, d;

        cout<<"Starting Value: ";
        cin>>c;
        cout<<"Ending Value: ";
        cin>>d;

        oddNumDet(c,d);

return 0;
}
