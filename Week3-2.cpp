//Sorting Array
#include <iostream>
using namespace std;

int main() {
int arr[10];

for (int i=0; i < 10; i++) {
  cout << "Entern value for " << i+1 << ":";
  cin >> arr[i];
}

//bubble sort
for ( int i=0; i<9; i++)  {
  for (int j=0; j<9-i; j++) {
    if (arr[j]> arr[j+1]) {

  //swap elements
  int temp = arr[j];
  arr[j]= arr[j+1];
  arr [j+1]=temp;

    }
  }
}

cout << "Sorted array in ascending order: \n";
for (int i=0; i<10; i++) {
    cout << arr[i]<< " " ;
}
cout << endl;

return 0;
}
