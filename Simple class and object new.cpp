#include<iostream>
using namespace std;
class dog{
	public:
		void bark(){
			cout<<"Woof!"<<endl;
		}
};
int main(){
	dog mydog;
	mydog.bark();
	return 0;
}