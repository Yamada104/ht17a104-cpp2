#include <iostream>
#define GP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。

using namespace std;

/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int current = a;
	do {
		count << current << "\n";
		current += d;
	} while (current < 1000);
	return 0;
}


int main() {
	std::cout << nth_prime(4, 8, 151) << std::endl;
	// 以下、同様に、入出力例通りになるか確認せよ。
	return 0;
}