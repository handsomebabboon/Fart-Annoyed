#include "Ball.h"
#include "SpriteCodex.h"
Ball::Ball(Vec2& in_pos, Vec2& in_vel)

	:
	pos(in_pos),
	vel(in_vel)
{
}

void Ball::Draw(Graphics& gfx)
{
	SpriteCodex::DrawBall(pos,gfx);
}

Vec2 Ball::GetPos()
{
	return pos;
}

void Ball::Update(float dt)
{
	pos += vel * dt;
}

