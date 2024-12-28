#include<iostream>
using namespace std;
class question{
    string quest;
	string answer;
	public:
		question(string a, string b) : quest(a), answer (b){}
		bool checkanswer(string ans)
		{return ans == answer;}
		void display(){
			cout<<"Question: "<<quest<<endl;
		}
};
int main(){
	question a("What is the president of Tanzania ??", "DR SAMIA SULUHU HASSAN");
	a.display();
	cout<<"Correct: "<<a.checkanswer("DR SAMIA SULUHU HASSAN")<<endl;
	return 0;
}