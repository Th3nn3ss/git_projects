#include <iostream>
using namespace std;


int main() {
	double price; // Price to be incremented
	double new_price;
	double dis_price;
	const double rate = 0.03;
	int count = 1;
	do {


		cout << " Enter the Price for item no." << count << ",,,(or enter 0 to end the program): ";

		cin >> price;

		if (price != 0) 
		{

		dis_price = price * rate;
		new_price = price + dis_price;

		cout << " Amount of increase is: " << dis_price << endl;

		cout << " The new Price is: " << new_price << endl;
		cout << "\n\n ";
		count = count + 1;
		}
	}while (price > 0);

	return 0;
}
