/********************************************************************* 
** Program name: Lab 1
** Author: Elaine Alasagas
** Date: 1/13/2018
** Description: CS162_400_WINTER2018 - Calculates the determinant based
	off of matrix size 2x2 or 3x3.
*********************************************************************/

#include <iostream>
#include <cmath>
#include "determinant.hpp"

//Function to calculate determinant
int determinant(int **&array, int size)
	{
		int determinant = 0;		//Declare determinant 
		if (size == 2)
		{
		int determinant = (array[0][0] * array[1][1]) - (array[0][1] * array[1][0]);	//ad - bc
		determinant = std::abs(determinant);	//Result should be an absolute value
		std::cout << "For your 2x2 array, the determinant is " << determinant << std::endl;
		}
		else if (size == 3)	//Only 2 selections of size, 4 or 9
		{
		int determinant = 	(array[0][0] * (array[1][1] * array[2][2]) - (array[1][2] * array[2][1])) -	//a(ei - fh)
							(array[0][1] * (array[1][0] * array[2][2]) - (array[1][2] * array[2][0])) +	//b(di - fg)
							(array[0][2] * (array[1][0] * array[2][1]) - (array[1][1] * array[2][0]));	//c(dh - eg)
		determinant = std::abs(determinant);	//Result should be an absolute value	
		std::cout << "For your 3x3 array, the determinant is " << determinant << std::endl;			
		}
		else 
		{
			std::cout << "Invalid size." << std::endl;
			return -1;
		}
		return determinant;
	}