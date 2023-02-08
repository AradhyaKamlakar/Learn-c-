#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

class Dice {
private:
	int number;

public:
	Dice();

public:
	void Roll();
	int GetFaceValue();
};