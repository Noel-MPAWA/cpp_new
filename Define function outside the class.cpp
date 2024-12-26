#include<iostream>
using namespace std;
class myclass{
	public:
	void mymethod(); // Main function declaration.
};
 void myclass::mymethod(){
 	cout<<"Hello world !";
 }
 int main(){
 	myclass myobj;
 	myobj.mymethod();
 	return 0;
 }