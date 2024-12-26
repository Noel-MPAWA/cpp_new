#include<iostream>
using namespace std;
double input, output;
void kmToOthers(){
	cout<<"\n\n\n\n\t\t\t\tSelect a desired option::";
	cout<<"\n\t\t\t\t1.Km---> Miles";
	cout<<"\n\t\t\t\t2.Km---> Feet";
	cout<<"\n\t\t\t\t3.Km---> Inches";
	int opt;
	cin>>opt;
	switch(opt){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Kilometres::";
			cin>>input;
			output = input * 0.62137;
	        cout<<output<<"miles";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Kilometres::";
			cin>>input;
			output = input*3280.84;
			cout<<"\n\n\t\t\t\t"<<input<<"Km = "<<output<<"Feet";
			break;
		case 3:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Kilometres::";
			cin>>input;
			output = input*39370;
			cout<<"\n\n\t\t\t\t"<<input<<"Km = "<<output<<"Inches";
			break;
			
	}
}
void MilesToOthers(){
	system("cls");
	cout<<"\n\n\n\n\t\t\t\tSelect a derired option::";
	cout<<"\n\t\t\t\t1.Miles---> Km";
	cout<<"\n\t\t\t\t2.Miles---> Feet";
	cout<<"\n\t\t\t\t3.Miles---> Inches";
	int opt;
	cin>>opt;
	switch(opt){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Miles::";
			cin>>input;
			output = input*1.6093;
			cout<<"\n\n\t\t\t\t"<<input<<"Miles = "<<output<<"Km";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Miles::";
			cin>>input;
			output = input*5280;
			cout<<"\n\n\t\t\t\t"<<input<<"Miles = "<<output<<"Feet";
			break;
		case 3:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Miles::";
			cin>>input;
			output = input*63360;
			cout<<"\n\n\t\t\t\t"<<input<<"Miles = "<<output<<"Inches";
			break;
	}
	
}
void FeetToOthers(){
 system("cls");
	cout<<"\n\n\n\n\t\t\t\tSelect a derired option::";
	cout<<"\n\t\t\t\t1.Feet---> Km";
	cout<<"\n\t\t\t\t2.Feet---> Miles";
	cout<<"\n\t\t\t\t3.Feet---> Inches";
	int opt;
	cin>>opt;
	switch(opt){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Feet::";
			cin>>input;
			output = input*0.000304;
			cout<<"\n\n\t\t\t\t"<<input<<"Feet = "<<output<<"Km";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Feet::";
			cin>>input;
			output = input*0.000189;
			cout<<"\n\n\t\t\t\t"<<input<<"Feet = "<<output<<"Miles";
			break;
		case 3:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Feet::";
			cin>>input;
			output = input*12;
			cout<<"\n\n\t\t\t\t"<<input<<"Feet = "<<output<<"Inches\n\n";
			break;
	}	
}
int main(){
	start:
	cout<<"\n\n\n\n\t\t\t\tYour Value is::";
	cout<<"\n\t\t\t\t1.Km";
	cout<<"\n\t\t\t\t2.Miles";
	cout<<"\n\t\t\t\t3.Feet";
	int sele;
	cin>>sele;
	switch(sele){
		case 1:
			kmToOthers();
			break;
		case 2:
			MilesToOthers();
			break;
		case 3:
			FeetToOthers();
			break;
	}
	system("pause");
	return 0;
}