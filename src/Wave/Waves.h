#pragma once

class Waves {
public:
	Waves(int leftEdgeX, int rightEdgeX);

	int getLeftEdgeX() { return m_leftEdgeX; }
	int getRightEdgeX() { return m_rightEdgeX; }

private:
	int m_leftEdgeX;
	int m_rightEdgeX;
};
