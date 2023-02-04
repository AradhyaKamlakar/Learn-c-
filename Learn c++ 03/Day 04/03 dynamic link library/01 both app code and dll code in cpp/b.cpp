#include"b.h";

int Add(int u, int v) {
	return u + v;
}

/*
_declspec (dllexport) is known as decorator.
- The symbol on whic (dllexport) is written, such symbol is exported from the dll.
- For symbol to be accessible from other modules, it has to be exported from DLL.
- Symbols which are NOT written with _declspec(dllexport) are called as 'private symbols'.
- Private symbols are not directly accesible to other modules.
- Usually private symbols are written to help exported symbols.
*/