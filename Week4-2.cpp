#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
#define SIZE 25
class strtype{
  char *p;
  int len;
  public:

  strtype();  //constructor
  ~strtype();  //destructor
  void set(char *ptr);
  void show();
};

strtype::strtype(){  //Initialize a string object.
  p= (char *) malloc(SIZE);
  if(!p){ 
      cout << "Allocation error \n";
      exit(1);
  }
  *p= '\0';
  len=0;
}

strtype::~strtype(){ //Free memory 
    cout << "Freeing p\n";
    free(p); 
}

void strtype:: set(char *ptr){
  if(strlen(ptr) >= SIZE){
      cout << "String too big\n";
      return;  
  }
  strcpy(p,ptr);
  len=strlen(p);
}

void strtype::show(){
  cout<< p << "- length: "<<len << endl;
}

int main(){
    strtype s1, s2;
    char str1[]="This is a test. ";
    char *pstr1;
    pstr1=str1;
    s1.set(pstr1);
    s2.set(" I don't like C++. ");
    s1.show();
    s2.show();

    return 0;
}
