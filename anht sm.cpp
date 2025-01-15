#include<iostream>
using namespace std;
class Rectangle{

private:
	int width,height;
	public:
		Rectangle(int w, int h):
			width(w), height(h){
				cout<<"Rectangle with width"<<width<<"and height"<<height<<"created"<<endl;
			}
			~Rectangle(){
				cout<<"Rectangle destroyed";
			}
			void display(){
				cout<<"Width"<<width<<"height"<<height;
			}
};
int main(){
	Rectangle rect(10, 5);
	rect.display();
	return 0;
}