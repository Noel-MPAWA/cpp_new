#include<iostream>
#include<vector>
using namespace std;
class shape{
	public:
		virtual void draw() = 0;
		
};
class circle : public shape{
	public:
		void draw() override {
			cout<<"Drawing Circle"<<endl;
		}
};
class rectangle : public shape{
	public:
		void draw() override {
			cout<<"Drawing Rectangle"<<endl;
		}
};
int main(){
	vector<shape*> shapes;
	shapes.push_back(new circle());
	shapes.push_back(new rectangle());
	for(auto shape : shapes){
		shape->draw();
	}
	for(auto shape : shapes){
		delete shape;
	}
	return 0;
}