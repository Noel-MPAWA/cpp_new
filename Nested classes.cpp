#include<iostream>
using namespace std;
class outer{
	public:
		class inner{
			public:
				void display(){
					cout<<"Inner class !"<<endl;
				}
		};
};
int main(){
	outer::inner Inner;
	Inner.display();
	return 0;
}
	