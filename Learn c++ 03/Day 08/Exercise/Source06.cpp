//Write a program that dynamically allocates 
//enough memory space to store a string such as “Hello”.
//It then increases the storage sufficiently high enough to append the word such as
//“World” to the existing “Hello”.

#include<iostream>
#include<string>
using namespace std;

int main() {
    int count = 0;
    cout << "Enter the size of your string";
    cin >> count;

    char* ptr = new char[6];
    for (int i = 0; i < count; i++) {
        cin >> ptr[i];
    }
    

}