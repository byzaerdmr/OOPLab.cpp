#include <iostream>
#include <cstring>
using namespace std;

class prn_obj{
    int rno;
    char *name;
    public:
    void set_data(char *n, int r)
    {  
        name = n;
        rno = r;
    }
    void print()
    {
        cout<< this-> name <<" has invoked print() funciton"<< endl;
        cout<< "The roll number is "<< this->rno<< endl;
    }
};

int main(){
    prn_obj ob1, ob2, ob3;
    ob1.set_data("Suba", 1);
    ob2.set_data("Kayal", 2);
    ob3.set_data("Jeysree", 3);
    ob1.print();
    ob2.print();
    ob3.print();
    return 0;
}
  






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
  
