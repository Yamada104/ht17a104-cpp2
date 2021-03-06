#include <iostream>
#include <string>
#define GP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
std::iostream;
std::string;

//素数判定
bool IsPrime(int num)
{
	if (num < 2) return false;
	else if (num == 2) return true;
	else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

	double sqrtNum = sqrt(num);
	for (int i = 3; i <= sqrtNum; i += 2)
	{
		if (num % i == 0)
		{
			// 素数ではない
			return false;
		}
	}
	// 素数である
	return true;
}

void tagai(unsigned int a, unsigned int d){
	if (IsPrime(a) == false) {
		std::cout << "互いに素ではない";
	}
	else if (IsPrime(d) == false) {
		std::cout << "互いに素ではない";
	}else {
		std::cout << "互いに素";
	}
}

/** 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*/
int nth_prime(unsigned int a, unsigned int d, unsigned int n) {

		int sum = a;
		int c = 0;

		for (; c < n && sum < GP2_PRIME_UPPER_LIMIT;) {
			if (IsPrime(sum) == true) {
				c += 1;
				if (c == n) {
					return sum;
				}
			}
			sum += d;
		}
		return sum;
}

int main() {
	std::cout << nth_prime(367, 186, 151) <<"  : "; tagai(367, 186); std::cout << std::endl;
	std::cout << nth_prime(179, 10, 203) << "  : "; tagai(179, 10); std::cout << std::endl;
	std::cout << nth_prime(271, 37, 39) << "  : "; tagai(271, 37); std::cout << std::endl;
	std::cout << nth_prime(103, 230, 1) << "  : "; tagai(103, 230); std::cout << std::endl;
	std::cout << nth_prime(27, 104, 185) << "  : "; tagai(27, 104); std::cout << std::endl;
	std::cout << nth_prime(253, 50, 85) << "  : "; tagai(253, 50); std::cout << std::endl;
	std::cout << nth_prime(1, 1, 1) << "  : "; tagai(1, 1); std::cout << std::endl;
	std::cout << nth_prime(9075, 337, 210) << "  : "; tagai(9075, 337); std::cout << std::endl;
	std::cout << nth_prime(307, 24, 79) << "  : "; tagai(307, 24); std::cout << std::endl;
	std::cout << nth_prime(331, 221, 177) << "  : "; tagai(331, 221); std::cout << std::endl;
	std::cout << nth_prime(259, 170, 40) << "  : "; tagai(259, 170); std::cout << std::endl;
	std::cout << nth_prime(269, 58, 102) << "  : "; tagai(269, 58); std::cout << std::endl;
	
	return 0;
}