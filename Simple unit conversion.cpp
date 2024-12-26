#include<iostream>
using namespace std;
double meterstokilometers(double meters)
{return meters/1000;}
double kilometerstometers(double kilometers)
{return kilometers*1000;}
double meterstocentimeters(double meters)
{return meters*100;}
double centimeterstometers(double centimeters)
{return centimeters/100;}

void displaymenu(){
	cout<<"\n\n\t\t\tUnit converter"<<endl;
	cout<<"1:Meters to kilometers"<<endl;
	cout<<"2:Kilometers to meters"<<endl;
	cout<<"3:meters to centimeters"<<endl;
	cout<<"4:Centimeters to meters"<<endl;
	cout<<"5:Exit"<<endl;
	
}
int main(){
	int choice;
	double value;
	while(true){
		displaymenu();
		
		cin>>choice;
		if(choice==5){
			break;
		}
		cout<<"Enter the value to convert";
		cin>>value;
		switch(choice){
			case 1:
				cout<<value<<"Meters ="<<meterstokilometers(value)<<"kilometers";
				break;
			case 2:
				cout<<value<<"Kilometers ="<<kilometerstometers(value)<<"Meters";
				break;
			case 3:
				cout<<value<<"Meters ="<<meterstocentimeters(value)<<"Centimeters";
			    break;
			case 4:
			     cout<<value<<"Centimeters ="<<centimeterstometers(value)<<"Meters";
			      break;
			default:
				cout<<"Invalid option please try again.";
		}
	}
	return 0;
}