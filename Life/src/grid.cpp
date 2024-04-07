#include "grid.h"

Grid::Grid() : cellSize(10.0f), rows(static_cast<float>(windowWidth) / cellSize), cols(static_cast<float>(windowHeight) / cellSize), 
			   grid(static_cast<int>(rows), std::vector<__int64>(static_cast<int>(cols), 0))
{
	rectangles = CreateGrid(static_cast<int>(rows), static_cast<int>(cols));

	gameObject.push_back(this);
}


Grid::~Grid()
{

}

void Grid::Update()
{

}

void Grid::Render() { RenderGrid(); }

std::vector<Rectangle> Grid::CreateGrid(int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Rectangle rect = { static_cast<float>(i * cellSize), static_cast<float>(j * cellSize), cellSize, cellSize };
			rectangles.push_back(rect);
		}
	}

	return rectangles;
}

void Grid::RenderGrid()
{
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[i].size(); j++)
		{
			float rectX = j * cellSize;
			float rectY = i * cellSize;

			DrawRectangleLines(static_cast<int>(rectX), static_cast<int>(rectY), static_cast<int>(cellSize), static_cast<int>(cellSize), WHITE);
		}
	}
}