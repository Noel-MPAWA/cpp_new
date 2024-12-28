#include<iostream>
using namespace std;
class student{
	string name;
	int score;
	public:
		student(string n, int s):name(n), score(s){}
		void display(){
			cout<<"Student--->"<<name<<endl;
			cout<<"Score--->"<<score<<endl;
		}
};
int main(){
	student student("Noel", 95);
	student.display();
	return 0;
}