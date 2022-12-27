#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<array>

using namespace std;

void mainMenu();

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

int main() {
	Management m;
	return 0;
}

/**
* 
* 
* 
*/
class Details {
public:
	// Create the needed variables for the user's info.
	static string name;
	int phoneNum;
	int age;
	string addr;
	static int cId;
	char arr[100];

	// Ask for and store the user's info.
	void info()
	{
		cout << "\nEnter your customer ID:";
		cin >> cId;
		cout << "\nEnter your name: ";
		cin >> name;
		cout << "\nEnter your age: ";
		cin >> age;
		cout << "\nEnter your address: ";
		cin >> addr;
		cout << "Your details are saved.\n" << endl;
	}
};

int Details::cId;
string Details::name;

class Registration {
public:
	static int choice;
	int choice2;
	int back;
	static float cost;

	void flights() {
		std::array<std::string, 6> flightLocations{ "USA", "Canada", "UK", "Italy", "Melbourne", "Egypt" };

		for (int i = 0; i < flightLocations.size(); i++) {
			cout << (i + 1) << ". Destination: " << flightLocations[i] << endl;
		}

		cout << "\n Welcome to Fisk Airlines" << endl;
		cout << "Which flight would you like to book?";
		cin >> choice;

		// Different cases depending on the user's input.
		switch (choice) {
		// If the user chose USA...
			case 1: {
				cout << "_______Welcome to USA_______\n" << endl;
				cout << "Enjoy!";
				cout << "Here are the flights: \n" << endl;

				cout << "1. USA - 0986" << endl;
				cout << "\t 06-21-2025, 9:00AM, 10hrs, $400" << endl;
				cout << "2. USA - 6149" << endl;
				cout << "\t 07-13-2025, 2:30AM, 11hrs, $500" << endl;
				cout << "3. USA - 6622" << endl;
				cout << "\t 07-18-2025, 8:00PM, 14hrs, $550" << endl;

				cout << "\n Select your desired flight: ";
				cin >> choice2;

				if (choice2 == 1) {
					cost = 400;
					cout << "\n Your flight has been booked: USA - 0986" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else if (choice2 == 2) {
					cost = 500;
					cout << "\n Your flight has been booked: USA - 6149" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else if (choice2 == 3) {
					cost = 550;
					cout << "\n Your flight has been booked: USA - 6622" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else {
					cout << "Your input was invalid. Returning to the previous menu..." << endl;
					flights();
				}

				cout << "Press any key to go back to the main menu: " << endl;
				cin >> back;

				mainMenu();
			}
			// If the user chose Canada...
			case 2: {
				cout << "_______Welcome to Canada_______\n" << endl;
				cout << "Enjoy!";
				cout << "Here are the flights: \n" << endl;

				cout << "1. CA - 0426" << endl;
				cout << "\t 06-29-2025, 10:00AM, 11hrs, $500" << endl;
				cout << "2. CA - 6079" << endl;
				cout << "\t 07-16-2025, 3:30AM, 12hrs, $570" << endl;
				cout << "3. CA - 4621" << endl;
				cout << "\t 07-19-2025, 7:00PM, 15hrs, $670" << endl;

				cout << "\n Select your desired flight: ";
				cin >> choice2;

				if (choice2 == 1) {
					cost = 500;
					cout << "\n Your flight has been booked: CA - 0426" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else if (choice2 == 2) {
					cost = 570;
					cout << "\n Your flight has been booked: CA - 6079" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else if (choice2 == 3) {
					cost = 670;
					cout << "\n Your flight has been booked: CA - 4621" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else {
					cout << "Your input was invalid. Returning to the previous menu..." << endl;
					flights();
				}

				cout << "Press any key to go back to the main menu: " << endl;
				cin >> back;

				mainMenu();
			}
			// If the user chose the UK...
			case 3: {
				cout << "_______Welcome to the UK_______\n" << endl;
				cout << "Enjoy!";
				cout << "Here are the flights: \n" << endl;

				cout << "1. UK - 1426" << endl;
				cout << "\t 05-29-2025, 11:00AM, 5hrs, $400" << endl;
				cout << "2. UK - 3079" << endl;
				cout << "\t 06-16-2025, 6:30AM, 3hrs, $370" << endl;

				cout << "\n Select your desired flight: ";
				cin >> choice2;

				if (choice2 == 1) {
					cost = 400;
					cout << "\n Your flight has been booked: UK - 1426" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else if (choice2 == 2) {
					cost = 370;
					cout << "\n Your flight has been booked: UK - 3079" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else {
					cout << "Your input was invalid. Returning to the previous menu..." << endl;
					flights();
				}

				cout << "Press any key to go back to the main menu: " << endl;
				cin >> back;

				mainMenu();
			}
			// If the user chose Italy...
			case 4: {
				cout << "_______Welcome to Italy_______\n" << endl;
				cout << "Enjoy!";
				cout << "Here are the flights: \n" << endl;

				cout << "1. IT - 5427" << endl;
				cout << "\t 05-29-2025, 11:00AM, 5hrs, $450" << endl;
				cout << "2. IT - 3779" << endl;
				cout << "\t 06-16-2025, 6:30AM, 3hrs, $370" << endl;

				cout << "\n Select your desired flight: ";
				cin >> choice2;

				if (choice2 == 1) {
					cost = 450;
					cout << "\n Your flight has been booked: IT - 5427" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else if (choice2 == 2) {
					cost = 370;
					cout << "\n Your flight has been booked: IT - 3779" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else {
					cout << "Your input was invalid. Returning to the previous menu..." << endl;
					flights();
				}

				cout << "Press any key to go back to the main menu: " << endl;
				cin >> back;

				mainMenu();
			}
			// If the user chose Melbourne...
			case 5: {
				cout << "_______Welcome to Melbourne_______\n" << endl;
				cout << "Enjoy!";
				cout << "Here is the flight: \n" << endl;

				cout << "1. AU - 3476" << endl;
				cout << "\t 05-29-2025, 11:00AM, 15hrs, $700" << endl;

				cout << "\n Select your desired flight: ";
				cin >> choice2;

				if (choice2 == 1) {
					cost = 700;
					cout << "\n Your flight has been booked: AU - 3476" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else {
					cout << "Your input was invalid. Returning to the previous menu..." << endl;
					flights();
				}

				cout << "Press any key to go back to the main menu: " << endl;
				cin >> back;

				mainMenu();
			}
			// If the user chose Egypt...
			case 6: {
				cout << "_______Welcome to Egypt_______\n" << endl;
				cout << "Enjoy!";
				cout << "Here are the flights: \n" << endl;

				cout << "1. EG - 0456" << endl;
				cout << "\t 05-29-2025, 11:00AM, 9hrs, $600" << endl;
				cout << "2. EG - 5479" << endl;
				cout << "\t 06-16-2025, 6:30AM, 8hrs, $570" << endl;

				cout << "\n Select your desired flight: ";
				cin >> choice2;

				if (choice2 == 1) {
					cost = 600;
					cout << "\n Your flight has been booked: EG - 0456" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else if (choice2 == 2) {
					cost = 570;
					cout << "\n Your flight has been booked: EG - 5479" << endl;
					cout << "Please return to the Main Menu and collect your ticket." << endl;
				}
				else {
					cout << "Your input was invalid. Returning to the previous menu..." << endl;
					flights();
				}

				cout << "Press any key to go back to the main menu: " << endl;
				cin >> back;

				mainMenu();
			}
			default: {
				cout << "Your input was invalid. Going back to the Main Menu..." << endl;
				mainMenu();
				break;
			}
		}
	}
};

float Registration::cost;
int Registration::choice;

class Ticket : public Registration, Details {
public:
	void bill() {
		string destination = "";
		// Create a file for the data of the flight.
		ofstream outf("data.txt");
		{
			outf << "____________Fisk Airlines____________" << endl;
			outf << "_______________Ticket_______________" << endl;
			outf << "____________________________________" << endl;

			outf << "Customer ID: " << Details::cId << endl;
			outf << "Customer Name: " << Details::name << endl;
			outf << "Description: " << endl << endl;

			if (Registration::choice == 1) {
				destination = "USA";
			}
			else if (Registration::choice == 2) {
				destination = "Canada";
			}
			else if (Registration::choice == 3) {
				destination = "UK";
			}
			else if (Registration::choice == 4) {
				destination = "Italy";
			}
			else if (Registration::choice == 5) {
				destination = "Melbourne";
			}
			else if (Registration::choice == 6) {
				destination = "Egypt";
			}
			outf << "Destination\t\t" << destination << endl;
			outf << "Cost of flight:\t\t" << Registration::cost << endl;
		}
		// Close the data file.
		outf.close();
	}
	/**
	* 
	*/
	void displayBill() {
		ifstream stream("data.txt"); {
			if (!stream) {
				cout << "There was an error with the file." << endl;
			}
			while (!stream.eof()) {
				stream.getline(arr, 100);
				cout << arr << endl;
			}
		}
		stream.close();
	}
};

void mainMenu() {
	// Create variables to store the user's selections. 
	int lChoice;
	int sChoice;
	int back;

	//Declare other needed variables.
	Details d;
	Registration r;
	Ticket t;

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

	// Use different cases depending on the user's choice.
	switch (lChoice) {
		case 1: {
			cout << "\t ____________Customers____________" << endl;
			d.info();
			cout << "Press 1 to return to the Main Menu";
			cin >> back;

			mainMenu();

			break;
		}
		// Call the flights function if the user wants to book a flight.
		case 2: {
			cout << "\t __________Book a Flight__________" << endl;
			r.flights();
			break;
		}
		// Call the bill function of the user wants to get a ticket.
		case 3: {
			cout << "\t _________Get Your Ticket_________" << endl;
			t.bill();
			// Once the user has got their ticket, inform them.
			cout << "Your ticket is confirmed. \n" << endl;
			cout << "Press 1 to display your ticket. \n" << endl;

			cin >> back;

			// Return to the Main Menu.
			if (back == 1) {
				t.displayBill();
				cout << "Press any key to return to the Main Menu: ";
				cin >> back;
			}
			mainMenu();
			break;
		}
		// If the user is finished, thank them.
		case 4: {
			cout << "\n\n\t_______Thank you!_______" << endl;
			break;
		}
		// If there was an invalid input, let the user know and inform them to try again.
		default: {
			cout << "It seems that your input was not valid, please try again. \n" << endl;
			mainMenu();
			break;
		}
	}
}