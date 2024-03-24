// bir örnek (sample) sınıfı tanımlar ve bu sınıfı kullanarak bir dize (string) nesnesini işler

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class samp{
    char *s;
    public:
    samp(){ s= NULL; }
    ~samp() { if(s)  { free(s); s=NULL;} cout<<  "Freeing s\n"; }
    void show() { cout << s << "\n";  }
    void set(char *str);
};

void samp::set(char *str){
  s=(char *) malloc(strlen(str)+1);
  if(!s) exit(1);
  strcpy(s, str);
}

samp input(){
  cout << "Enter a string: ";
  char s[80]; cin >> s;
  samp str; str.set(s);
  return str;
}

int main(){
samp ob;
cout<<"ob created at memory address: " << &ob << endl;
ob.set("This is initial string.");
ob.show();
ob = input();
cout << " ob's memory address:" << &ob << endl;
ob.show();
return 0;
}


    

    
