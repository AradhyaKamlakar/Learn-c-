#include "Clock.h"
#include <iostream>
using namespace std;

void assign(int time, int& s, int& l) {
	l = time % 10;
	time = time / 10;
	s = time;
}

Clock::Clock(int h, int m, int s) {
	m_sec = (60 * 60 * h) + (60 * m) + s;
}

 void Clock::Time(char ch[],const int size) {
	 int hours = 0;
	 int minutes = 0;
	 int seconds = 0;

	 hours = m_sec / 3600;
	 m_sec = m_sec % 3600;
	 minutes = m_sec / 60;
	 seconds = m_sec % 60;

	 int s = 0, l = 0;
	 
	 assign(hours, s, l);
	 ch[0] = static_cast<char>(s) + '0';
	 ch[1] = static_cast<char>(l) + '0';
	 ch[2] = ':';
	 assign(minutes, s, l);
	 ch[3] = static_cast<char>(s) + '0';
	 ch[4] = static_cast<char>(l) + '0';
	 ch[5] = ':';
	 assign(seconds, s, l);
	 ch[6] = static_cast<char>(s) + '0';
	 ch[7] = static_cast<char>(l) + '0';

	 
	 
 }

 void Clock::Tick() {
     m_sec = m_sec + 1;
 }
