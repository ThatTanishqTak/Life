#ifndef GRID_H
#define GRID_H

#include "globals.h"

class Grid : public GameObjects
{
public:
	Grid();
	~Grid();

	virtual void Update();
	virtual void Render();

private:
	float rows;
	float cols;
	float cellSize;

	std::vector<std::vector<int>> grid;
	std::vector<Rectangle> rectangles;

	std::vector<Rectangle> CreateGrid(int rows, int cols);
	void RenderGrid();
};

#endif