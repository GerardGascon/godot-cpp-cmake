//
// Created by ggasc on 17/12/2025.
//

#include "test_header.hh"

double get_double() {
	return 1234.5;
}

Arduino::Arduino(const int port, const int baud_rate) {
	serialConnect(port, baud_rate);
}
Arduino::~Arduino() {
	serialDisconnect();
}

void Arduino::serialConnect(int port, int baud_rate) {
}
void Arduino::serialDisconnect() {
}
void Arduino::writeText(const std::string& data) {
}
void Arduino::writeLine(const std::string& data) {
	writeText(data + '\n');
}
std::string Arduino::readLine() {
	return "";
}
void Arduino::setDigitalValue(const int pin, const bool value) {
}
bool Arduino::getDigitalValue(const int pin) {
	return false;
}
void Arduino::setAnalogValue(const int pin, const float value) {
	if (value < 0 || value > 1)
		return;
}
float Arduino::getAnalogValue(const int pin) {
	return 0.0;
}