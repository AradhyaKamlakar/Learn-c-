#include "CircularQueue.h"
const size_t size = 10;
CircularQueue::CircularQueue() {
	m_front = m_rear = -1;
	m_size = 0;
	m_ptr = new int[size];
}

void CircularQueue::Push(int num) {
	if (m_size == 0) {
		m_front = m_rear = 0;
		m_ptr[m_rear] = num;
		m_rear++;
		m_size++;
	}
	else if (m_rear == m_size && m_front != 0)
	{
		m_rear = 0;
		m_ptr[m_rear] = num;
		m_size++;
	}

	else
	{
		m_rear++;
		m_ptr[m_rear] = num;
		m_size++;
	}
	
}

int CircularQueue::Peek() {
	return m_ptr[m_front];
}

void CircularQueue::Pop() {
	m_ptr[m_front] = -1;
	if (m_front == m_rear) {
		m_front = -1;
		m_rear = -1;
	}
	else if(m_front == m_size -1)
	{
		m_front = 0;
	}
	else {
		m_front++;
	}
}

bool CircularQueue::Empty() {
	if (m_size == 0) {
		return true;
	}
	return false;
}

bool CircularQueue::Full() {
	if (m_size == size) {
		return true;
	}
	return false;
}
