
#include <iostream>
using namespace std;

void max(int arr[3][3]) {
  int maxNum = arr[0][0];
  for( int i=0;  i < 3 ; i++) {
    for( int j=0; j < 3 ; j++){
        if(arr[i][j] > maxNum) {
        maxNum = arr[i][j];
        }
     }
  }

cout << "Maximum number: "<< maxNum << endl;
}

void min(int arr[3][3]) {
  int minNum = arr[0][0];
  for ( int i=0; i<3 ; i++) {
    for(int j=0; j<3 ;j++) {
      if (arr [i][j] < minNum) {
        minNum = arr[i][j];
      }
    }
  }

cout << "Minimum number : " << minNum << endl;
}
int main(){
  int arr[3][3];

  cout << "Enter values for 3x3 array : \n ";
  for (int i=0; i<3; i++) {
    for ( int j=0; j<3; j++) {
      cout<< "Enter value for [" << i << "][" << j << "]: " ;

    cin >> arr[i][j];
    }
  }

max(arr);
min (arr);

return 0; }
