#include <iostream>
#define GP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B

using namespace std;

/* --------------------------------------------------------------- */
/*
* nth_prime
*
* �^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ�
* �f����Ԃ��B
*
* TODO: ���� nth_prime �֐�����������B�K�v�ł���Α��Ɋ֐���
* �t�@�C�����쐬����B
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
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	return 0;
}