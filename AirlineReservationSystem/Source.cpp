#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

int main() {
	Management m;
	return 0;
}

/**
* 
* 
* 
*/
class Management {
public:
	Management() {
		mainMenu();
	}
};

void mainMenu() {
	int lchoice;
	int schoice;
	int back;

	// Print out the a visual menu for the user.
	cout << "\t				Fisk Airlines \n" << endl;
	cout << "\t ______________Main Menu______________" << endl;
	cout << "\t _____________________________________" << endl;
	cout << "\t|\t\t\t\t\t\t|" << endl;

	cout << "\t|\t Press 1 to add the Customer Details	\t" << endl;
	cout << "\t|\t Press 2 for Flight Registration		\t" << endl;
	cout << "\t|\t Press 3 for Ticket and Charges		\t" << endl;
	cout << "\t|\t Press 4 to Exit						\t" << endl;
}