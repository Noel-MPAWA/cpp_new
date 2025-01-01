#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw(){
			cout<<"Drawing a shape."<<endl;
		}
};
class circle: public shape{
	public:
		void draw() override{
			cout<<"Drawing a circle."<<endl;
		}
};
int main(){
	shape* shape=new circle();
	shape->draw();
	delete shape;
	return 0;
}