#include <iostream>

using namespace std;

int main()
{
    cout << "MD.SHOHANUR RAHMAN SHOHAN" << endl;
    cout << "22-46013-1" << endl;
    cout << endl;
    int num1, num2, i, sum = 0;
    cout <<"Enter The First Number: ";
    cin >> num1;
    cout <<"Enter The Second Number: ";
    cin >> num2;
    cout << endl;

    if (num1<num2)
    {
        for(i=num1; i<=num2; i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
        }
    }

    else
        for(i=num2; i<=num2; i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
        }

    cout << "Sum of Even Numbers: " <<sum;
    return 0;
}
