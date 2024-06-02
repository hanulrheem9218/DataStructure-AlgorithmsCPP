#pragma once

struct Vector3 {
	int x;
	int y;
	int z;
	Vector3(int x, int y, int z) : x(x), y(y), z(z) {};
	Vector3() {};
	~Vector3() {};
};

class class_pointer
{
public:
	class_pointer(int x, int y, int z) : m_x(x), m_y(y), m_z(z) {};
private:
	int m_x;
	int m_y;
	int m_z;
};

