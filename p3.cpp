#include <iostream>

using namespace std;

 double netBalance,x1,payment,interest,x2,monthlyInterestRate,averageDailyBalance;
 
int main()
{

    cout << "Enter net Balance: ";
    cin >> netBalance;
    
    cout << "Enter payment made: ";
    cin >> payment;
    
    cout << "Enter number of days in the billing cycle: ";
    cin >> x1;
    
    cout << "Enter number of days payment is made before billing cycle: ";
    cin >> x2;
    
    cout  << "Enter interest per month: ";
    cin >> monthlyInterestRate;

    averageDailyBalance = (netBalance * x1 - payment * x2)/x1;
    
    interest = averageDailyBalance * monthlyInterestRate;

    cout << "The interest is: " << interest << endl;

return 0;
}
