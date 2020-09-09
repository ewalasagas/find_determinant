/********************************************************************* 
** Program name: Lab 1
** Author: Elaine Alasagas
** Date: 1/13/2018
** Description: CS162_400_WINTER2018 - main file for Lab 1. 
    Program asks the user to choose size of matrix (2x2 or 3x3) and 
    dynamically allocates the memory space for the matrix. Then it
	calculate the determinant and displays both the matrix and the 
	determinant.
*********************************************************************/
#include <iostream>
#include <cmath>
#include "readMatrix.hpp"
#include "determinant.hpp"
using namespace std;

void displayMatrix(int **&array, int size);

int main()
{
	char selection;	//User choice 2x2 or 3x3 matrix
	int **array = NULL;

	std::cout << "Which matrix would you like? (please select A or B)" << std::endl;
	std::cout << "A. 2x2\n";
	std::cout << "B. 3x3\n";
	std::cout << "Selection: ";
	std::cin >> selection;

	if (selection == 'A' || selection == 'a')
	{
		int size1 = 2;	//2x2 elements
		std::cout << "\nYou selected a 2x2 matrix.\n";
		readMatrix(array, size1);
		displayMatrix(array, size1);
		determinant(array, size1);
		for (int i = 0; i < size1; i++)
		{
			delete [ ] array[i];
		}
	}
	else if (selection == 'B' || selection == 'b')
	{
		int size2 = 3;	//3x3 elements
		std::cout << "\nYou selected a 3x3 matrix.\n";
		readMatrix(array, size2);
		displayMatrix(array, size2);
		determinant(array, size2);
		for (int i = 0; i < size2; i++)
		{
			delete [ ] array[i];
		}
	}
	else {
		std::cout << "Not a valid choice. Try again.\n";
	}
	delete [ ] array;
	return 0;
}

/******DISPLAY MATRIX FUNCTION*************/
void displayMatrix(int **&array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " | ";
		for (int j = 0; j < size; j++)
			{
				cout << array[i][j];
			}
		cout << " | \n";
	}	
}