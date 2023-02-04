#include<cstdio>

#include"b.h";

int main() {
	int result = 0;
	result = Add(3, 2);
	printf("result = %d\n", result);
	//printf("PI = %lf\n", PI);
}
/*
- _declspec (dllimport) is known as decorator.
The symbol on which _declspec(dllimport) is written implies that the symbol is imported from some dll.
- When linker is invoked with /DLL switch, it results into 3 files viz. .dll, .exp and .lib.
- The .lib file is known as import library.
- Import library is different from static library. Typical, static library contains binary code of symbols.
  Import library contains names of the symbols exported from DLL.
- Actual definition of symbols is present in .dll.
- Command Shell commands to build dynamic link library library:
  cl /c b.cpp -> makes b.obj file
  link /DLL b.obj -> makes b.lib, b.exp and b.dll files
- Command Shell commands to build executable:
  cl /c a.cpp -> makes a.obj file
  link a.obj b.lib -> makes a.exe file OR
  link a.obj b.lib /OUT:myexe.exe -> makes myexe.exe

*/