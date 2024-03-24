#include <iostream>
using namespace std;
class samp{
    int i;
    public:
    samp(int n){
         cout << "Constructing" << endl; i=n; };
    ~samp() {
         cout << "Destructing" << endl; };
         
    void set_i ( int n) {i =n; };
    int get_i() { return i; };
};

void sqr_it (samp o){
  o.set_i(o.get_i() * o.get_i());
  cout << "i value in cop a is: " << o.get_i() << endl;
}
int main(){
    samp a(10);
    sqr_it(a);
    cout << "i value in main is : " << a.get_i() << endl;
    return 0;
}
