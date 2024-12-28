#include<iostream>
#include<string>
using namespace std;
class bankaccount{
	string owner;
	double balance;
	public:
		bankaccount(string name):
			owner(name),balance(0){}
			void deposit(double amount)
			{balance +=amount;}
			void withdraw(double amount)
			{balance -=amount;}
			void display(){
				cout<<"Owner:"<<owner<<"'Balance:"<<balance<<endl;
				
			}
};
int main(){
	bankaccount account("Noel");
	account.deposit(100);
	account.withdraw(30);
	account.display();
	return 0;
}