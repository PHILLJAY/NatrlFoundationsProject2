#include <iostream>;
#include <string>;
#include <cstring>;
using namespace  std;


int main() {
	//create char array
	char str[128];
	//create int i used in loops and x which indicates our current char as an int value
	int i = 0, x = 0;
	//take string (create a code to take string as input)
	string test1 = "This is a test string";

	//**CREATE A CODE TO PICK IF WE ARE ENCRYPTING OR DECRYPTING**




	//take encryption number (create code to take encryption number)
	int n = 2;

	for (i = 0; ((i < 128) && (str[i] !='\0')) ; i++)	//checks if the character at a given position is a null character
	{
		//sets x to the ASCII value of char
		x = str[i];
		if (x<91 && x>64)			//checks if it is upercase using ASCII values, if not it then checks for lowercase
		{
			if (x+n>90)				//checks if char would go out of bounds (upercase runs from 64-90)
			{
				str[i] = ((x + n) % 90 + 64);			//uses the remainder function to only leave a leftover above 90 and then adds 64 to get the minimum number
			}
			else
			{
				str[i] = x + n;
			}

		}
		else if ((int)str[i] < 123 && (int)str[i]>96)	//checks if it is lowercase using ASCII values, if not then the char will be unafected
		{
			if (x + n > 122)		//checks if char would go out of bounds (lowercase runs from 96-122)
			{
				str[i] = ((x + n) % 122 + 96);			//uses the remainder function to only leave a leftover above 122 and then adds 96 to get the minimum number
			}
			else
			{
				str[i] = x + n;
			}

		}

	}
	//add encryption number to each char

	//if an int goes over the max, subtract it from the int and add the min

	//convert back to char array

	//convert back to string
}