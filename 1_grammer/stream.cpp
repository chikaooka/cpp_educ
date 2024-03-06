#include <stdio.h>

#include <iostream>

using namespace std;  // 'std::'といちいち書くのを省略できる

// 文字列と数値を一緒に出力する
int main() {
  // 変数宣言の際には、型を明示する必要がある
  char str[] = "hiroaki"; // C++の場合は std::string 型を利用できる
  int n = 24;

  // printf() の場合、%s, %d などの型に応じた変換指定子を用いる必要がある
  printf("%s%d\n", str, n);

  // ストリームは、異なる型のデータを統合的に扱うことができる
  cout << str << n << endl;

  return 0;
}