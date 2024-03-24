#include <iostream>
using namespace std;
#define SIZE 10
class stack{
    char stck[SIZE];
    int tos;
    public:
    stack();
    void push(char ch);
    char pop();
};

stack::stack(){ tos=0; }

void stack::push(char ch){
    if(tos==SIZE) {return;}
    else{ stck[tos] = ch; tos++; }
}

char stack::pop(){
  if ( tos>0) {tos--; return stck[tos];}
  else {return 0; }
}

int main(){
  stack s1, s2; int i;
  for(i=0; i<3; i++) s1.push('a'+i);
  s2=s1;
  for(i=0; i<3; i++) cout << "Pop s1: " << s1.pop() << endl;
  for(i=0; i<3; i++) cout << "Pop s2: " << s2.pop() << endl;
  return 0;
}
