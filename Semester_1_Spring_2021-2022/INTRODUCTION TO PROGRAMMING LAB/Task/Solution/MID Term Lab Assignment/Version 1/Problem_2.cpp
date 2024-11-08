#include <iostream>

using namespace std;

int main()
{
    int arr [5], sum = 0, i;
    cout << "Enter the ages: " << endl;
    for ( i = 0; i < 5; i++ ) {
        cin >> arr [i];
    }
    for ( i = 0; i < 5; i++ ) {
        sum = sum + arr[i];
    }
    cout << "Average Age is : " << (float) sum / 5 << endl;
    cout << endl;

    cout << "Total age: " << sum <<endl;
    cout << endl;

    if ( sum % 2 == 0 ) {
        cout << "Total age is EVEN";
    }
    else{
        cout << "Total age is ODD";
    }
    return 0;
}
