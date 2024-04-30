# include<iostream>                                           // ## Array Size 10
using namespace std;                                          // ## Input in array
                                                              // ## Print the array
int main(){                                                   // ## Print all even numbers in the array
                                                              // ## Print How many even number in the array
    int arr[10], i, e = 0;

    cout<<"Enter 10 Array Elements: ";
    for(i = 0; i<10; i++){
        cin>>arr[i];
    }

     cout<<""<<endl;

     cout<<"Array Elements : ";
     for(i = 0; i<10; i++){
        cout<<arr[i]<< " ";
     }

     cout<<""<<endl;
     cout<<""<<endl;

     cout<<"Even Elements : ";
     for(i = 0; i<10; i++){
        if(arr[i] % 2 == 0){
            cout<<arr[i]<< " ";
        }
     }

     cout<<""<<endl;
     cout<<""<<endl;

     for(i = 0; i<10; i++){
        if(arr[i] % 2 == 0){
            e++;
        }
     }
     cout<<"Number of Even Elements : "<< e;

     cout<<""<<endl;

    return 0;
}
