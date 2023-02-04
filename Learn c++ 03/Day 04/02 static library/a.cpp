#include<cstdio>

int Add(int u, int v);

int main() {
	int result = 0;
	result = Add(3, 2);
	printf("result = %d\n", result);
}
/*
- Command Shell commands to build static library:
  cl /c file_name.cpp -> b.obj file
  lib b.obj -> makes b.lib file
- Command Shell commands to build  static library
  cl /c file_name.cpp -> a.obj file
  link filename.obj file_name.lib
  link a.obj b.lib /OUT:myexe.exe -> To change the name of a file
*/