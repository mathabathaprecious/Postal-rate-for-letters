// Postal rate for letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	double length, width, thickness;
	int Dimension = 0;


	cout << "enter your length" << endl;
	cin >> length;
	cout << "enter your width" << endl;
	cin >> width;
	cout << "enter your thickness" << endl;
	cin >> thickness;

	Dimension = length * width * thickness;

	if (Dimension <= 141000) {


		cout << "R2.50";
	}


	else if (Dimension > 141000 && Dimension <= 440000) {

		cout << "R5.00";

	}
	else if (Dimension > 440000 && Dimension <= 2647500) {

		cout << "R6.25";

	}
	else if (Dimension > 2647500) {
		cout << "This is a parcel";
	}




	return 0;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
