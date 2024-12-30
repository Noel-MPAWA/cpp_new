#include<iostream>
using namespace std;
class math{
	public:
	int add(int a, int b=0){
		return a+b;
	}
};
int main(){
	math m;
	cout<<m.add(5)<<endl;
	cout<<m.add(5, 10)<<endl;
	return 0;
}