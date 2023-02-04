//Write a program that reverses a stringand prints it on the screen.
//Sample Input : Hello, World
//Sample Output : dlroW, olleH

#include <algorithm> 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "Hello, World";
    
    reverse(str.begin(), str.end());
    cout << "\n" << str;
    return 0;
}