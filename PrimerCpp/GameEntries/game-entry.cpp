#include "game-entry.h"
GameEntry::GameEntry(const std::string& n, int s) : m_name(n), m_score(s) {};
std::string GameEntry::getName() const { return m_name; };
int GameEntry::getScore() const { return m_score; };
