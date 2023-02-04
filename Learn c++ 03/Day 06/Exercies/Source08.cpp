//Write a program to calculate the factorial of a given number using pointers.
//Sample Output :
//Input a number : 5
//The Factorial of 5 is : 120

#include<iostream>
using namespace std;


void findFactorial(int num, int* factorial) {
    int i;

    *factorial = 1;

    for (i = 1; i <= num; i++)
        *factorial = *factorial * i;

    cout << *factorial;
}

int main() {
    int num = 5;
    int factorial = 0;
    findFactorial(num, &factorial);

}