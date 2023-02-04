#include<iostream>
#include<string>
using namespace std;

enum DayNumber {
    Sun,
    Mon,
    Tue,
    Wed,
    Thr,
    Fri,
    Sat
};

enum SortOrder { Ascending, Descending };

#pragma once
#if defined(PRACTICEDLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif // defined(PRACTICEDLL_EXPORTS)

void EXPIMP copy(int a[], int b[], int len);

void EXPIMP replace(int a[], int len, int old, int nue);

void EXPIMP sort(int a[], int len, SortOrder so = Ascending);

int EXPIMP set_union(int a[], int alen, int b[], int blen, int c[]);

bool EXPIMP equal(int a[], int lena, int b[], int blen);

int EXPIMP mismatch(int a[], int lena, int b[], int lenb);

int EXPIMP find_first_of(int a[], int lena, int b[], int lenb);

void EXPIMP merge(int a[], int lena, int b[], int lenb, int c[], int lenc);

int EXPIMP max(int a[], int len);

void EXPIMP rotate_left(int a[], int len);

int EXPIMP search(int a[], int len, int ele, int occ = 1);

int EXPIMP search(string str, string target, bool isCase = true, bool isWord = false);

DayNumber EXPIMP dow(int day, int month, int year, DayNumber dy = Sun);



