#include "example_class.h"

#include "test_header.hh"

using namespace godot;

void ExampleClass::_bind_methods() {
	ClassDB::bind_method(D_METHOD("print_type", "variant"), &ExampleClass::print_type);
}
ExampleClass::ExampleClass() {
	print_line("Created");
}

ExampleClass::~ExampleClass() {
	print_line("Destroyed");
}

void ExampleClass::print_type(const Variant &p_variant) const {
	print_line(vformat("Type: %d", p_variant.get_type()));
	print_line(vformat("Double: %f", get_double()));
}
