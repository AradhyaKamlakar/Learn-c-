#pragma once

class CircularQueue {
	int m_front;
	int m_rear;
	int m_size;
	int* m_ptr;

public:
	CircularQueue();

public:
	void Push(int num);
	int Peek();
	void Pop();
	bool Empty();
	bool Full();
};