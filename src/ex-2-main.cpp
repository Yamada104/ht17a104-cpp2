#include <iostream>
#include <string>

using namespace std;

class mcxi {
private:
	int value;
	string mcxi_1;
	string mcxi_2;

public:
	void mcxi_void(string mcxi_s);
};



void mcxi::mcxi_void(string mcxi_s) {
	int a = 0;
	for (auto pos = mcxi_s.begin(); pos != mcxi_s.end(); ++pos) {	//ˆê•¶Žš‚¸‚ÂŒ©‚Ä‚¢‚­
		if (*pos >= '2'&& *pos <= '9') {	//2`9‚Ì”Žš‚Å‚ ‚é‚©
			a = *pos;
		}
		else if(*pos == 'm' || *pos == 'c' || *pos == 'x' || *pos == 'i'){
			if (*pos == 'm') {
				value = a * 1000;
			}else if(*pos =='c'){
				value = a * 100;
			}
			else if (*pos == 'x') {
				value = a * 10;
			}
			else if (*pos == 'i') {
				value = a * 1;
			}
		}

	}
	int num = atoi(mcxi_1.c_str());
	
	value = num;
}



int main() {


	string a = "abcsd";
	cout<< a.find("s") << endl;

	cin.get();
	cin.get();
	return 0;
}