// sınıfa ait bir kurucu ve bir yıkıcı fonksiyon ile bir id() fonksiyonu bulunur ve main() fonksiyonunda bir nesne oluşturarak bir fonksiyona geçirir

#include <iostream>
using namespace std;
class myclass{
    int who;
    public:
    myclass(int n){ who=n; cout << "Consturcting " << who << "\n";}
    ~myclass() { cout << "Destructing " << who << "\n"; }
    int id() { return who; }
};
//pass by value
void f(myclass o){cout << "Received " << o.id() << "\n" ; }

int main(){
  myclass x(1);
  f(x);
  return 0;
}

/*
#include <iostream >
using namespace std; 
class myclass{
    int who;
    public:
    myclass(int n){who = n; cout << "Constructing " << who << "\n";}
    ~myclass() { cout << "Destructing " << who << "\n"; }
    int id() { return who; }
};
// o is passed by reference.
void f(myclass &o){cout << "Received " << o.id() << "\n";}

int main(){
    myclass x(1);
    f(x);
    return 0;
}*/
