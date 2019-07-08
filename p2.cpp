#include <iostream>

using namespace std;

double a,b,c,d,e; // a-mass in kg b-mass in g c-density in l/cm3 d-density in g/cm3 e-volume

int main(){
	cout << "Enter mass in kilograms: ";
	cin >> a;
	
	b= a*1000;
	cout << "The mass in grams is: " << b << endl;
	
	cout << "Enter density in liters per cubic centimeters: ";
	cin >> c;
	
	d= c*1000;
	cout << "The density in grams per cubic centimeters is: " << d << endl;
	
	
	e= (0.25*b)/d;
	
	cout << "The volume is: " << e << endl; // "OUTPUTS THE VOLUME"
	
	
return 0; 
}
