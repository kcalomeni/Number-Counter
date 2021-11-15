// LetterCounter.cpp : This program counts the number of letters in a file.
//

#include <iostream>

#include <iomanip>

#include <string>

#include <algorithm>

#include <fstream>
// This allows us to open a file.

using namespace std;

int main(int argc, char* argv[])
{

	
		
	/*
	for (int i = 0; i < argc; i++)
	{
		1 argc //agrv[0] = C:\Users\kcalo\source\repos\VowelCounter\Debug>"VowelCounter.exe"
		2 argc //agrv[1] = Constitution_of_the_United_States.html

		printf("argv[%d] = %s\n", i, argv[i]);
		
		std::cout << i << ":" << argv[i] << std::endl;
	}
	*/
	// Check to see if we have at least two arguments.
	if (argc < 2)
	{
		cout << "Error, wrong input...." << endl;
		return 1;
	}

	//List the variables for the program.

	string title = "Welcome to my Number Counter Program!";
	char char1 = '*';
	char char2 = '.';
	double width = 50;
	char fileContent;
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	int v = 0;
	int w = 0;
	int y = 0;

	//We will open the file and see if the file is an argument.

	ifstream myFile;
	myFile.open(argv[1]);
	
	if (!myFile)
		// Check to find the file.

	{
		cout << "Error, the file name is incorrect." << endl;
		return 0;
	}
	
	//Set-Up

	cout << setfill(char1) << left << setw(width) << endl;
	cout << char1 << '\n' << '\n';
	cout << title << endl;
	cout << setfill(char1) << left << setw(width) << endl;
	cout << char1 << '\n' << '\n';
	cout << "Processing...." << argv[1] << "...\n" << endl;

	//While myFile is not (!) at the eof (end of file), continue to loop.
	
	while (!myFile.eof())
	{
		myFile.get(fileContent);
		if (fileContent == 'a' || fileContent == 'A')
		{
			a++;
		}
		else if (fileContent == 'e' || fileContent == 'E')
		{
			e++;
		}
		else if (fileContent == 'i' || fileContent == 'I')
		{
			i++;
		}
		else if (fileContent == 'o' || fileContent == 'O')
		{
			o++;
		}
		else if (fileContent == 'u' || fileContent == 'U')
		{
			u++;
		}
		else if (fileContent == 'v' || fileContent == 'V')
		{
			v++;
		}
		else if (fileContent == 'w' || fileContent == 'W')
		{
			w++;
		}
		else if (fileContent == 'y' || fileContent == 'Y')
		{
			y++;
		}
	
	}

	cout << "A Count: " << a << endl;
	cout << "E Count: " << e << endl;
	cout << "I Count: " << i << endl;
	cout << "O Count: " << o << endl;
	cout << "U Count: " << u << endl;
	cout << "V Count: " << v << endl;
	cout << "W Count: " << w << endl;
	cout << "Y Count: " << y << endl;

	int totalnumbercount = a + e + i + o + u + v + w +y;

	cout << "The total number count is: " << totalnumbercount << "\n" << endl;

	myFile.close();
	return 0;
}