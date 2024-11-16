#include <iostream>
using namespace std;

int main() {
  int i;
  string statement;
  cout << "Enter the statement:";

  //cin >> statement;
  getline (cin, statement);

  cout << "The entered statement was:" <<statement<< endl;


      for (i=0;i<7;i++){
        if (statement[i] == '='){
            if(i==0){
            break;
            cout <<"INVALID INPUT"<<endl;
        }

        cout<<statement[i-1]<<endl;
        cout<<statement[i]<<endl;
    }
     if (statement[i] == '+' || statement[i] == '*' || statement[i] == '/' || statement[i] == '-'){
         if(i==0){
            break;
            cout <<"INVALID INPUT"<<endl;
        }
        cout<<statement[i-1]<<endl;
        cout<<statement[i]<<endl;


    }
    if (statement[i] == ';'){
         if(i==0){
            break;
            cout <<"INVALID INPUT"<<endl;
        }
        cout<<statement[i-1]<<endl;
        cout<<statement[i]<<endl;
  }
      }
  return 0;
}