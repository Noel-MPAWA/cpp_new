#include<iostream>
using namespace std;
class car{
	public:
		string brand;
		string model;
		int year;
		car(string x,string y,int z){ // Constructor with parameters 
			brand=x;
			model=y;
			year=z;
		}
};
int main(){ // Creatin the objects and call the constructor with different values.
	car carobj1("BMW","X4",1999);
	car carobj2("Ford","Mustang",1969);
	car carobj3("SUBARU","Forester",2023);
	
	// Print values 
	cout<< carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<"\n"<<endl;
	cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<"\n"<<endl;
	cout<<carobj3.brand<<" "<<carobj3.model<<" "<<carobj3.year<<"\n"<<endl;
}