#include<iostream>
using namespace std;
class Myclass{
	public:
		int mynum;
		string mystring;
};
int main(){
	Myclass myobj;
	myobj.mynum=15;
	myobj.mystring="This is the string of my object";
	cout<<myobj.mynum<<"\n";
	cout<<myobj.mystring;
	return 0;
}