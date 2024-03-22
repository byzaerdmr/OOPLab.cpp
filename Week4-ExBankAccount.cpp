#include <iostream>
using namespace std;

class BankAccount {
private:
    int account_no;
    double balance;

public:
    BankAccount(int acc_no, double bal){
        account_no = acc_no;
        balance = bal;
    }

    void setBalance(double balance) {
      this -> balance = balance;
   }

   double getBalance() const {
        return balance;
    }
};

int main(){
  BankAccount acc1(12345, 1000.0);
  BankAccount acc2(54321, 500.0);

  acc1.setBalance(1500.0);
  cout<< "Account 1 Balance: $" << acc1.getBalance() <<endl;
  
  acc2.setBalance(600.0);
  cout << "Account 2 Balance: $" << acc2.getBalance() <<endl;

  return 0;
}
