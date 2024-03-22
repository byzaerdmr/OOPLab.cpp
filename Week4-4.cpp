#include <iostream>
using namespace std;

class B{       //define base class
        int i;
        public:
        void set_i(int n);
        int get_i();
};

class  D : public B{    //define derives class
      int j;
      public:
      void set_j(int n);
      int mul();
};

void B::set_i(int n){  //set value i in base
  i=n;
}

int B::get_i(){     //return value of i in base
  return i;
}

void D::set_j(int n){   //set value of j in derived
  j=n;
}

int D::mul(){          // return valuse of base's i times derives's j.
  return j * get_i();  //derived class can call base public member function
}

int main() {
  D ob;
  ob.set_i(10);
  ob.set_j(4);
  cout << ob.mul();
  return 0;
}
  
  



        
