#include<bits/stdc++.h>
using namespace std;


int isPrime(int n){

    int flag = 1;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}

void factorial(int n){
    int result=1;
    for(int i =n; i>=1; i--){
        result = result*i;
    }
    cout<<result;
}

int main(){

    int n;
    cout<<"Enter an number: ";
    cin>>n;

    if(isPrime(n)){
        cout<<"Factorial of "<< n <<" is : ";
        factorial(n);
    }
    else{
        cout<<"Error!! Not a prime Number"<<endl;
    }

return 0;}
