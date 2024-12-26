#include<iostream>
#include<vector>
using namespace std;
void sieveoferatosthenes(int limit){
	vector<bool>isprime(limit + 1, true);
	isprime[0]=isprime[1]=false;
	for(int p=2; p*p<=limit;p++){
		if(isprime[p]){
			for(int i=p*p; i<=limit; i +=p){
				isprime[i]=false;
			}
		}
	}
	cout<<"Prime number up to"<<limit<<"are:\n";
	for(int p=2;p<=limit;p++){
		if(isprime[p]){
			cout<<p<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int limit;
	cout<<"Enter the limit:";
	cin>>limit;
	sieveoferatosthenes(limit);
	return 0;
}