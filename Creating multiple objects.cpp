#include<iostream>
using namespace std;
class car{
	public:
		string brand;
		string model;
		int year;
};
int main(){
	car carobj1;
	carobj1.brand="BMW";
	carobj1.model="X3";
	carobj1.year=2014;
	
	car carobj2;
	carobj2.brand="SUBARU";
	carobj2.model="Forester";
	carobj2.year=2020;
	
	cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<"\n";
	cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<"\n";
	return 0;
}