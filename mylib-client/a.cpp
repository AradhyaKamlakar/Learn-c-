#include<cstdio>
#include "b.h"

int main() {
	int result = Add(1, 2);
	printf("result = %d\n", result);
	printf("PI = %lf\n", PI);
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