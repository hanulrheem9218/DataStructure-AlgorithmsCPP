#include "scores.h"
#include "stdexcept"
Scores::Scores(int maxEnt)
{
	m_maxEntries = maxEnt;
	p_entries = new GameEntry[m_maxEntries];
	m_numEntries = 0;
}

Scores::~Scores()
{
	delete[] p_entries;
}

void Scores::add(const GameEntry& e)
{
	int newScore = e.getScore(); //add a game entry
	if (m_numEntries == m_maxEntries) { // score to add
		if (newScore <= p_entries[m_maxEntries - 1].getScore()) { //the array is full
			return; // not high enough - ignore
		} 
	} 
	else m_numEntries++; //if not full, one ore entry.

	int i = m_numEntries - 2;  // start with the next to last.
	while (i >= 0 && newScore > p_entries[i].getScore()) { 
		p_entries[i + 1] = p_entries[i]; // shift right if smaller
		i--;
	}
	p_entries[i + 1] = e; // put e in the empty spot.
}

GameEntry Scores::remove(int i) throw(std::out_of_range)
{
	if ((i < 0) || (i >= m_numEntries)) throw std::out_of_range("invalid index"); //invalid index
	GameEntry e = p_entries[i]; // save the removed object
	for (int j = i + 1; j < m_numEntries; j++) { 
		p_entries[j - 1] = p_entries[j]; // shift entries left
	}
	m_numEntries--; // one fewer entry.
	return e; // return the removed object.
}
