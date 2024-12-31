#include<iostream>
using namespace std;
class MyClass{
	public:
		void myfunction(){
			cout<<"Some content in parent class.";
		}
};
class myotherclass{
	public:
		void myotherfuction(){
			cout<<"some content in another class.";
		}
};
class mychildclass: public MyClass, public myotherclass{
};
int main(){
	mychildclass myobj;
	myobj.myfunction();
	myobj.myotherfuction();
	return 0;
}