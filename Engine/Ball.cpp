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

	if (bottomrightcorner.x > float(Graphics::ScreenWidth-1)) {
		bottomrightcorner.x = float(Graphics::ScreenWidth-1);
		vel.x = -vel.x;
	}
	if (topleftcorner.x < 0) {
		topleftcorner.x = 0;
		vel.x = -vel.x;
	}

	if (bottomrightcorner.y >= float(Graphics::ScreenHeight)) {
		bottomrightcorner.y = float(Graphics::ScreenHeight-1);
		vel.y = -vel.y;
	}
	
	if (topleftcorner.y < 0) {
		topleftcorner.y = 0;
		vel.y = -vel.y;
	}
}

