// C++ program to print 180 degree rotation of simple
// pyramid pattern using while loop
#include <iostream>
using namespace std;

int main()
{

	int i = 0, j = 0, sp = 0;
	int rows = 5;
	// while loop check the condition until the given
	// condition is false if it is true then enteres in to
	// the loop

	while (i < rows) {

		// second while loop is used for printing spaces
		while (sp < (rows - i - 1)) {
			cout << " ";
			sp++;
		}

		// assigning sp value as 0 because we need to run sp
		// from starting

		sp = 0;
	
		// this loop will print the pattern
		while (j <= i) {
			cout << "* ";
			j++;
		}

		j = 0;
		i++;
		cout << "\n";
	}
	return 0;
}

