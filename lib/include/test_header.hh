//
// Created by ggasc on 17/12/2025.
//

#ifndef GODOT_CPP_TEMPLATE_TEST_HEADER_HH
#define GODOT_CPP_TEMPLATE_TEST_HEADER_HH
#include <string>

double get_double();

class Arduino {
public:
	Arduino(int port, int baud_rate);
	~Arduino();

private:
	void serialConnect(int port, int baud_rate);
	void serialDisconnect();

public:
	void writeText(const std::string& data);
	void writeLine(const std::string& data);

	std::string readLine();

	void setDigitalValue(int pin, bool value);
	bool getDigitalValue(int pin);

	// Set an analog value between 0 and 1
	void setAnalogValue(int pin, float value);
	float getAnalogValue(int pin);
};

#endif //GODOT_CPP_TEMPLATE_TEST_HEADER_HH
