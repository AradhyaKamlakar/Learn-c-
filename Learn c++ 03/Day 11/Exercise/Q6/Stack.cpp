#include "Stack.h"
const size_t size = 10000;
char str[size];


Stack::Stack() {
	m_ptr = nullptr;
	m_count = -1;
}

void Stack::Push(char charac) {
	m_ptr = &str[0];
	m_count = m_count + 1;
	m_ptr[m_count] = charac;
}

void Stack::Pop() {
	m_count--;

}


bool Stack::Empty() {
	if (m_count == -1) {
		return true;
	}
	return false;
}

char Stack::Top() {
	return m_ptr[m_count];
}





