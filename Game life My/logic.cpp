#include "logic.h"

void Logic::draw()
{
	grid.Draw();
}

int Logic::getArr(int row, int column)
{
	return grid.getArr(row,column);
}

void Logic::setArr(int row, int column, int value)
{
	grid.setArr(row, column, value);
}

int Logic::getAmmount(int row, int column)
{
	return grid.cellsAmmount(row,column);
}

void Logic::iteration()
{
 
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			if (grid.getArr(row, column) == 1)
			{
				if (grid.cellsAmmount(row, column) == 2 || grid.cellsAmmount(row, column) == 3)
				{
					nextIteration[row][column] = 1;
				}
				else
				{
					nextIteration[row][column] = 0;
				}
			}

			if (grid.getArr(row, column) == 0)
			{

				if (grid.cellsAmmount(row, column) == 3)  
				{
					nextIteration [row][column] = 1;
				}
				
				else
				{
				 nextIteration [row][column] = 0;
				}
			}

		}

	}

	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{

			grid.setArr(row, column, nextIteration[row][column]);
		}
	}
}

void Logic::glider(int posX, int posY, int rotationX)
{
	switch(rotationX)
	{
	case 0:
		grid.setArr(posX,     posY,     1);
		grid.setArr(posX + 1, posY,     1);
		grid.setArr(posX + 1, posY + 1, 1);
		grid.setArr(posX + 2, posY + 1, 1);
		grid.setArr(posX,     posY + 2, 1);
		break;

	case 1:
		
		grid.setArr(posX,     posY,     1);
		grid.setArr(posX - 1, posY,     1);
		grid.setArr(posX - 1, posY + 1, 1);
		grid.setArr(posX - 2, posY + 1, 1);
		grid.setArr(posX,     posY + 2, 1);
		break;

	case 2:
		grid.setArr(posX,     posY,     1);
		grid.setArr(posX + 1, posY,     1);
		grid.setArr(posX + 1, posY - 1, 1);
		grid.setArr(posX + 2, posY - 1, 1);
		grid.setArr(posX,     posY - 2, 1);
		break;
	case 3: 
		grid.setArr(posX,     posY,     1);
		grid.setArr(posX - 1, posY,     1);
		grid.setArr(posX - 1, posY - 1, 1);
		grid.setArr(posX - 2, posY - 1, 1);
		grid.setArr(posX,     posY - 2, 1);
		break;
	}

}


