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

     // Bubble sort
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    } 


    cout <<"Sorted Array:";
    for (int i = 0; i < 10; i++) {
        cout<< arr[i] << " ";
    }


    return 0;

    }

