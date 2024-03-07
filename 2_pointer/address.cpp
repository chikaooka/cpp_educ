#include <cstdio>
#include <iostream>

using namespace std;

double a = 1.1; // 8 bytes
int b = 1; // 4 bytes
char c;

double *pd = &a;

int main() {
  printf("%p\n", &a);
  printf("%p\n", &b);
  printf("%p\n", &c);
}