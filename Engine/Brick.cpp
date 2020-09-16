#include "Brick.h"

void Brick::Draw(Graphics& gfx)
{
	gfx.DrawRect((int)rect.left, (int)rect.top, (int)rect.right, (int)rect.bottom, c);
}

Brick::Brick(Color in_c, RectF& in_rect)
	:
	c(in_c),
	rect(in_rect)
{

}
