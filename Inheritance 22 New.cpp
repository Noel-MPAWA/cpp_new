#include<iostream>
using namespace std;
class animal{
	public:
		void eat(){
			cout<<"Eating...."<<endl;
		}
};
class bird: public animal{
	public:
		void fly(){
			cout<<"Flying......."<<endl;
		}
};
int main(){
	bird mybird;
	mybird.eat();
	mybird.fly();
	return 0;
}