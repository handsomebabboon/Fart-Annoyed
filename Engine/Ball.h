#pragma once
#include "Vec2.h"
#include "Graphics.h"
class Ball
{
public:
	Ball(Vec2& in_pos, Vec2& in_vel);
	void Draw(Graphics& gfx,Vec2& cen);
	Vec2 GetPos();
private:
	Vec2 pos;
	Vec2 vel;
};

