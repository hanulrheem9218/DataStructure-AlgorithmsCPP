#pragma once
#include "runtime_exception.h"
class QueueEmpty : public RuntimeException {
public:
	QueueEmpty(const std::string& err) : RuntimeException(err) {};
};