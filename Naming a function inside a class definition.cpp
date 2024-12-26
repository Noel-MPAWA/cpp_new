#include<iostream>
using namespace std;
class myclass{
public:
	//Defining Function inside the class.
	void Singing(){
		cout<<"Musician is singing";
	}
};
int main(){
	myclass musician; // class creation.
	musician.Singing(); // Calling the method.
	return 0;
}