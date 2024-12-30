#include<iostream>
#include<vector>
using namespace std;
class poll{
	string question;
	vector<int> votes;
	public:
		poll(string q, int options):question(q), votes(options, 0){}
		void vote(int option){
			votes[option]++;
		}
		void displayresults(){
			cout<<question<<endl;
			for(int i=0;i<votes.size();++i){
				cout<<"Option "<<i+1<<": "<<votes[i]<<" Votes"<<endl;
			}
		}
};
int main(){
	poll poll("What is your favourite color?", 3);
	poll.vote(0);
	poll.vote(1);
	poll.vote(1);
	poll.displayresults();
	return 0;
}