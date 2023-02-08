#pragma once

class CaesarCipher{
private:
	 static int m_key;

public:
	CaesarCipher(int key = 0);

public:
	static void SetKey(int k) ;
    static int GetKey();
	static void Encrypt(char pt[], char ct[], int size);
	static void Decrypt(char ct[], char pt[], int size);
};
