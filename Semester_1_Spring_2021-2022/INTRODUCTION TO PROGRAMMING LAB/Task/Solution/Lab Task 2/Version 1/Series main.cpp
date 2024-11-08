#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "MD. SHOHANUR RAHMAN SHOHAN" << endl;
    cout << "22-46013-1" << endl;
    cout << endl;
    cout << endl;

    int x, a, sum = 0, inc = 1;


    cout << "Input the value of x: ";
    cin >> x;

    cout << endl;

    cout << "Input number of terms: ";
    cin >> a;

    cout << endl;

    cout << "The values of series: \n";

    for (int i = 0; i < a; i++) {
        int posNum = pow(x, inc);

        if (i % 2 == 0) {
            sum = sum + posNum;
            cout << posNum << endl;
        } else {
            sum = sum - posNum;
            cout << '-' << posNum << endl;
        }

        inc = inc + 2;
    }

    cout << "The sum = " << sum << endl;

    return 0;
}
