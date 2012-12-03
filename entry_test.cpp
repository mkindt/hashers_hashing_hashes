#include "Entry.h"
#include <iostream>
#include <string>

using std::string;

int main(){
	string s("hello world!");
	int sum = 0;
	for (int i = 0; i < (int)s.size(); ++i){
		sum += (int)s[i];
		std::cout << (int)s[i] << std::endl;
	}
	std::cout << sum << std::endl;

	Entry<int>e("hello", 5);
	std::cout << e.getKey();
	std::cout << e.getVal();

	return 0;
}

