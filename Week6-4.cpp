//dinamik bellek tahsis ederek bir nesne dizisi oluşturur, bu dizinin her öğesini bir çarpım sonucuyla doldurur ve ardından dinamik belleği serbest bırakır.

#include <iostream>
using namespace std;

class samp{
    int i, j;
    public:
    void set(int a, int b) {i = a; j = b; }
    ~samp() { cout << "Destructing" << endl; }
    int get() {return i*j; }
};

int main(){
  samp *p;
  int i;
  p = new samp[10];
  if(!p) {cout << "Allocation error" << endl; return 1; }
  for (i = 0; i < 10; i++) { p[i].set(i, i); }
  for (i = 0; i < 10; i++) { cout << "Product [" << i << "]: " << p[i].get() << endl; }

  delete[] p;
  return 0;
}
  
