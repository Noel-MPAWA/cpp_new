#include<iostream>
#include<fstream>
using namespace std;
int main(){
	//Create and open a text file
	ofstream myfile("filename.txt");
	//write to the file 
	myfile<<"Files can be tricky, but it is fun enough !";
	//close file
	myfile.close();
}