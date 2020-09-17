#pragma once
#include "Graphics.h"
#include "RectF.h"
class Brick
{
public:
	void Draw(Graphics& gfx);
	Brick(Color in_c , RectF& in_rect);
private:
	Color c;
	RectF rect;
};


