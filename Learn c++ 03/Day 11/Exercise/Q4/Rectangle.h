#pragma once
#include <assert.h>
class Point {
public:
	int m_x;
	int m_y;

public:
	Point(int x =0, int y = 0);

public:
	int GetX();
	int GetY();
};

class Rectangle {
private:
	int m_top;
	int m_left;
	int m_bottom;
	int m_right;
	Point p;

public:
	Rectangle(int top ,int left,int bottom ,int right);

public:
	Point CenterPoint()const;
	Rectangle Clone() const;
	Point TopLeft()const;
	/*void MoveToX();
	void MoveToY();*/

};




