#include<iostream>
#include<vector>
#include<string>
using namespace std;
// To define the structure of the item.
struct item{
	int id;
	string name;
	double price;
}
void display() const{
	cout<<"ID:"<<id<<"Name"<<name<<"Price"<< price<< endl;
}
//Function prototypes.
void createitem(vector<Item>&items)
void readitem(const vector<item>&items)
void updateitem(vector<item>&items)
void deleteitem(vector<item>&items)
int main(){
	vector<item>items;
	int choice;
	do{
		cout<<"\n--CRUD Operations Menu--\n";
		cout<<"1:Create Item";
		cout<<"2:Read Item";
		cout<<"3:Update Items";
		cout<<"4:Delete Item";
		cout<<"5:Exit"
		cout<<"6: Enter your choice";
		cin<< choice;
	} 
	switch(choice){
		case 1:
			createitem(items);
			break;
			case 2:
				readitem(items):
					break;
					case 3:
						updateitem(items);
						break;
						case 4:
						deleteitem(items);
						break;
						case 5:
						cout<<"Exiting the program"; 
	}
	while(choice !=5)
}