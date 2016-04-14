// This lab combines functions with while, for loops and switch
// Monster function labs
// by Jean F. Dorancy
// Last modified: 04-06-2015

#include <iostream>
#include <string>
#include <iomanip>
#include "InputFunctions.h"
using namespace std;

void main()          
{
	int choice, numberInt, classifyInt;
	double number, start, end;
	char ch;

	while (true)
	{
		system("cls");
		printTitle();
		printMenu();
		cout << "Please enter a choice: ";
		choice = getIntegerInRange(1, 8);
		
		cout << "\n";
		switch (choice)  {
		case 1:                             
			number = getAvgPosSet();
			if (number == -1)
				cout << "There are no data to find an average. \n\n";
			else
				cout << "The average is " << number << "\n\n";
			break;
		case 2:                            
			cout << "What is the starting point? ";
			start = getNumber();
			cout << "What is the ending point? ";
			end = getNumberBiggerThan(start);
			cout << "Enter a number in the range [" << start << ", " << end << "]: ";
			number = getInRange(start, end);

			cout << "Your number is : " << number << "\n\n";
			break;
		case 3:                            
			cout << "Please enter a letter of the alphabet: ";
			ch = getLetter();

			cout << "Your letter is " << ch << "\n\n";
			break;
		case 4:                            
			cout << "Please enter an integer: ";
			numberInt = getInteger();

			cout << "Your number is " << numberInt << "\n\n";
			break;
		case 5:                            
			cout << "Please enter a prime number: ";
			numberInt = getPrime();

			cout << numberInt << " is Prime. \n\n";
			break; 
		case 6:                           
			cout << "Please enter a positive integer: ";
			numberInt = getIntegerBiggerThan(0);
			classifyInt = classifyPosInt(numberInt);

			cout << numberInt << " is ";
			if (classifyInt == -1)
				cout << "perfect.";
			else if (classifyInt == 0)
				cout << "abundant.";
			else
				cout << "deficient.";
			cout << "\n\n";
			break;
		case 7:                             
			cout << "How many characters per line? [1, 4]: ";
			numberInt = getIntegerInRange(1, 4);

			printAsciiTable(numberInt);
			break;
		case 8:                            
			cout << "Thank you for using our program. \n\n";

			system("pause");
			exit(0);
		}

		system("pause");
	}
}