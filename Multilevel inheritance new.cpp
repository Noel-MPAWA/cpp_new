#include<iostream>
using namespace std;
class myclass{
	public:
		void myfunction(){
			cout<<"Some content in parent class.";
		}
};
class mychild: public myclass{
};
class mygrandchild: public mychild{
};
int main(){
	mygrandchild myobj;
	myobj.myfunction();
	return 0;
}