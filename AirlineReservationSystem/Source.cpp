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
	// Create variables to store the user's selections. 
	int lChoice;
	int sChoice;
	int back;

	//Declare other needed variables.
	Details d;
	registration r;
	ticket t;

	// Print out the a visual menu for the user.
	cout << "\t				Fisk Airlines \n" << endl;
	cout << "\t ______________Main Menu______________" << endl;
	cout << "\t _____________________________________" << endl;
	cout << "\t|\t\t\t\t\t\t|" << endl;

	cout << "\t|\t Press 1 to add the Customer Details	\t" << endl;
	cout << "\t|\t Press 2 for Flight Registration		\t" << endl;
	cout << "\t|\t Press 3 for Ticket and Charges		\t" << endl;
	cout << "\t|\t Press 4 to Exit						\t" << endl;
	cout << "\t _____________________________________" << endl;
	cout << "\t|\t\t\t\t\t\t|" << endl;

	// Get the user's choice and store it.
	cout << "Enter your selection: ";
	cin >> lChoice;

	switch (lChoice) {
		case 1: {
			cout << "\t ____________Customers____________" << endl;
			d.info();
			cout << "Press 1 to return to the Main Menu";
			cin >> back;

			if (back == 1) {
				mainMenu();
			}
			else {
				mainMenu();
			}
			break;
		}

		case 2: {
			cout << "\t __________Book a Flight__________" << endl;
			r.flights();
			break;
		}

		case 3: {
			cout << "\t _________Get Your Ticket_________" << endl;
			t.bill();

			cout << "Your ticket is confirmed. \n" << endl;
			cout << "Press 1 to display your ticket. \n" << endl;

			cin >> back;

			if (back == 1) {
				t.display();
				cout << "Press any key to return to the Main Menu: ";
				cin >> back;
				if (back == 1) {
					mainMenu();
				}
				else {
					mainMenu();
				}
			}
			else {
				mainMenu();
			}
			break;
		}
		case 4: {
			cout << "\n\n\t_______Thank you!_______" << endl;
			break;
		}
		default: {
			cout << "It seems that your input was not valid, please try again. \n" << endl;
		}
	}
}