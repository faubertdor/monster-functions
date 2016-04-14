#include <string>
using namespace std;

// Precondition:  NONE
// Postcondition: prints the menu
void printMenu();            

// Precondition:  NONE
// Postcondition: prints the title
void printTitle();            

// Precondition:  4 >= perLine >= 1
// Postcondition: prints the ASCCI table in perLine characters per line
void printAsciiTable(int perLine);            

// Precondition:  NONE
// Postcondition: returns a positive number
//                validates for non-numeric input
//                removes everything else from the input buffer
double getPosNum();              

// Precondition:  NONE
// Postcondition: returns a number 
//                validates for non numeric input
//                removes everything else from the input buffer
double getNumber();            

// Precondition:  NONE
// Postcondition: returns an integer multiple of x
//                validates for non-numeric input
//                removes everything else from the input buffer
int getMultOfNum(int x);            

// Precondition:   x > 1
// Postcondition:  returns true if x is prime, false otherwise
bool isPrime(int x);            

// Precondition:   NONE
// Postcondition:  returns a prime number 
//                 validates for non-numeric input
//                 removes everything else from the input buffer
int getPrime();            

// Precondition:  x >= 1
// Postcondition: returns -1 = perfect, 0 = abundant 1 = deficient 
int classifyPosInt(int x);           

// Precondition:  NONE
// Postcondition: returns a valid letter
//                removes everything else from the input buffer
char getLetter();           

// Precondition:  start <= end
// Postcondition: returns a number in the range [start, end]
//                validates for non-numeric input
//                removes everything else from the input buffer
double getInRange(double start, double end);           

// Precondition:  start <= end
// Postcondition: returns an integer in the range [start, end]
//                validates for non-numeric input
//                removes everything else from the input buffer
int getIntegerInRange(int start, int end);           

// Precondition:  NONE
// Postcondition: returns a number bigger than x
//                validates for non-numeric input
//                removes everything else from the input buffer
double getNumberBiggerThan(double x);           

// Precondition:  NONE
// Postcondition: returns an integer bigger than x
//                validates for non-numeric input
//                removes everything else from the input buffer
int getIntegerBiggerThan(int x);           

// Precondition:  NONE
// Postcondition: returns a perfect square 
//                validates for non-numeric input
//                removes everything else from the input buffer
int getPerfectSqrt();           

// Precondition:  NONE
// Postcondition: returns an integer 
//                validates for non-numeric input
//                removes everything else from the input buffer
int getInteger();           

// Precondition:  NONE
// Postcondition: returns the average for a set of positive number
//				  a number < 0 marks the end of a set
//				  returns -1 if there is no data
//                validates for non-numeric input
//                removes everything else from the input buffer
double getAvgPosSet();           

// Precondition:  count > = 1
// Postcondition: returns the correct ordinal suffix of count
string findSuffix(int count);           
