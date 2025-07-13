#pragma once
#include <vector>
#include "raylib.h"

class Grid 
{
public:

	Grid(int cellSize, int cells) : rows(cells), columns(cells), cellSize(cellSize), cells(cells), array(rows, std::vector <int>(columns, 0)) {}


	void Draw();

	void sqare(int posX, int posY, int widthX, int widthY, Color color);

	int getArr(int row, int column);

	void setArr(int row, int column, int value);

	int cellsAmmount(int row,int column);

private:
	
	int cells;
	int rows;
	int columns;
	int cellSize;

	std::vector <std::vector <int>> array; 




};
