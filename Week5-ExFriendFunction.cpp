//Write a program to find maximum out of  two numbers using friend function and also note one number is a member of one class and other number is member of some other class.By using set function set values of data members.

#include <iostream>
using namespace std;

class B;

class A{
private:
  int numA;
public:
  void setNumA(int num){
    numA=num;
  }

  friend int findMax(A objA, B objB);
};

class B{
private: 
  int numB;
public:
  void setNumB(int num){
      numB = num;
  }

  friend int findMax( A objA, B objB);
};

int findMax(A objA, B objB) {
  return max(objA.numA, objB.numB);
}

int main() {
  A objA;
  B objB;

  objA.setNumA(10);
  objB.setNumB(20);

  cout << "Maximum number is: " << findMax(objA, objB) << endl;
  return 0;
}



