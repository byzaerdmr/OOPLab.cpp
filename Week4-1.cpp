 #include <iostream>
using namespace std;
class myclass{
    int i,j;
    public:

    myclass (int a , int b);

    void show();

};

myclass::myclass(int a, int b){

    cout<<"In constructor\n";

    i=a;
    j=b;
}

void myclass::show(){
    cout<< i<< '+' <<j << '='<< i+j<< endl;
    }

int main() {
    int x,y;
    cout<<"Enter two numbers: "<< endl;
    cin>>x>>y;

    myclass ob(x,y);
    ob.show();
    return 0;
}
/*
#include <iostream>
using namespace std;
class myclass{

  int a;
  public:
  myclass();  //constructor
  void show();
};

myclass::myclass(){
  cout <<"In constructor \n" ;
  a=10;
}

void myclass::show(){
    cout << a;
}

int main(){
  myclass ob;
  ob.show();
  return 0;
}*/
