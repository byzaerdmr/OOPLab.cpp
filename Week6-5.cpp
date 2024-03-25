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
  





