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
};

#endif