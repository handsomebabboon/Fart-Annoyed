#include "Brick.h"
void Brick::Draw(Graphics& gfx)
{
	gfx.DrawRect((int)rect.GetLeft(), (int)rect.GetTop(), (int)rect.GetRight(), (int)rect.GetBottom(), c);
}

Brick::Brick(Color in_c, RectF& in_rect)
	:
	c(in_c),
	rect(in_rect)
{

}
