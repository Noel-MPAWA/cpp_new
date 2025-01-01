#include<iostream>
using namespace std;
class animal{
	public:
		virtual void sound() = 0;
};
class dog : public animal{
public:
	void sound() override{
		cout<<"Woof!"<<endl;
	}
};
int main(){
	dog mydog;
	mydog.sound();
	return 0;
}