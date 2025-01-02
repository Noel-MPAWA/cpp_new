#include<iostream>
using namespace std;
double input, output;

void kmToOthers(){
	cout<<"\n\n\n\n\t\t\t\tSelect a desired option::";
	cout<<"\n\t\t\t\t1.Kilometers---> Miles";
	cout<<"\n\t\t\t\t2.Kilometers---> Feet";
	cout<<"\n\t\t\t\t3.Kilometers---> Inches";
	cout<<"\n\t\t\t\t4.Kilometers--->Meters";
	cout<<"\n\t\t\t\t5.Kilometers--->Centimeters";
	int opt;
	cin>>opt;
	switch(opt){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Kilometers\n\n\t\t\t";
			cin>>input;
			output = input * 0.62137;
	        cout<<"\n\n\t\t\t\t"<<input<<"Kilometers = "<<output<<"Miles\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Kilometers\n\n\t\t\t";
			cin>>input;
			output = input*3280.84;
			cout<<"\n\n\t\t\t\t"<<input<<"Kilometers = "<<output<<"Feet\n\t\t";
			break;
		case 3:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Kilometers\n\n\t\t\t";
			cin>>input;
			output = input*39370;
			cout<<"\n\n\t\t\t\t"<<input<<"Kilometers = "<<output<<"Inches\n\t\t";
			break;
		case 4:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter your value in Kilometers\n\n\t\t\t";
			cin>>input;
			output = input*1000;
			cout<<"\n\n\t\t\t\t"<<input<<"Kilometers = "<<output<<"Meters\n\t\t";
			break;
		case 5:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter your value in Kilometers\n\n\t\t\t";
			cin>>input;
			output=input*100000;
			cout<<"\n\n\t\t\t\t"<<input<<"Kilometers = "<<output<<"Centimeters\n\t\t";
			break;
		default:
			cout<<"\n\n\n\n\t\t\tOops !!. Invalid option";
			break;
			
	}
}
void MilesToOthers(){
	system("cls");
	cout<<"\n\n\n\n\t\t\t\tSelect a derired option";
	cout<<"\n\t\t\t\t1.Miles---> Kilometers";
	cout<<"\n\t\t\t\t2.Miles---> Feet";
	cout<<"\n\t\t\t\t3.Miles---> Inches";
	cout<<"\n\t\t\t\t4.Miles---> Meters ";
	cout<<"\n\t\t\t\t5.Miles---> Centimeters";
	int opt;
	cin>>opt;
	switch(opt){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Miles\n\n\t\t\t";
			cin>>input;
			output = input*1.6093;
			cout<<"\n\n\t\t\t\t"<<input<<"Miles = "<<output<<"Kilometers\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Miles\n\n\t\t\t";
			cin>>input;
			output = input*5280;
			cout<<"\n\n\t\t\t\t"<<input<<"Miles = "<<output<<"Feet\n\t\t";
			break;
		case 3:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Miles\n\n\t\t\t";
			cin>>input;
			output = input*63360;
			cout<<"\n\n\t\t\t\t"<<input<<"Miles = "<<output<<"Inches\n\t\t";
			break;
		case 4:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter your value in Miles\n\n\t\t\t";
			cin>>input;
			output = input/1609.34;
			cout<<"\n\n\t\t\t\t"<<input<<"Miles = "<<output<<"Meters\n\t\t";
			break;
		case 5:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter your value in Miles\n\n\t\t\t";
			cin>>input;
			output=input/160,934;
			cout<<"\n\n\t\t\t\t"<<input<<"Miles = "<<output<<"Centimeters\n\t\t";
			break;
		default:
			cout<<"\n\n\n\n\t\t\tOops !!. Invalid option";
			break;
	}
	
}
void FeetToOthers(){
 system("cls");
	cout<<"\n\n\n\n\t\t\t\tSelect a derired option::";
	cout<<"\n\t\t\t\t1.Feet---> Kilometers";
	cout<<"\n\t\t\t\t2.Feet---> Miles";
	cout<<"\n\t\t\t\t3.Feet---> Inches";
	cout<<"\n\t\t\t\t4.Feet---> Meters";
	cout<<"\n\t\t\t\t5.Feet---> Centimeters";
	int opt;
	cin>>opt;
	switch(opt){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Feet\n\n\t\t\t";
			cin>>input;
			output = input*0.000304;
			cout<<"\n\n\t\t\t\t"<<input<<"Feet = "<<output<<"Kilometers\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Feet\n\n\t\t\t";
			cin>>input;
			output = input*0.000189;
			cout<<"\n\n\t\t\t\t"<<input<<"Feet = "<<output<<"Miles\n\t\t";
			break;
		case 3:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Feet\n\n\t\t\t";
			cin>>input;
			output = input*12;
			cout<<"\n\n\t\t\t\t"<<input<<"Feet = "<<output<<"Inches\n\t\t";
			break;
		case 4:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter your value in Feet\n\n\t\t\t";
			cin>>input;
			output = input/0.3048;
			cout<<"\n\n\t\t\t\t"<<input<<"Feet = "<<output<<"Meters\n\t\t";
			break;
		case 5:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter your value in Feet\n\n\t\t\t";
			cin>>input;
			output=input/30.48;
			cout<<"\n\n\t\t\t\t"<<input<<"Feet = "<<output<<"Centimeters\n\t\t";
			break;
		default:
			cout<<"\n\n\n\n\t\t\tOops !!. Invalid option";
			break;
	}	
}
void meterstoothers(){
	cout<<"\n\n\n\n\t\t\t\tSelect a desired option";
	cout<<"\n\t\t\t\t1.Meters---> Miles";
	cout<<"\n\t\t\t\t2.Meters---> Feet";
	cout<<"\n\t\t\t\t3.Meters---> Inches";
	cout<<"\n\t\t\t\t4.Meters--->Kilometers";
	cout<<"\n\t\t\t\t5.Meters--->Centimeters";
	int opt;
	cin>>opt;
	switch(opt){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Meters\n\n\t\t\t";
			cin>>input;
			output = input*0.00062137;
	        cout<<"\n\n\t\t\t\t"<<input<<"Meters = "<<output<<"Miles\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Meters\n\n\t\t\t";
			cin>>input;
			output = input*3.28084;
			cout<<"\n\n\t\t\t\t"<<input<<"Meters = "<<output<<"Feet\n\t\t";
			break;
		case 3:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Meters\n\n\t\t\t";
			cin>>input;
			output = input*39.3701;
			cout<<"\n\n\t\t\t\t"<<input<<"Meters = "<<output<<"Inches\n\t\t";
			break;
		case 4:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter your value in Meters\n\n\t\t\t";
			cin>>input;
			output = input/1000;
			cout<<"\n\n\t\t\t\t"<<input<<"Meters = "<<output<<"Kilometers\n\t\t";
			break;
		case 5:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter your value in Meters\n\n\t\t\t";
			cin>>input;
			output=input*100;
			cout<<"\n\n\t\t\t\t"<<input<<"Meters = "<<output<<"Centimeters\n\t\t";
			break;
		default:
			cout<<"\n\n\n\n\t\t\tOops !!. Invalid option";
			break;
			
	}

}
void cmtoothers(){
	cout<<"\n\n\n\n\t\t\t\tSelect a desired option::";
	cout<<"\n\t\t\t\t1.Centimeters---> Miles";
	cout<<"\n\t\t\t\t2.Centimeters---> Feet";
	cout<<"\n\t\t\t\t3.Centimeters---> Inches";
	cout<<"\n\t\t\t\t4.Centimeters--->Kilometers";
	cout<<"\n\t\t\t\t5.Centimeters--->Meters";
	int opt;
	cin>>opt;
	switch(opt){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Centimeters\n\n\t\t\t";
			cin>>input;
			output = input/160934.4;
	        cout<<"\n\n\t\t\t\t"<<input<<"Centimeters = "<<output<<"Miles\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Centimeters\n\n\t\t\t";
			cin>>input;
			output = input/30.48;
			cout<<"\n\n\t\t\t\t"<<input<<"Centimeters = "<<output<<"Feet\n\t\t";
			break;
		case 3:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Centimeters\n\n\t\t\t";
			cin>>input;
			output = input/2.54;
			cout<<"\n\n\t\t\t\t"<<input<<"Centimeters = "<<output<<"Inches\n\t\t";
			break;
		case 4:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter your value in Centimeters\n\n\t\t\t";
			cin>>input;
			output = input/100000;
			cout<<"\n\n\t\t\t\t"<<input<<"Centimeters = "<<output<<"Kilometers\n\t\t";
			break;
		case 5:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter your value in Centimeters\n\n\t\t\t";
			cin>>input;
			output=input/100;
			cout<<"\n\n\t\t\t\t"<<input<<"Centimeters = "<<output<<"Meters\n\t\t";
			break;
		default:
			cout<<"\n\n\n\n\t\t\tOops !!. Invalid option";
			break;
			
	}
	
}
void Length(){
	int value;
	cout<<"\n\n\n\n\t\t\t\tYour value is in ......";
	cout<<"\n\t\t\t\t1.Kilometers";
	cout<<"\n\t\t\t\t2.Miles";
	cout<<"\n\t\t\t\t3.Feet";
	cout<<"\n\t\t\t\t4.Meters";
	cout<<"\n\t\t\t\t5.Centimeters";
	
	cin>>value;
	switch(value){
		case 1:
			kmToOthers();
			break;
		case 2:
			MilesToOthers();
			break;
		case 3:
			FeetToOthers();
			break;
		case 4:
		 	meterstoothers();
			break;
		case 5:
			cmtoothers();
			break;
		default:
			cout<<"\n\n\n\n\t\t\tInvalid option.";
				
			
	}
}
void kilogramtoothers(){
	cout<<"\n\n\n\n\t\t\t\tSelect a desired option";
	cout<<"\n\t\t\t\t1.Kilogram---> Gram";
	cout<<"\n\t\t\t\t2.Kilogram---> Pound";
	cout<<"\n\t\t\t\t3.Kilogram---> Ounce";
	int option;
	cin>>option;
	switch(option){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Kilogram\n\n\t\t\t";
			cin>>input;
			output = input*1000;
	        cout<<"\n\n\t\t\t\t"<<input<<"Kilogram = "<<output<<"Gram\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Kilogram\n\n\t\t\t";
			cin>>input;
			output = input*2.20462;
	        cout<<"\n\n\t\t\t\t"<<input<<"Kilogram = "<<output<<"Pound\n\t\t";
			break;
		case 3:
		system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Kilogram\n\n\t\t\t";
			cin>>input;
			output = input*35.274;
	        cout<<"\n\n\t\t\t\t"<<input<<"Kilogram = "<<output<<"Ounce\n\t\t";
			break;	
	}
}
void gramtoothers(){
	cout<<"\n\n\n\n\t\t\t\tSelect a desired option";
	cout<<"\n\t\t\t\t1.Gram---> Kilogram";
	cout<<"\n\t\t\t\t2.Gram---> Pound";
	cout<<"\n\t\t\t\t3.Gram---> Ounce";
	int option;
	cin>>option;
	switch(option){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Grams\n\n\t\t\t";
			cin>>input;
			output = input/1000;
	        cout<<"\n\n\t\t\t\t"<<input<<"Grams = "<<output<<"Kilogram\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Grams\n\n\t\t\t";
			cin>>input;
			output = input/453.592;
	        cout<<"\n\n\t\t\t\t"<<input<<"Grams = "<<output<<"Pound\n\t\t";
			break;
		case 3:
		system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Grams\n\n\t\t\t";
			cin>>input;
			output = input*0.035274;
	        cout<<"\n\n\t\t\t\t"<<input<<"Grams = "<<output<<"Ounce\n\t\t";
			break;	
	}
}
void poundtoothers(){
		cout<<"\n\n\n\n\t\t\t\tSelect a desired option";
	cout<<"\n\t\t\t\t1.Pound---> Kilogram";
	cout<<"\n\t\t\t\t2.Pound---> Gram";
	cout<<"\n\t\t\t\t3.Pound---> Ounce";
	int option;
	cin>>option;
	switch(option){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Pounds\n\n\t\t\t";
			cin>>input;
			output = input*0.453592;
	        cout<<"\n\n\t\t\t\t"<<input<<"Pounds = "<<output<<"Kilograms\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Pounds\n\n\t\t\t";
			cin>>input;
			output = input*453.592;
	        cout<<"\n\n\t\t\t\t"<<input<<"Pounds = "<<output<<"Grams\n\t\t";
			break;
		case 3:
		system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Pounds\n\n\t\t\t";
			cin>>input;
			output = input*16;
	        cout<<"\n\n\t\t\t\t"<<input<<"Pounds = "<<output<<"Ounce\n\t\t";
			break;	
	}
}
ouncetoothers(){
	cout<<"\n\n\n\n\t\t\t\tSelect a desired option";
	cout<<"\n\t\t\t\t1.Ounce---> Kilogram";
	cout<<"\n\t\t\t\t2.Ounce---> Gram";
	cout<<"\n\t\t\t\t3.Ounce---> Pound";
	int option;
	cin>>option;
	switch(option){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Ounce\n\n\t\t\t";
			cin>>input;
			output = input*0.0283495;
	        cout<<"\n\n\t\t\t\t"<<input<<"Ounce = "<<output<<"Kilograms\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Ounce\n\n\t\t\t";
			cin>>input;
			output = input*28.3495;
	        cout<<"\n\n\t\t\t\t"<<input<<"Ounce = "<<output<<"Grams\n\t\t";
			break;
		case 3:
		system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Ounce\n\n\t\t\t";
			cin>>input;
			output = input*0.0625;
	        cout<<"\n\n\t\t\t\t"<<input<<"Ounce = "<<output<<"Pounds\n\t\t";
			break;	
	}
	return 0;
}
void weight(){
	int weightvalue;
	cout<<"\n\n\n\n\t\t\t\tYour value is in ......";
	cout<<"\n\t\t\t\t1.Kilogram(kg)";
	cout<<"\n\t\t\t\t2.Gram(g)";
	cout<<"\n\t\t\t\t3.Pound(lb)";
	cout<<"\n\t\t\t\t4.Ounce(oz)";
	cin>>weightvalue;
	switch(weightvalue){
		case 1:
			kilogramtoothers();
			break;
		case 2:
			gramtoothers();
			break;
		case 3:
			poundtoothers();
			break ;
		case 4:
			ouncetoothers();
			break;
		default:
			cout<<"\n\n\n\n\t\t\tInvalid option.";
				
			
	}

}
void litertoother(){
	cout<<"\n\n\n\n\t\t\t\tSelect a desired option";
	cout<<"\n\t\t\t\t1.Liter---> Milliliter";
	cout<<"\n\t\t\t\t2.Liter---> Cubic Meter";
	cout<<"\n\t\t\t\t3.Liter---> Gallon";
	int option;
	cin>>option;
	switch(option){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Liters\n\n\t\t\t";
			cin>>input;
			output = input*1000;
	        cout<<"\n\n\t\t\t\t"<<input<<"Liters = "<<output<<"Milliliters\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Liters\n\n\t\t\t";
			cin>>input;
			output = input*0.001;
	        cout<<"\n\n\t\t\t\t"<<input<<"Liters = "<<output<<"Cubic Meters\n\t\t";
			break;
		case 3:
		system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Liters\n\n\t\t\t";
			cin>>input;
			output = input*0.264172;
	        cout<<"\n\n\t\t\t\t"<<input<<"Liters = "<<output<<"Gallons\n\t\t";
			break;	
		default:
		cout<<"\n\n\n\n\t\t\tInvalid option.";
	}
}
void mltoother(){
		cout<<"\n\n\n\n\t\t\t\tSelect a desired option";
	cout<<"\n\t\t\t\t1.Milliliters---> Liters";
	cout<<"\n\t\t\t\t2.Milliliters---> Cubic Meters";
	cout<<"\n\t\t\t\t3.Milliliters---> Gallons";
	int option;
	cin>>option;
	switch(option){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Milliliters\n\n\t\t\t";
			cin>>input;
			output = input*0.001;
	        cout<<"\n\n\t\t\t\t"<<input<<"Milliliters = "<<output<<"Liters\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in milliliters\n\n\t\t\t";
			cin>>input;
			output = input*0.000001;
	        cout<<"\n\n\t\t\t\t"<<input<<"Milliliters = "<<output<<"Cubic Meters\n\t\t";
			break;
		case 3:
		system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Milliliters\n\n\t\t\t";
			cin>>input;
			output = input*0.000264172;
	        cout<<"\n\n\t\t\t\t"<<input<<"Milliliters = "<<output<<"Gallons\n\t\t";
			break;	
		default:
		cout<<"\n\n\n\n\t\t\tInvalid option.";
	}
}
void cubictoother(){
	cout<<"\n\n\n\n\t\t\t\tSelect a desired option";
	cout<<"\n\t\t\t\t1.Cubic Meters---> Liters";
	cout<<"\n\t\t\t\t2.Cubic Meters---> Milliliters";
	cout<<"\n\t\t\t\t3.Cubic Meters---> Gallons";
	int option;
	cin>>option;
	switch(option){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Cubic Meters\n\n\t\t\t";
			cin>>input;
			output = input*1000;
	        cout<<"\n\n\t\t\t\t"<<input<<"Cubic Meters = "<<output<<"Liters\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Cubic Meters\n\n\t\t\t";
			cin>>input;
			output = input*1000000;
	        cout<<"\n\n\t\t\t\t"<<input<<"Cubic Meters = "<<output<<"Milliliters\n\t\t";
			break;
		case 3:
		system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Cubic Meters\n\n\t\t\t";
			cin>>input;
			output = input*264.172;
	        cout<<"\n\n\t\t\t\t"<<input<<"Cubic Meters = "<<output<<"Gallons\n\t\t";
			break;	
		default:
		cout<<"\n\n\n\n\t\t\tInvalid option.";
	}
}
void galontoother(){
		cout<<"\n\n\n\n\t\t\t\tSelect a desired option";
	cout<<"\n\t\t\t\t1.Gallons---> Liters";
	cout<<"\n\t\t\t\t2.Gallons---> Milliliters";
	cout<<"\n\t\t\t\t3.Gallons---> Cubic Meters";
	int option;
	cin>>option;
	switch(option){
		case 1:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Gallons\n\n\t\t\t";
			cin>>input;
			output = input*3.78541;
	        cout<<"\n\n\t\t\t\t"<<input<<"Gallons = "<<output<<"Liters\n\t\t";
			break;
		case 2:
			system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Gallons\n\n\t\t\t";
			cin>>input;
			output = input*3785.41;
	        cout<<"\n\n\t\t\t\t"<<input<<"Gallons = "<<output<<"Milliliters\n\t\t";
			break;
		case 3:
		system("cls");
			cout<<"\n\n\n\n\t\t\tEnter the value in Gallons\n\n\t\t\t";
			cin>>input;
			output = input*0.00378541;
	        cout<<"\n\n\t\t\t\t"<<input<<"Gallons = "<<output<<"Cubic Meters\n\t\t";
			break;	
		default:
		cout<<"\n\n\n\n\t\t\tInvalid option.";
	}
}
void volume(){
    int volumevalue;
	cout<<"\n\n\n\n\t\t\t\tYour value is in ......";
	cout<<"\n\t\t\t\t1.Liter(L)";
	cout<<"\n\t\t\t\t2.Milliliter(mL)";
	cout<<"\n\t\t\t\t3.Cubic Meter";
	cout<<"\n\t\t\t\t4.Galon";
	cin>>volumevalue;
	switch(volumevalue){
		case 1:
			litertoother();
			break;
		case 2:
			mltoother();
			break;
		case 3:
			cubictoother();
			break;
		case 4:
			galontoother();
			break;
		default:
		cout<<"\n\n\n\n\t\t\tInvalid option.";
	}
}
int main(){
	start:
	cout<<"\n\n\n\n\t\t\t\tIn which field do yo want to convert ?";
	cout<<"\n\t\t\t\t1:Length";
	cout<<"\n\t\t\t\t2.Weight";
	cout<<"\n\t\t\t\t3.Volume";
	int sele;
	cin>>sele;
	switch(sele){
		case 1:
			Length();
			break;
		case 2:
			weight();
			break;
		case 3:
		    volume();
		    break;
		    default:
		cout<<"\n\n\n\n\t\t\tInvalid option.";
	}
	system("pause");
	return 0;
}