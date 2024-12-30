#include<iostream>
#include<vector>
using namespace std;
class student{
	public:
		string name;
		student(string n) : name(n){}
		
};
int main(){
	vector<student> students;
	students.emplace_back("Alice");
	students.emplace_back("Bob");
	for(const auto& student : students){
		cout<<"Students: "<<student.name<<endl;
}
return 0;
}