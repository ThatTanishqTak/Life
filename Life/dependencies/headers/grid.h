#ifndef GRID_H
#define GRID_H

#include "globals.h"
#include <vector>

class Grid : public GameObjects
{
public:
	Grid();
	~Grid();

	virtual void Update();
	virtual void Render();

private:
	float cellSize;
	float rows;
	float cols;

	std::vector<std::vector<__int64>> grid;
	std::vector<Rectangle> rectangles;

	std::vector<Rectangle> CreateGrid(int rows, int cols);
	void RenderGrid();
};

#endif