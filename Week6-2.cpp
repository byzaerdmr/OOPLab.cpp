#include <iostream>
using namespace std;
class product 
{
    int pro_code[50];
    float pro_price[50];
    int count;
    public:
      void cnt() {count = 0; }
      void getproduct();
      void displaysum();
      void displayproduct();
};

void product::getproduct()
{
  cout<<"Enter product code: ";
  cin>> pro_code[count];
  cout<<"Enter product cost: ";
  cin>>pro_price[count];
  count++;
}

void product::displaysum()
{
  float sum=0;
  for(int i=0; i<count; i++)
  sum= sum+pro_price[i];
  cout<<"Total value: " << sum << "\n";
}

void product::displayproduct()
{ 
  cout<<"\n Code Price \n";
    for(int i=0; i<count; i++)
  {
    cout<<"\n"<<pro_code[i];
    cout<<" "<<pro_price[i];
  }
   cout << "\n";
}        
int main()
{ 
    product obj;
    obj.cnt();
    int x;
    do
    {
      cout<< "Enter choice\n";
      cout<< "\n --------------\n";
      cout<< "1.Add a product \n";
      cout<<"2.Display a product total value \n";
      cout<<"3.Display all products \n";
      cout<<"4.Quit \n";
      cin>>x;
      switch(x)
    {
      case 1:
          obj.getproduct();
      case 2:
          obj.displaysum();
      case 3:
          obj.displayproduct();
      case 4: break;
      default:
            cout<< "\n Invalid choice!";
    }
  }
    while(x!=4);
    return 0;
}










































  
