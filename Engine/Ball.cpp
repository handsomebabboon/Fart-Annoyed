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

	if (bottomrightcorner.x >= Graphics::ScreenWidth-2) {
		bottomrightcorner.x = Graphics::ScreenWidth-2;
		vel.x = -vel.x;
	}
	if (topleftcorner.x <= 2) {
		topleftcorner.x = 2;
		vel.x = -vel.x;
	}

	if (bottomrightcorner.y >= Graphics::ScreenHeight-2) {
		bottomrightcorner.y = Graphics::ScreenHeight-2;
		vel.y = -vel.y;
	}
	
	if (topleftcorner.y <= 2) {
		topleftcorner.y = 2;
		vel.y = -vel.y;
	}
	
}

