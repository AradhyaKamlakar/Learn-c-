#include "practicedll.h"
#include<string>
#include<cctype>
using namespace std;



void swap(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void copy(int a[], int b[], int len) {
	for (int i = 0; i < len; i++) {
		a[i] = b[i];
	}
}

void replace(int a[], int len, int old, int nue) {
	for (int i = 0; i < len; i++) {
		if (a[i] == old) {
			a[i] = nue;
		}
	}
}

void sort(int a[], int len, SortOrder so) {
	 for(int i=0;i<len -1;i++){
		 for (int j = 0; j < len - i - 1; j++) {
			 if (so == Ascending ? a[j] > a[j + 1] : a[j] < a[j + 1]) {
				 swap(a, j, j + 1);
			 }
		 }
	 }
	
}

bool isPresent(int a[], int len, int ele) {
	for (int i = 0; i < len; i++) {
		if (a[i] == ele) {
			return true;
		}
	}
	return false;
}

int set_union(int a[], int alen, int b[], int blen, int c[]) {
	int k = 0;

	for (int i = 0; i < k; i++) {
		c[k++] = a[i];
	}

	for (int i = 0; i < blen; i++) {
		if (!isPresent(c, k, b[i])) {
			c[k++] = b[i];
		}
	}
	return k;
}

bool equal(int a[], int lena, int b[], int lenb) {
	if (lena != lenb) {
		return false;
	}
	else {
		for (int i = 0; i < lena; i++) {
			if (a[i] != b[i]) {
				return false;
				break;
			}
		}
	}
	return true;
}

int mismatch(int a[], int lena, int b[], int lenb) {

	if (lena != lenb) {
		int temp = lena > lenb ? lenb : lena;
		for (int i = 0; i < temp; i++) {
			if (a[i] != b[i]) {
				return i;
			}
		}

	}
	else {
		for (int i = 0; i < lena; i++) {
			if (a[i] != b[i]) {
				return i;
			}
		}
	}
	return -1;
}

int find_first_of(int a[], int lena, int b[], int lenb) {
	int index = 0;
	if (lenb < lena) {
		return -1;
	}
	else {
		for (int i = 0; i < lenb; i++) {
			if (b[i] == a[0]) {
				index = i;
			}
		}
		int j = 0, z = index;
		while (z < lenb && j < lena) {
			if (b[z] != a[j]) {
				return -1;
			}
			else
			{
				z++;
				j++;
			}
		}
		return index;
	}
	
}


void merge(int  a[], int lena, int b[], int lenb, int c[], int lenc) {
	int i = 0, j = 0, k = 0;
	while (i < lena && j < lenb)
	{
		if (a[i] <= b[j])
		{
			c[k] = a[i];
			i++;
		}
		else
		{
			c[k] = b[j];
			j++;
		}
		k++;
	}
	while (i < lena)
	{
		c[k] = a[i];
		i++;
		k++;
	}

	while (j < lenb)
	{
		c[k] = b[j];
		j++;
		k++;
	}
}


int max(int a[], int len) {
	int max = 0;
	for (int i = 0; i < len - 1; i++) {
		if (a[i] > a[i + 1]) {
			max = a[i];
			swap(a, i, i + 1);
		}
	}
	return max;
}

void rotate_left(int a[], int len) {
	int temp = a[0];
	for (int i = 1; i < len; i++) {
		a[i - 1] = a[i];
	}
	a[len - 1] = temp;
}


int search(int a[], int len, int ele, int occ) {
	if (!isPresent(a, len, ele)) {
		return -1;
	}
	else {
		int index = -1;
		while (occ != 0) {
			for (int i = index + 1; i < len; i++) {
				if (a[i] == ele) {
					index = i;
					break;
				}
			}
			occ = occ - 1;
		}
		return index;

	}
	
}


string lower(string str) {
	string ans = "";
	for (auto& x : str) {
		if (x >= 'A' and x <= 'Z') {
			ans.push_back(static_cast<char>(x + 32));
			continue;
		}
		ans.push_back(x);
	}

	return ans;
}


int search(string str, string target, bool isCase, bool isWord) {
	if (isWord == false) {

		if (isCase == false) {
			str = lower(str);
			target = lower(target);
		}
		for (int i = 0; i < str.size(); i++) {
			int target_after_len = 0;
			for (int j = 0, k = i; j < target.size() and k < str.size() and str[k] == target[j]; j++, k++, target_after_len++);
			if (target_after_len == target.size()) return i;
		}

		return -1;
	}


	if (isCase == false) {
		str = lower(str);
		target = lower(target);
	}


	string temp = "";
	int start_index = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '?' || str[i] == '!') {
			if (temp == target) return start_index;
			temp = "";
			continue;
		}
		if (temp == "") start_index = i;
		temp.push_back(str[i]);
	}

	if (temp == target) return start_index;

	return -1;
}

//DayNumber dow(int day, int month, int year, DayNumber dy) {
//	int v = 0;
//
//	int mon;
//	if (month > 2)
//		mon = month;
//	else {
//		mon = (12 + month); 
//	}
//	int y = year % 100; //last two digit
//	int c = year / 100; //first two digit
//	int w = (day + floor((13 * (mon + 1)) / 5) + y + floor(y / 4) + floor(c / 4) + (5 * c));
//	w = (w+6) % 7;
//	dy = (DayNumber)w;
// return dy;
//}

Complex::Complex(int i, int j) {
	m_R = i;
	m_I = j;
}

Complex Complex::Add(Complex a) {
	Complex w;
	w.m_R = this->m_R + a.m_R;
	w.m_I = this->m_I + a.m_I;

	return w;
}

Complex Complex::Sub(Complex a) {
	Complex w;
	w.m_R = this->m_R - a.m_R;
	w.m_I = this->m_I - a.m_I;

	return w;
}

Complex Complex::Mul(Complex a) {
	Complex w;
	w.m_R = (this->m_R * a.m_R) - (this->m_I * a.m_I);
	w.m_I = (this->m_I * a.m_R) + (this->m_R * a.m_I);

	return w;

}

Complex Complex::Div(Complex a) {
	Complex w;
	int c = 0;
	int b = 0;
	c = ((this->m_R * a.m_R) + (this->m_I * a.m_I)) / ((a.m_R * a.m_R) + (a.m_I * a.m_I));
	b = ((this->m_I * a.m_R) - (this->m_R * a.m_I)) / ((a.m_R * a.m_R) + (a.m_I * a.m_I));
	
	w.m_R = c;
	w.m_I = b;
	return w;
}
double result = 0.0;

int Complex::GetR() {
	return this->m_R;
}

int Complex::GetI() {
	return this->m_I;
}

MeterConvertor::MeterConvertor() {
	SetM(0);
}

MeterConvertor::MeterConvertor(size_t s) {
	SetM(s);
}

void MeterConvertor::SetM(size_t s) {
	m_meter = s;
}

int MeterConvertor::GetM() {
	return m_meter;
}

double MeterConvertor::ToFoot() {
	result = m_meter * 3.28084;
	return result;
}

double MeterConvertor::ToInch() {
	result = m_meter * 39.3701;
	return result;
}

double MeterConvertor::ToYard() {
	result = m_meter * 1.09361;
	return result;
}

size_t MeterConvertor::ToMeter() {
	return m_meter;
}
