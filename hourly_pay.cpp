#include <iostream>
using namespace std;

// This is a program to calculate the pay for hours worked and for extra hours on the job.

int main(){
                double hourly_rate;
                double hours;
                double orig_hours;
                double ext_hours; // This is for the extra hours
                double new_ext_hours;

                cout << " Enter the last two digits of your mat.no as your hours worked: ";
                cin >> hours;
                cout << " enter the last digit of your mat.no as your hourly rate: ";
                cin >> hourly_rate;

                if (hours <= 40) {
                    orig_hours = hours * hourly_rate;
                    cout << "The Gross_Pay is: " << orig_hours << " naira" << endl;
                }
                else{
                        ext_hours = (hours - 40);
                    new_ext_hours = 40 * hourly_rate + ext_hours * hourly_rate* 1.5;
                    cout << "The Gross_Pay is: " << new_ext_hours << " naira" <<  endl;
                }
	
	return 0;
}

	



