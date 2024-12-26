#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string,string>
createdictionary(){
	map<string,string>dictionary;
	dictionary["hello"] ="hola";
	dictionary["goodbye"]="adios";
	dictionary["please"]="porfavor";
	dictionary["thank you"]="gracias";
	dictionary["yes"]="si";
	dictionary["no"]="no";
	return dictionary;
}
string translate (const string& word, const map<string, string>& dictionary){
	auto it = dictionary.find(word);
	if(it!=dictionary.end()){
		return it->second;
	}else{
		return "Translation not found.";
	}
}
int main(){
	map<string,string>dictionary = createdictionary();
	string word;
	cout<<"Enter a word in English to translate in spanish:";
	cin>>word;
	string translation = translate(word, dictionary);
	cout<<"Translation:"<<translation<<endl;
	return 0;
}