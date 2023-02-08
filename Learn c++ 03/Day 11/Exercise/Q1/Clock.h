#pragma once

class Clock {
private:
	int m_sec;

public:
	Clock(int h= 0, int m=0, int s=0);

public:
	void Time(char ch[],const int size);
	void Tick();
};