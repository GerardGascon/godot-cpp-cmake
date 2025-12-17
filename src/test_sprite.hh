//
// Created by ggasc on 17/12/2025.
//

#ifndef GODOT_CPP_TEMPLATE_TEST_SPRITE_HH
#define GODOT_CPP_TEMPLATE_TEST_SPRITE_HH

#include "godot_cpp/classes/sprite2d.hpp"
#include "godot_cpp/core/gdvirtual.gen.inc"

class TestSprite : public godot::Sprite2D {
	GDCLASS(TestSprite, Sprite2D)

protected:
	static void _bind_methods();

public:
	TestSprite() = default;
	~TestSprite() override = default;

	void _process(double p_delta) override;
private:
	double time = 0.0;
};

#endif //GODOT_CPP_TEMPLATE_TEST_SPRITE_HH
