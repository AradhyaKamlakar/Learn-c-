//Write a program to check if a given string is a Palindrome or not.
//Sample Input : Race car
//Sample Output : True

#include<iostream>
#include<string>
using namespace std;

string isPalindrome(string S)
{
    
    for (int i = 0; i < S.length() / 2; i++) {

        if (S[i] != S[S.length() - i - 1]) {
            
            return "No";
        }
    }

    return "Yes";
}

int main() {

    string S = "ABCDCBA";
    cout << isPalindrome(S);

    return 0;
};