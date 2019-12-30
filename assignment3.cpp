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

	orig_hours = hours * hourly_rate;
	cout << "For hours below and equal to 40, the Gross_Pay is: " << orig_hours << " naira" << endl;
	if (hours > 40) {
	       	ext_hours = (hours - 40) * 1.5;
		new_ext_hours = orig_hours + ext_hours;
		cout << "Including extra hours, the new Gross_Pay is: " << new_ext_hours << " naira" <<  endl;
	}
	
	return 0;
}

	



