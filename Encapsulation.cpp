#include<iostream>
using namespace std;
class counter{
	private:
		int count;
		public:
			counter() : count(0){}
			void increment(){count ++;}
			int getcount(){return count;}
			
};
int main(){
	counter c;
	c.increment();
	cout<<"Count: "<<c.getcount()<<endl;
	return 0;
}