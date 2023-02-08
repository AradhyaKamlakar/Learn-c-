#include "caesar_cipher.h"
#include <string>
using namespace std;

int CaesarCipher::m_key = 0;

CaesarCipher::CaesarCipher(int key) {
	SetKey(key);
}

 void CaesarCipher::SetKey(int k) {
	m_key = k;
}

int CaesarCipher::GetKey() {
	return m_key;
}

void CaesarCipher::Encrypt(char pt[], char ct[], int size) {
	int k = 0;
	for (int i = 0; i < size; i++) {
		int temp = static_cast<int>(pt[i]);
		if (pt[i] == '\0') {
			return;
		}
		else if ((temp < 65 || temp > 90) && (temp < 97 || temp > 122)) {
			ct[k++] = pt[i];
		}
		else {
			if (isupper(pt[i])) {
				ct[k++] = static_cast<char>((temp + m_key - 65) % 26 + 65);
			}
			else {
				ct[k++] = static_cast<char>((temp + m_key - 97) % 26 + 97);
			}
			
		}
	}
}

void CaesarCipher::Decrypt(char ct[], char pt[], int size) {
	int k = 0;
	for (int i = 0; i < size; i++) {
		int temp = static_cast<int>(ct[i]);
		if (ct[i] == '\0') {
			pt[i] = '\0';
			return;
		}
		else if ((temp < 65 || temp > 90) && (temp < 97 || temp > 122)) {
			pt[k++] = ct[i];
		}
		else {
			if (isupper(ct[i])) {
				pt[k++] = static_cast<char>((temp - m_key - 65) % 26 + 65);
			}
			else {
				pt[k++] = static_cast<char>((temp - m_key - 97) % 26 + 97);
			}

		}
	}
}
