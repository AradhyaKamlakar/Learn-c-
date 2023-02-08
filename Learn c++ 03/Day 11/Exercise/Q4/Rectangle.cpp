#include "Rectangle.h"



Rectangle::Rectangle(int top, int left, int bottom, int right) {
	m_top = top;
	m_left = left;
	m_right = right;
	m_bottom = bottom;
}

Point Rectangle::CenterPoint() const {
	Point cp(((m_left + m_right) / 2), (m_top + m_bottom) / 2);

	return cp;
}

Rectangle Rectangle::Clone() const {
	Rectangle rect(m_top, m_left,m_bottom, m_right);
	return rect;
}

Point Rectangle::TopLeft() const {
	Point p(m_top, m_left);
	return p;
}



Point::Point(int x, int y) {
	m_x = x;
	m_y = y;
}

int Point::GetX() {
	return m_x;
}

int Point::GetY() {
	return m_y;
}
