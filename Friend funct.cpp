#include<iostream>
using namespace std;
class box{
	private:
		int width;
		public:
			box(int w) : width(w) {}
			friend void printwidth(box b);
};
void printwidth(box b){
	cout<<"Width: "<<b.width<<endl;
}
int main(){
	box box(10);
	printwidth(box);
	return 0;
}