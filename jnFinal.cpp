//Name: Jake Nelson
//Summary: FINAL PROJECT - C++ THEATRE: This program simulates a ticket purchasing application for a movie theatre. The user of the program has the option to
//display the seats that are available, display the seat prices, update the seat prices, purchase a ticket, and display the total amount of sales that have been earned.
//The most difficult aspect of this assignment was passing various data types into functions, such as two-dimensional character arrays and pointers.
//It took about 2.5 hours in total to write this code, plus an additional .5 hours to add comments.
//Created on 11/29/2019: created definitions for functions setDefaultPrices, getChoice, displaySeats, and displayPrices, and established loop for calling functions in main
//Updated on 12/1/2019: created definitions for functions updatePrices, purchaseTicket, and displaySales
//Updated on 12/6/2019: added comments.

/*demonstration of application

        C++ Theatre

1.      View Available Seats
2.      View Seating Prices
3.      Update Seating Prices
4.      Purchase a Ticket
5.      View Ticket Sales
6.      Quit
Enter your choice(1-6):

1

        Available Seats

Row 1:  ##############################
Row 2:  ##############################
Row 3:  ##############################
Row 4:  ##############################
Row 5:  ##############################
Row 6:  ##############################
Row 7:  ##############################
Row 8:  ##############################
Row 9:  ##############################
Row 10: ##############################
Row 11: ##############################
Row 12: ##############################
Row 13: ##############################
Row 14: ##############################
Row 15: ##############################

        C++ Theatre

1.      View Available Seats
2.      View Seating Prices
3.      Update Seating Prices
4.      Purchase a Ticket
5.      View Ticket Sales
6.      Quit
Enter your choice(1-6):

2

Ticket Prices By Row

        Row     Price
        ---     -----
        1       23
        2       23
        3       24
        4       24
        5       24
        6       25
        7       25
        8       25
        9       25
        10      25
        11      24
        12      24
        13      24
        14      23
        15      23

        C++ Theatre

1.      View Available Seats
2.      View Seating Prices
3.      Update Seating Prices
4.      Purchase a Ticket
5.      View Ticket Sales
6.      Quit
Enter your choice(1-6):

4

        Available Seats

Row 1:  ##############################
Row 2:  ##############################
Row 3:  ##############################
Row 4:  ##############################
Row 5:  ##############################
Row 6:  ##############################
Row 7:  ##############################
Row 8:  ##############################
Row 9:  ##############################
Row 10: ##############################
Row 11: ##############################
Row 12: ##############################
Row 13: ##############################
Row 14: ##############################
Row 15: ##############################

Please enter desired row number (1-15): 1

Please enter desired seat number (1-30): 1

Do you wish to purchase another ticket? y/n
y

        Available Seats

Row 1:  *#############################
Row 2:  ##############################
Row 3:  ##############################
Row 4:  ##############################
Row 5:  ##############################
Row 6:  ##############################
Row 7:  ##############################
Row 8:  ##############################
Row 9:  ##############################
Row 10: ##############################
Row 11: ##############################
Row 12: ##############################
Row 13: ##############################
Row 14: ##############################
Row 15: ##############################

Please enter desired row number (1-15): 2

Please enter desired seat number (1-30): 2

Do you wish to purchase another ticket? y/n
n
Purchase confirmed.

You have purchased a total of 2 tickets for a total of $46

        C++ Theatre

1.      View Available Seats
2.      View Seating Prices
3.      Update Seating Prices
4.      Purchase a Ticket
5.      View Ticket Sales
6.      Quit
Enter your choice(1-6):

1

        Available Seats

Row 1:  *#############################
Row 2:  #*############################
Row 3:  ##############################
Row 4:  ##############################
Row 5:  ##############################
Row 6:  ##############################
Row 7:  ##############################
Row 8:  ##############################
Row 9:  ##############################
Row 10: ##############################
Row 11: ##############################
Row 12: ##############################
Row 13: ##############################
Row 14: ##############################
Row 15: ##############################

        C++ Theatre

1.      View Available Seats
2.      View Seating Prices
3.      Update Seating Prices
4.      Purchase a Ticket
5.      View Ticket Sales
6.      Quit
Enter your choice(1-6):

3
Please enter the price for row 1: 1
Please enter the price for row 2: 1
Please enter the price for row 3: 1
Please enter the price for row 4: 1
Please enter the price for row 5: 1
Please enter the price for row 6: 1
Please enter the price for row 7: 1
Please enter the price for row 8: 1
Please enter the price for row 9: 1
Please enter the price for row 10: 1
Please enter the price for row 11: 1
Please enter the price for row 12: 1
Please enter the price for row 13: 1
Please enter the price for row 14: 1
Please enter the price for row 15: 1
the ticket prices have now been updated.

        C++ Theatre

1.      View Available Seats
2.      View Seating Prices
3.      Update Seating Prices
4.      Purchase a Ticket
5.      View Ticket Sales
6.      Quit
Enter your choice(1-6):

4

        Available Seats

Row 1:  *#############################
Row 2:  #*############################
Row 3:  ##############################
Row 4:  ##############################
Row 5:  ##############################
Row 6:  ##############################
Row 7:  ##############################
Row 8:  ##############################
Row 9:  ##############################
Row 10: ##############################
Row 11: ##############################
Row 12: ##############################
Row 13: ##############################
Row 14: ##############################
Row 15: ##############################

Please enter desired row number (1-15): 1

Please enter desired seat number (1-30): 1

The seat you have requested is taken. Please select another seat.

        Available Seats

Row 1:  *#############################
Row 2:  #*############################
Row 3:  ##############################
Row 4:  ##############################
Row 5:  ##############################
Row 6:  ##############################
Row 7:  ##############################
Row 8:  ##############################
Row 9:  ##############################
Row 10: ##############################
Row 11: ##############################
Row 12: ##############################
Row 13: ##############################
Row 14: ##############################
Row 15: ##############################

Please enter desired row number (1-15): 111
Please enter a valid row number. 6

Please enter desired seat number (1-30): 6

Do you wish to purchase another ticket? y/n
y

        Available Seats

Row 1:  *#############################
Row 2:  #*############################
Row 3:  ##############################
Row 4:  ##############################
Row 5:  ##############################
Row 6:  #####*########################
Row 7:  ##############################
Row 8:  ##############################
Row 9:  ##############################
Row 10: ##############################
Row 11: ##############################
Row 12: ##############################
Row 13: ##############################
Row 14: ##############################
Row 15: ##############################

Please enter desired row number (1-15): 7

Please enter desired seat number (1-30): 20

Do you wish to purchase another ticket? y/n
n
Purchase confirmed.

You have purchased a total of 2 tickets for a total of $2

        C++ Theatre

1.      View Available Seats
2.      View Seating Prices
3.      Update Seating Prices
4.      Purchase a Ticket
5.      View Ticket Sales
6.      Quit
Enter your choice(1-6):

5

Ticket Revenue: $48

        C++ Theatre

1.      View Available Seats
2.      View Seating Prices
3.      Update Seating Prices
4.      Purchase a Ticket
5.      View Ticket Sales
6.      Quit
Enter your choice(1-6):

6
Good-bye!
*/


#include <iostream>
#include <fstream>

using namespace std;

//constants for amount of rows and columns for seat arrays
const int ROWS = 15;
const int COLS = 30;

//funtion prototypes
void displayMenu();
void setDefaultPrices();
int getChoice();
void displaySeats(char[][COLS]);
void displayPrices(double[]);
void updatePrices(double[]);
void displaySales(double);
void purchaseTicket(char[][COLS], double[], double*);

int main()
{

	int choice = 0;		//choice for menu selection
	char seats[ROWS][COLS];		//character array for seat availability
	double prices[ROWS];	//array holding values for prices by row
	double sales = 0;	//amount of ticket sales stored in this value
	double *ptsales = &sales; //pointer holding the address for sales variable

	//sets the ticket prices to default at the beginning of the program
	setDefaultPrices();

	//do loop based on int choice not being equal to 6
	do
	{
		//displaying the menu
		displayMenu();

		//variable choice set by return value of getChoice which gets input from the user
		choice = getChoice();

		//operates the menu, the value of the user's choice will run corresponding funtion (or quit if choice equals 6)
		switch (choice)
		{
		case 1:
			displaySeats(seats);
			break;
		case 2:
			displayPrices(prices);
			break;
		case 3:
			updatePrices(prices);
			break;
		case 4:
			purchaseTicket(seats, prices, ptsales);
			break;
		case 5:
			displaySales(sales);
			break;
		case 6:
			cout << "Good-bye!\n";
			break;
		}

	} while (choice != 6);
	//loop keeps running until the user chooses 6 at the menu

	return 0;
}

void setDefaultPrices()
{
	//array for the 15 ticket prices and their default values
	const double def[ROWS] = { 23, 23, 24, 24, 24, 25, 25, 25, 25, 25, 24, 24, 24, 23, 23 };

	//creating or opening text file called prices.txt
	ofstream pricefile("prices.txt");

	//writing the 15 array values to the file via loop
	for (int i = 0; i < ROWS; i++)
	{
		pricefile << def[i] << endl;
	}

	//closing the text file
	pricefile.close();

}

void displayMenu()
{

	//displaying the menu to the user
	cout << "\n\tC++ Theatre\n\n"

		<< "1.\tView Available Seats\n"
		<< "2.\tView Seating Prices\n"
		<< "3.\tUpdate Seating Prices\n"
		<< "4.\tPurchase a Ticket\n"
		<< "5.\tView Ticket Sales\n"
		<< "6.\tQuit\n"
		<< "Enter your choice(1-6):\n\n";
}

int getChoice()
{
	//gets input from user and returns its value
	int selection;
	cin >> selection;
	return selection;
}

void displaySeats(char r[][COLS])
{
	cout << "\n\tAvailable Seats\n\n";

	//nested for loop for assigning and displaying values of charactr array for seating chart
	for (int i = 0; i < ROWS; i++)
	{
		//labelling every row:
		cout << "Row " << 1 + i << ":\t";

		//displaying each seat in the row:
		for (int j = 0; j < COLS; j++)
		{
			if (r[i][j] != '*')
			{
				r[i][j] = '#';
			}
			cout << r[i][j];
		}

		//end the line after the row
		cout << endl;
	}
}

void displayPrices(double p[])
{
	//open the text file containing the prices
	ifstream pricefile("prices.txt");

	//displaying the heading for the chart
	cout << "\t\nTicket Prices By Row\n\n"

		<< "\tRow\tPrice\n"
		<< "\t---\t-----\n";

	//loop to process values from price file
	for (int i = 0; i < ROWS; i++)
	{
		//values from price file get assigned to the array
		pricefile >> p[i];

		//displaying row number and the contents of the array which now contain the prices from the file
		cout << "\t" << 1 + i << "\t" << p[i] << endl;
	}

	//close the text file
	pricefile.close();
}

void updatePrices(double p[])
{
	//open the text file containing the prices
	ofstream pricefile("prices.txt");

	//loop that repeatedly gets input from the user to write the value for the prices to the text file
	for (int i = 0; i < 15; i++)
	{
		cout << "Please enter the price for row " << 1 + i << ": ";
		cin >> p[i];
		pricefile << p[i] << endl;
	}

	//display confirmation
	cout << "the ticket prices have now been updated." << endl;

	//close the file
	pricefile.close();
}

void purchaseTicket(char t[][COLS], double p[], double *sales)
{
	//open the price text file
	ifstream pricefile("prices.txt");

	
	int row = 0;	//row value, to be input by the user
	int col = 0;	//seat choice value, to be input by user
	int num = 0;	//value of number of tickets purchased
	double total = 0;	//total cost of revenue
	char choice = 0;	//character for users choice for purchasing another ticket

	bool invalid = false;	//bool for invalid user input

	//get the prices from the price text file, assign to array
	for (int i = 0; i < 15; i++)
	{
		pricefile >> p[i];
	}

	//loop to get user input, runs again if user chooses to purchase additional ticket or if the seat they want is taken.
	do
	{
		displaySeats(t);

		cout << "\nPlease enter desired row number (1-15): ";

		//loop that gets row number from user. runs again if user input is invalid
		do
		{
			invalid = false;	//resetting the bool to false in case it is set to true in previous iterations of loop
			cin >> row;
			if (row < 1 || row > 15)
				cout << "Please enter a valid row number. ";

		} while (row < 1 || row > 15);

		cout << "\nPlease enter desired seat number (1-30): ";

		//loop that gets seat number from user. runs again if user input is invalid
		do
		{
			cin >> col;
			if (col < 1 || col > 30)
				cout << "\nPlease enter a valid seat number. ";

		} while (col < 1 || col > 30);

		//checking if the seat is taken, and setting bool to true which will repeat the loop, making the user choose another seat
		if (t[row - 1][col - 1] == '*')
		{
			cout << "\nThe seat you have requested is taken. Please select another seat.\n";
			invalid = true;
		}

		//if seat is not taken:
		else
		{
			//assigns a * to the array value corresponding to the user's choice
			t[row - 1][col - 1] = '*';

			//add the price of the seat to the total variable
			total += p[row - 1];

			//increment the number of seats purchased by 1.
			num++;

			//asks user if they wish to purchase another ticket
			cout << "\nDo you wish to purchase another ticket? y/n \n";
			cin >> choice;
		}
	} while ((choice == 'y' || choice == 'Y') || invalid == true);

	//after ticket purchasing, displays confirmation as well as total number of tickets purchased and the total cost.
	cout << "Purchase confirmed.\n\n";
	cout << "You have purchased a total of " << num << " tickets for a total of $" << total << endl;

	//the value of total gets added to the value stored in the address represented by the pointer for sales
	*sales += total;

	//closing the text file containing the prices
	pricefile.close();
}

void displaySales(double s)
{
	//displays the contents of s, in this case the value of the ticket revenue.
	cout << "\nTicket Revenue: $" << s << endl;
}