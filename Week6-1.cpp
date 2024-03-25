#include <iostream>
using namespace std;

class samp {
  int a; 
  public:
  void set_a (int n) { a=n;  };
  int get_a () { return a; };
};

int main() {
  samp ob[4];
  for(int i=0; i<4; i++) ob[i].set_a(i);
  for(int i=0; i<4; i++) cout << ob[i].get_a() << endl;
  return 0;
}


 /*
#include <iostream>
using namespace std;
class samp{
  int a, b;
  public:
  samp(int n, int m) { a=n ; b=m; }
  int get_a() { return a; }
  int get_b() { return b; }
};

int main() {
  samp ob[4][2] = { samp(1, 2), samp(3, 4), 
                    samp(5, 6), samp(7, 8),
                    samp(9, 10), samp(11, 12), 
                    samp(13, 14), samp(15, 16)};
int i;
for(i=0; i<4; i++) {
    cout << ob[i][0].get_a() <<" "<< ob[i][0].get_b() << endl;
    cout << ob[i][1].get_a() <<" "<< ob[i][1].get_b() << endl;
}
cout << endl;
return 0;
} */
