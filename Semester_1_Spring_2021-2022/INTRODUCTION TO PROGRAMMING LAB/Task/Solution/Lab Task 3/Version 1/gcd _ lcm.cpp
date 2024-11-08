#include <iostream>
using namespace std;

int main (){

    cout << "MD. SHOHANUR RAHMAN SHOHAN" << endl;
    cout << "22-46013-1" << endl;
    cout << endl;

    int n1, n2, num1, num2, rem, lcm, gcd;
    cout <<"Please type in two nonnegative integers."<<endl;
    cin >> n1;
    cin >> n2;

    num1 = n1;
    num2 = n2;

    while ( num2 != 0 ){
        rem = num2;
        num2 = num1 % num2;
        num2 = rem;
    }
    gcd = num1;
    lcm = (n1*n2)/gcd;
    cout<< "Their greatest common divisor is "<< gcd << endl;
    cout << "Greatest Common Divisor is " << lcm ;
    return 0;
}

