#include <iostream>

using namespace std;

int main()
{
    cout<< "MD. SHOHANUR RAHMAN SHOHAN" <<endl;
    cout<< "22-46013-1" <<endl;

    int a = 37;
    int b = 16;
    int c = 18;
    int addition;
    float average;
    int mod;

    addition = a+b+c;
    cout<< "Addition: " << addition <<endl;

    average = (float) (a+b+c)/3;
    cout<< "Average: " << average <<endl;

    mod = a % (int)average;
    cout<< "Modulus: " << mod <<endl;

    return 0;
}
