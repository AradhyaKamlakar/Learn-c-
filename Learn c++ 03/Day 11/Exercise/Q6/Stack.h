#pragma once

class Stack {
public:
	Stack();

public:
	void Push(char c);
	char Top();
	void Pop();
	bool Empty();

public:
	char* m_ptr;
	int m_count;
};
