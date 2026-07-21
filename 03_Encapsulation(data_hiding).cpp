#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
   string accountholder;
   double balance;

public:
   // setter method
   void set_detail(string name, double amount)
   {
      accountholder = name;
      balance = amount;
   }
   // deposit method - used to deposit the money into bank account
   void deposit(double damount)
   {
      balance = balance + damount;
      cout << "Deposited amount : " << damount << endl;
   }
   // withdraw method- used to withdraw the money from the bank account
   void withdraw(double wamount)
   {
      if (wamount <= balance)
      {
         cout << "Withdraw amount: " << wamount << endl;
      }
      else
      {
         cout << "withdraw amount = "<<wamount<<" Insufficient balance!!" << endl;
      }
   } /*These  method used to get the balance from the bank account after deposit and withdraw
    amount from the bank account.*/
   double getbalance()
   {
      cout << "Current balance: " << balance << endl;
   }
   void display()
   {
      cout << "Account holder: " << accountholder << endl;
      cout << "balance : " << balance << endl;
   }
};
int main()
{
   BankAccount acc;
   acc.set_detail("Shruti", 5000);
   acc.display();
   acc.deposit(2000);
   acc.withdraw(8000);
   acc.getbalance();
   return 0;
}