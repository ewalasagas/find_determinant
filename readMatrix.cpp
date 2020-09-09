/********************************************************************* 
** Program name: Lab 1
** Author: Elaine Alasagas
** Date: 1/13/2018
** Description: CS162_400_WINTER2018 - readMatrix function asks user
	to enter in a set of 4 or 9 integers (based on matrix size)
*********************************************************************/

#include <iostream>
#include <cmath>
#include "readMatrix.hpp"

//Function asks for user input of integers based on matrix size
void readMatrix(int **&array, int size)
{
	array = new int*[size];		//Set array row (size is the same)
	
	for (int count = 0; count < size; ++count)	//set array col (size is the same)
	{
		array[count] = new int[size];
	}

	//Define row and col 
	int row = size;
	int col = size;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << "Enter integer: " << i << " x " << j << ": ";
			std::cin >> array[i][j];
		}	
	}
}	
