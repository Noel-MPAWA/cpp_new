#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct item{
      int id;
      string name;
      double price;
      void display() const{
	   cout<<"ID:"<<id<<"Name:"<<name<<"Price:"<<price<<endl;
}
};
// Function protoypes.
void createitem(vector<item>&items);
void readitem(const vector<item>&item);
void updateitem(vector<item>&items);
void deleteitem(vector<item>&items);
int main(){
vector<item>items;
int choice;
 do{
  cout<<"\t\t\t\tItem operations menu"<<endl;
  cout<<"\t\t1: Create Item"<<endl;
  cout<<"\t\t2: Read items "<<endl;
  cout<<"\t\t3: Update items "<<endl;
  cout<<"\t\t4: Delete items "<<endl;
  cout<<"\t\t5: Exit"<<endl;
  cout<<"\t\tEnter your choice "<<endl;
  cin>>choice;
   switch(choice){
    case 1:
    	createitem(items);
    	break;
    	case 2:
    	readitem(items);
    	break;
    	case 3:
    	updateitem(items);
    	break;
    	case 4:
    	deleteitem(items);
    	break;
    	case 5:
    	cout<<"Exiting";
    	break;
    	default:
    		cout<<"Invalid choice.Please try again ";
    	}
    }while(choice !=5);
    return 0;
}
void createitem(vector<item>&items){
	item newitem;
	cout<<"Enter new item ID";
	cin>>newitem.id;
	cin.ignore();
	cout<<"Enter new item name ";
	getline(cin,newitem.name);
	cout<<"Enter new item price";
	cin>>newitem.price;
	items.push_back(newitem);
	cout<<"Item created successfully!";
}
void readitem(const vector<item>&items){
  if(items.empty()){
  	cout<<"No item found ";
  }else{
  cout<<"Item list";
  for(const auto&item:items){
  item.display();
}
}
}
void updateitem(vector<item>&items){
	int id;
	cout<<"Enter item ID to update:";
	cin>>id;
	for(auto&item:items){
		if(item.id==id){
		cin.ignore();
		cout<<"Enter new item name";
		getline(cin,item.name);
		cout<<"Enter new item price ";
		cin>>item.price;
		cout<<"Item updated successfully!";
		return;
	}
}
cout<<"Item with ID"<<id<<"not found";
}
void deleteitem(vector<item>&items){
 int id;
 cout<<"Ente item ID to delete";
 cin>>id;
 for(auto it=items.begin();it!=items.end();++it){
 if(it->id==id){
 items.erase(it);
 cout<<"Item deleted successfully !";
 return;
}
}
cout<<"Item with ID"<<id<<"not found.";
}