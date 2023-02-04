#pragma once
#if defined(MYDLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif // B_EXPORTS

extern"C" {
	int EXPIMP Add(int u, int v);
    extern const EXPIMP double PI;
}