#include<iostream>
using namespace std;
class car{
	public:
		int speed(int maxspeed);
};
int car::speed(int maxspeed){
	return maxspeed;
}
int main(){
	car myobj; // Creating an object of a car.
	cout<<myobj.speed(200); // Method calling with an argument.
	return 0;
}