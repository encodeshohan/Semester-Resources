#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int *m, int n, int item){
    for (int i = 0; i<n; i++){
        if(m[i]==item){
            return i;
        }
    }
    return -1;
}

int main(){


    int n;
    cout<<"Enter Your Array Size: ";
    cin>>n;
    int *a = new int[n];
    //int *a = (int*)malloc(n*sizeof(n));
    //int *a = (int*)calloc(n,sizeof(n));

    cout<<""<<endl;

    cout<<"Enter Array Element: ";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cout<<""<<endl;
    int item;

    cout<<"You are searching item: ";
    cin>> item;
    int i = LinearSearch(a, n, item);

    if (i == -1){
        cout<<"item not found";
    }
    else{
        cout<<a[i]<<" found in "<<i<<" location"<<endl;
    }

return 0;}

