#include <iostream>

using namespace std;

int main()
{
    cout << "MD. SHOHANUR RAHMAN SHOHAN" << endl;
    cout << "22-46013-1" << endl;
    cout << endl;

    int num1, num2, sum;

    num1= 0;
    num2= 1;
    sum = 0;
    while (sum<200)
    {
        cout <<sum<< " ";
        num1=num2;
        num2=sum;
        sum=num1+num2;
    }

    return 0;
}
