#include<iostream>
using namespace std;
class calculator{
	public:
		double add(double a, double b){
			return a+b;
		}
		double substract(double a, double b){
			return a-b;
		}
};
int main(){
	calculator calc;
	cout<<"Add:"<<calc.add(5,3)<<endl;
	cout<<"Substract:"<<calc.substract(9,4)<<endl;
	return 0;
}