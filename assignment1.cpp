#include <iostream>
using namespace std;

int main(){
    int last_digit, second_last_digit, swap ;
    cout << "Enter the last digit of your mat.no and then the second to last digit: " << endl;
    cin >> last_digit >> second_last_digit;
    swap = last_digit;
    last_digit = second_last_digit;
    second_last_digit = swap;

    cout << " Your swapped mat.no is: " << last_digit << second_last_digit ;


	return 0;
}
