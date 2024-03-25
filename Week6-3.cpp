//Pointers to objects
#include <iostream>
using namespace std;
class samp{
    int a, b, c, d, e;
  public:
  samp(int n, int m) { a = n; b = m;  }
  int get_a() { return a; }
  int get_b() {return b;  }
};

int main(){
  samp ob[4] = { samp(1, 2), samp(3, 4), samp(5, 6), samp(7, 8) };
  samp *p = ob; // get starting address of array

  for(int i=0; i<4; i++){
        cout << "Samp At:" << p << " a:" <<p->get_a()<< " b:" <<p->get_b()<<endl;
        p++; // advance to next object
  }
  return 0;
}
