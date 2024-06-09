#pragma once
#include <iostream>
#include <string>
class RuntimeException {
public:
	RuntimeException(const std::string& err) {
		message = err;
	};
	
	std::string getMessage() {
		return message;
	}
private:
	std::string message;
};