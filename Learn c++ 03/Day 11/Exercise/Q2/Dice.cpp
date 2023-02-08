#include "Dice.h"

Dice::Dice() {
	number = 1;
}

int Dice::GetFaceValue() {
	return number;
}

void Dice::Roll() {
	int min = 1;
	int max = 6;

	number = (rand() % (max - min + 1)) + 1;
}