#pragma once
#include "Grid.h"
#include <vector>

class Logic
{
public:

	Logic(int cellSize,int cells) : rows(cells), columns(cells), cellSize(cellSize),cells (cells), grid(cellSize, cells), nextIteration(rows,std::vector<int>(columns,0)) {}


	void draw();

	int getArr(int row,int column);

	void setArr(int row, int column, int value);

	int getAmmount(int row,int column);

	void iteration();

	void glider(int posX, int posY, int rotationX);

private:


	int cells;
	int rows;
	int columns;
	int cellSize;

	Grid grid;
	std::vector <std::vector<int>> nextIteration;




};


