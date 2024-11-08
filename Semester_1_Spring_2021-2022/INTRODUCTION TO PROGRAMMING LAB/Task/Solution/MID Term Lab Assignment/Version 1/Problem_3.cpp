#include <iostream>

using namespace std;

int main()
{
    char chr, opp;
    float n1, n2;

    cout << "If you want to start the system please press Y" << endl;
    cout << endl;
    cout << "If you want to close the system please press N" << endl;
    cout << endl;
    cout << "Press: ";

    cin >> chr;
    cout << endl;
    cout << endl;

    if(chr == 'Y'){
        cout << " + : Add two float number"<<endl;
        cout << endl;
        cout << " - : Subtraction between two float number"<<endl;
        cout << endl;
        cout << " * : Multiplication between two float number"<<endl;
        cout << endl;
        cout << " / : Division between two float number"<<endl;
        cout << endl;
        cout <<"Select an operator: ";
        cin >> opp;
        cout << endl;
        if ( opp == '+' ){
            cout << "Enter two float number: ";
            cin  >> n1 >> n2;
            cout << endl;
            cout << "ADDITION of two float number: "<< n1 + n2;
        }
        else if ( opp == '-' ){
            cout << "Enter two float number : ";
            cin  >> n1 >> n2;
            cout << endl;
            cout << "SUBTRACTION of two float numbers: "<< n1 - n2;
        }
        else if ( opp == '*' ){
            cout << "Enter two float number : ";
            cin  >> n1 >> n2;
            cout << endl;
            cout << "MULTIPLICATION of two float numbers: "<< n1 * n2;
        }
        else if ( opp == '/' ){
            cout << "Enter two float number : ";
            cin  >> n1 >> n2;
            cout << endl;
            cout << "DVISION of two float numbers: " << n1 / n2;
        }
        else
            cout << "INVALID OPERATOR" <<endl;
    }

    else if( chr == 'N' ) {
        cout << "CLOSE" << endl;;
    }
    return 0;
}
