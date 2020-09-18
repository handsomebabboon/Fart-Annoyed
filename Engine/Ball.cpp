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

	Vec2 bottomrightcorner = pos + Vec2(7.0f, 7.0f);
	Vec2 topleftcorner = pos - Vec2(7.0f, 7.0f);

	if (bottomrightcorner.x >= Graphics::ScreenWidth-1) {
		bottomrightcorner.x = Graphics::ScreenWidth-1;
		vel.x = -vel.x;
	}
	else if (topleftcorner.x <= 1) {
		topleftcorner.x = 1;
		vel.x = -vel.x;
	}

	if (bottomrightcorner.y >= Graphics::ScreenHeight-1) {
		bottomrightcorner.y = Graphics::ScreenHeight-1;
		vel.y = -vel.y;
	}
	
	else if (topleftcorner.y <= 1) {
		topleftcorner.y = 1;
		vel.y = -vel.y;
	}
	
}

