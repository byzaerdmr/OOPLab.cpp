#include <iostream>
using namespace std;
class myclass{
    int n, d;
    public:
    myclass(int i, int j) { n = i; d = j; }
    friend int isfactor(myclass ob);
};

int isfactor(myclass ob){
  if(!(ob.n % ob.d)) return 1;
  else return 0;
}

int main(){
  myclass ob1(20, 2), ob2(13, 3);

  if(isfactor(ob1)) cout << "2 is a factor of 20\n";
  else cout << "2 is not a factor of 20\n";

 if(isfactor(ob2)) cout << "3 is a factor of 13\n";
  else cout << "3 is not a factor of 13\n";

return 0;
}
  
