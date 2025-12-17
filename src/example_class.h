#pragma once

#include "godot_cpp/classes/ref_counted.hpp"
#include "godot_cpp/classes/wrapped.hpp"
#include "godot_cpp/variant/variant.hpp"
#include "test_header.hh"

#include <memory>

class ExampleClass : public godot::RefCounted {
	GDCLASS(ExampleClass, RefCounted)

protected:
	static void _bind_methods();

public:
	ExampleClass();
	ExampleClass(int port, int baud_rate);
	~ExampleClass() override;

	void connect(int port, int baud_rate);

	void print_type(const godot::Variant &p_variant) const;

private:
	Arduino* arduino = nullptr;
};
