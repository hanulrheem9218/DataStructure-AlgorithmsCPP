#pragma once
#define EnableGameEntry

#ifdef EnableGameEntry
	#include "game-entry.h"
#endif


class Scores
{
public:
	Scores(int maxEnt = 10);
	~Scores();
	void add(const GameEntry& e);
	GameEntry remove(int i) throw();
private:
	int m_maxEntries;
	int m_numEntries;
	GameEntry* p_entries;
};

