//
// Created by ggasc on 17/12/2025.
//

#include "test_sprite.hh"

using namespace godot;

void TestSprite::_bind_methods() {
}

void TestSprite::_process(double p_delta) {
	time += p_delta;

	const auto pos = Vector2(cos(time) * 100.0, sin(time) * 100.0);
	set_position(pos);
}
