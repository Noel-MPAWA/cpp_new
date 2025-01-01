#include<iostream>
using namespace std;
class cat{
	public:
		cat(){
			cout<<"Cat created !"<<endl;
		}
		~cat(){
			cout<<"Cat destroyed !"<<endl;
		}
};
int main(){
	cat mycat;
	return 0;
}