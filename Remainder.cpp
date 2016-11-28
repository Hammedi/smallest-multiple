#include <iostream>
using namespace std;

int main()
{
	int smallestNum = 1;
	bool pass = false;
	
	while(pass == false)
	{
		pass = true;
		for(int i = 1; i <= 20; i++)
		{
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
