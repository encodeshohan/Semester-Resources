#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "MD. SHOHANUR RAHMAN SHOHAN" << endl;
    cout << "22-46013-1" << endl;
    cout << endl;
    cout << endl;

    cout << "Enter a number to check: ";
    cin >> num;
    cout << endl;

    if (num == 0 || num == 1) {
        cout << num << " IS NOT A PRIME NUMBER!!" << endl;
    } else {
        for (int i = 2; i <= num; i++) {
            if (num % i == 0 && i != num) {
                cout << num << " IS NOT A PRIME NUMBER!!" << endl;
                break;
            }

            if (i == num) {
                cout << num << " IS A PRIME NUMBER!!";
            }
        }
    }

    return 0;
}
