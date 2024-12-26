#include<iostream>
using namespace std;
class car{
	public:
	string color;
	string model;
	 void strart(){
	 	cout<<"The car is strarting."<<endl;
	 }
	 void stop(){
	 	cout<<"The car is stopping."<<endl;
	 }
};
int main(){
	car mycar;
	mycar.color="Red";
	mycar.model="Toyota";
	cout<<"Car model"<<mycar.model<<",color"<<mycar.color<<endl;
	mycar.stop();
	return 0;
}