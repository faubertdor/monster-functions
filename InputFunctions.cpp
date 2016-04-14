#include <iostream>
#include <string>
#include <iomanip>
#include "InputFunctions.h"
using namespace std;

////////////////////////////// Print Menu ///////////////////////////////////// 
void printMenu()
{
	cout
		<< "\t 1) Average of a set of non negative numbers (sentinel)           \n"
		<< "\t 2) Enter a number in a given range                               \n"
		<< "\t 3) Enter a letter                                                \n"
		<< "\t 4) Enter an integer                                              \n"
		<< "\t 5) Enter a prime number                                          \n"
		<< "\t\t  (needs \"slave\" function is prime, call getIntBiggerThan)    \n"
		<< "\t 6) Classify an integer as deficiant, perfect or abundant         \n"
		<< "\t 7) Print the ASCII table                                         \n"
		<< "\t 8) End the program                                               \n\n";
}

////////////////////////////// Print Title /////////////////////////////////////      
void printTitle()
{
	cout
		<< "\t\t************************************************\n"
		<< "\t\t*  Monster function lab (while, for, switch)   *\n"
		<< "\t\t*      Includes review of switch as menu       *\n"
		<< "\t\t*  Function reusability and \"slave\" functions  *\n"
		<< "\t\t*              by Jean F. Dorancy              *\n"
		<< "\t\t************************************************\n\n\n";
}

////////////////////////////// Validate a number //////////////////////////////     
double getNumber()
{
	double x;

	while (!(cin >> x))
	{
		cout << "\t Please no inapropriate characters! \n"
			 << "\t Try again: ";
		cin.clear();			cin.ignore(80, '\n');
	}
	cin.ignore(80, '\n');
	return x;
}

////////////////////////////// Get a positive number and validate //////////////       
double getPosNum()
{
	double x = getNumber();
	while (x < 0)
	{
		cout << "Please enter a positive number: ";
		x = getNumber();
	}
	return x;
}

////////////////////////////// Get a multiple of n //////////////////////////////     
int getMultOfNum(int x)
{
	int mult = getInteger();
	while (mult % x != 0)
	{
		cout << "Please enter a multiple of " << x << ": ";
		mult = getInteger();
	}
	return mult;
}

////////////////////////////// Get a character	/////////////////////////////////    
char getLetter()
{
	char ch;

	cin >> ch;			cin.ignore(80, '\n');
	while (!(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'))
	{
		cout << ch << " is NOT a letter. Try again: ";
		cin >> ch;			cin.ignore(80, '\n');
	}
	return ch;
}

////////////////////////////// Get a number in a given range ////////////////////         
double getInRange(double start, double end)
{
	double number = getNumber();
	while (number < start || number > end)
	{
		cout << "\t " << number << " is NOT in the range [" << start << ", " << end << "] \n"
			 << "\t Try again: ";
		number = getNumber();
	}
	return number;
}

////////////////////////////// Get an integer in a given range ////////////////////     
int getIntegerInRange(int start, int end)
{
	int number = getInteger();
	while (number < start || number > end)
	{
		cout << "\t Your number must be " << (number < start ? "greater" : "less") 
			 << " or equal to " << (number < start ? start : end) <<".\n";
		cout << "\t Try again: ";
		number = getInteger();
	}
	return number;
}

////////////////////////////// Get a number greater than //////////////////////////           
double getNumberBiggerThan(double x)
{
	double next = getNumber();
	while (next <= x)
	{
		cout << "Enter a number bigger than " << x << "! Try again: ";
		next = getNumber();
	}
	return next;
}

////////////////////////////// Get an integer greater than //////////////////////////        
int getIntegerBiggerThan(int x)
{
	int next = getInteger();
	while (next <= x)
	{
		cout << "\t Enter an integer bigger than " << x << ".\n"
			 << "\t Try again: ";
		next = getInteger();
	}
	return next;
}

////////////////////////////// Get a perfect square	//////////////////////////////             
int getPerfectSqrt()
{
	double x = getPosNum();
	while (int(sqrt(x)) != sqrt(x))
	{
		cout << x << " is NOT a perfect square. Try again: ";
		x = getPosNum();
	}
	return int(x);
}

////////////////////////////// Get a an integer //////////////////////////////////          
int getInteger()
{
	double x = getNumber();
	while (x != int(x))
	{
		cout << "\t Your number is NOT an integer! \n"
			 << "\t Try again: ";
		x = getNumber();
	}
	return int(x);
}

////////////////////////////// True if the number is prime else false ///////////////        
bool isPrime(int x)
{
	for (int i = 2; i < x; i++)
		if (x % i == 0)	
			return false; 

	return true;
}

////////////////////////////// Get Prime //////////////////////////////////////////          
int getPrime()
{
	int x = getIntegerBiggerThan(1);
	while (!isPrime(x))
	{
		cout << x << " is not prime. Try again: ";
		x = getIntegerBiggerThan(1);
	}
	return x;
}

////////////////////////////// Classify positive integer //////////////////////////           
// -1 = perfect, 0 = abundant 1 = deficient 
int classifyPosInt(int x)
{
	int i, sum = 0;

	for (i = 1; i < x; i++)
		if (x % i == 0)
			sum += i;

	if (x == sum)
		return -1;      // Perfect
	if (x > sum)
		return 1;       // deficient
	return 0;           // abundant
}

////////////////////////////// Print the ASCII table //////////////////////////////         
void printAsciiTable(int perLine)
{
	for (int i = 0; i <= 255; i++)
	{
		cout << setw(3) << i << setw(7);
		switch (char(i))
		{
			case '\0': cout << "NULL";		break;
			case '\a': cout << "\\a";		break;
			case '\b': cout << "\\b";		break;
			case '\t': cout << "\\t";		break;
			case '\n': cout << "\\n";		break;
			case '\v': cout << "\\v";		break;
			case '\r': cout << "\\r";		break;
			case '\'': cout << "\'";		break;
			case '\"': cout << "\"";		break;
			case '\\': cout << "\\";		break;
			default:   cout << char(i);
		}
		cout << setw(7) << ((i + 1) % perLine != 0 ? "  |  " : "\n");
	}
	cout << "\n\n";
}

////////////////////////////// Get average of positive set ///////////////////////        
double getAvgPosSet()
{
	double sum = 0, number = 0;
	int count = 0;

	while (number >= 0)
	{
		count++;
		sum += number;
		cout << "Please enter the " << count << findSuffix(count) << " number: ";
		number = getNumber();
	}
	count--;

	if (count == 0)
		return -1;

	return sum / count;
}

////////////////////////////// Find what suffix to use ////////////////////////////  
string findSuffix(int count)
{
	switch (count % 100)
	{
		case 11:
		case 12:
		case 13: return "th";
	} 
	
	switch (count % 10)
	{
		case 1: return "st";
		case 2: return "nd";
		case 3: return "rd";
		default: return "th";
	}
}