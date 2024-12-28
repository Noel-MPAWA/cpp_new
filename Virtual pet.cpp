#include<iostream>
using namespace std;
class pet{
	string name;
	int hunger;
	public:
		pet(string n) : name(n), hunger(0){}
		void feed(){
			hunger = max(0, hunger - 1);}
			void play(){ hunger += 1;
			}
			void display(){
				cout<<"Pet: "<<name<<", Hunger:"<<hunger<<endl;
			}
		
};
int main(){
	pet mypet("Fluffy");
	mypet.play();
	mypet.feed();
	mypet.display();
	return 0;
}