// 必要なソースコードを include してね
#include <iostream>

using namespace std;

int main() {
  int n = 100;
  for (int i = 0; i < n; i++) {  // i を 0 から n-1 までループさせる
                                 /**
                                  * 100までの整数のうち、
                                  * 3の倍数のとき　 'Fizz', 5の倍数のとき 'Buzz',
                                  * 15の倍数のとき 'FizzBuzz' と標準出力される
                                  * プログラムを書いてみよう！
                                  *
                                  * hint: 条件分岐といえば...？
                                  */

    if (i % 15 == 0) {
      cout << "FizzBuzz" << endl;
    } else if (i % 3 == 0) {
      cout << "Fizz" << endl;
    } else if (i % 5 == 0) {
      cout << "Buzz" << endl;
    } else {
      cout << i << endl;
    }
  }
}