#include <iostream>

using namespace std;

int main()
{
    int i, birthYear, currentYear = 2022, count = 0;


    cout << "Enter your Birth Year: " ;
    cin >> birthYear;
    for ( i = birthYear; i <= currentYear; i++ ) {
        if ( ( i % 4 == 0 && i % 100 != 0 ) || i % 400 == 0 ) {
            count++;
        }
    }
    cout << "The number of LEAP YEAR from your birth year is: " << count;
    return 0;
}
