#pragma once
#include <string.h>
#include <iostream>
class GameEntry {
public:
	GameEntry(const std::string& n = "", int s = 0);
	std::string getName() const;
	int getScore() const;
private:
	std::string m_name;
	int m_score;
};