#include "Grid.h"





void Grid::Draw()
{
	

	Color particle;


	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{

			array[row][column] == 1 ? particle={ 0,255,0,255 }:particle={ 25,25,25,255 };

			sqare (row*cellSize, column*cellSize,cellSize-2,cellSize-2, particle);
		}
	}

	


}





void Grid::sqare(int posX,int posY,int  widthX,int  widthY,Color color)
{

	for (int wid = 0; wid < widthX; wid++)
	{
		for (int heig = 0; heig < widthY; heig++)
		{

			DrawPixel(posX+wid, posY+heig, color);

		}

	}



}



int Grid::getArr(int row,int column)
{
	return array[(row + cells)%cells][(column + cells) % cells];
}

void Grid::setArr(int row, int column,int value)
{
	array[(row + cells) % cells][(column + cells) % cells]=value;
}

int Grid::cellsAmmount(int row, int column)
{
	int cellAmount=0;

	getArr(row-1, column-1) > 0 ? cellAmount++ : cellAmount;
	getArr(row-1, column  ) > 0 ? cellAmount++ : cellAmount;
	getArr(row-1, column+1) > 0 ? cellAmount++ : cellAmount;
	getArr(row  , column-1) > 0 ? cellAmount++ : cellAmount;
	getArr(row  , column+1) > 0 ? cellAmount++ : cellAmount;
	getArr(row+1, column-1) > 0 ? cellAmount++ : cellAmount;
	getArr(row+1, column  ) > 0 ? cellAmount++ : cellAmount;
	getArr(row+1, column+1) > 0 ? cellAmount++ : cellAmount;


	return cellAmount;
}
