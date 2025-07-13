#include <iostream>
#include "raylib.h"
#include <vector>
#include "Grid.h"
#include "logic.h"
#include "ctime"








int main()
{

	srand(time(NULL));

	int cells = 250;
	int cellSize = 4;


	int windowWidth = cells*cellSize;
	int windowHeight = cells*cellSize;

	int FPS = 60;

	Color Grey{ 10,10,10,10 };
	Logic logic(cellSize, cells);

	InitWindow(windowWidth,windowHeight,"R");
	SetTargetFPS(FPS);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);
	logic.glider(rand() % cells, rand() % cells, rand() % 4);

	std::cout << std::endl << logic.getAmmount(5, 6);
	
	while (WindowShouldClose() == false)
	{



		BeginDrawing();
		ClearBackground(Grey);

		
		

		logic.draw();
		logic.iteration();
		
		







		EndDrawing();


	}









	CloseWindow();


















}
