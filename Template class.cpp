#include<iostream>
using namespace std;
template <class T>
class box{
	private:
		T value;
		public:
			box(T v): value(v){}
			T getvalue(){ return value;}
			
};
int main(){
	box<int> intbox(123);
	box<string> strbox("Hello");
	cout<<intbox.getvalue()<<endl;
	cout<<strbox.getvalue()<<endl;
	return 0;
}