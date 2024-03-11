#include <iostream>
using namespace std;

int main() {

  int arr[10];
  int counterEven = 0;
  int counterOdd = 0;

  int temp;

    for (int i = 0; i < 10; i++) {
        arr[i] = i;

        cout<< "Enter value for  " <<i<< " : ";
        cin>>arr[i];

        if (arr[i] % 2 == 0) {
            counterEven++;
        }
        else {
            counterOdd++;
        
    }
 }
    cout<< "Even numbers: " << counterEven << endl;
    cout<< "Odd numbers: " << counterOdd << endl;


    cout <<"Sorted Array:";
    for (int i = 0; i < 10; i++) {
        cout<< arr[i] << " ";
    }


    return 0;

    }

