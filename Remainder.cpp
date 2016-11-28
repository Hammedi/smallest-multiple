// Author: Abraham Medina
// Last Modified: 11/27/2016

#include <iostream>
using namespace std;

int main()
{
	// Initializing variables
	int smallestNum = 1;
	bool pass = false;
	
	while(pass == false) // Loops while smallestNum is not divisible by 1-20
	{
		pass = true; // Sets pass to true before smallestNum is tested
		for(int i = 1; i <= 20; i++) // Cycles denominator from 1-20
		{
			// smallestNum set to false if NOT evenly divisible by 1-20
			if(smallestNum % i != 0) 
			{
				pass = false;
				smallestNum++;
			}
		}
	}
	
	cout << "Smallest number divisible by 1-20: " << smallestNum << endl;
	
	return 0;
}
