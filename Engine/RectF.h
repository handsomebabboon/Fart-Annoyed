#pragma once
#include "Vec2.h"
class RectF
{
public:
	RectF() = default;
	RectF(float in_top, float in_bottom, float in_left, float in_right)
	:
	left(in_left),
	right(in_right),
	top(in_top),
	bottom(in_bottom)
	{
	}
	RectF(Vec2& top_left, Vec2& bottom_right) {
		RectF(top_left.y , bottom_right.y , top_left.x , bottom_right.x);
	}

	RectF(Vec2& top_left , float width , float height) {
		RectF(top_left, top_left + Vec2(width, height));
	}
	float GetTop();
	float GetBottom();
	float GetRight();
	float GetLeft();
	void Draw();
private:
	float top;
	float bottom;
	float right;
	float left;
};

