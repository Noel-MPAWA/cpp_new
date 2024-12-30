#include<iostream>
using namespace std;
class sample{
	public:
		int value;
		sample(int v) : value(v){}
		sample(const sample& s) : value(s.value){
			cout<<"Copy Constructor called !"<<endl;
		}
};
int main(){
	sample s1(10);
	sample s2=s1;
	cout<<s2.value<<endl;
	return 0;
}