#include <iostream>

using namespace std;

int p, s, b, ga;

int main(){
	
	cout << "Enter total sold number of premium tickets: ";
	cin >> p;
	cout << "Enter total sold number of sideline tickets: ";
	cin >> s;
	cout << "Enter total sold number of box tickets: ";
	cin >> b;
	cout << "Enter total sold number of general admission tickets: ";
	cin >> ga;
	
	cout << "The total amount of sales in premium is: " << p*250 << endl;
	cout << "The total amount of sales in sideline is: " << s*100 << endl;
	cout << "The total amount of sales in box is: " << b*50 << endl;
	cout << "The total amount of sales in general admission is: " << ga*25 << endl;
	
	return 0;			
}
