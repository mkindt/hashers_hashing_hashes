#include "Hash.h"
#include <iostream>
#include <string>

using std::string;

int main(){
	Hash<int>* hush = new Hash<int>();
	hush->insertEntry("hello", 3);
	std::cout << (hush->getEntry("hello"))->getVal() << std::endl;
	Hash<string>* hish = new Hash<string>();
	hish->insertEntry("hello", "world");
	std::cout << (hish->getEntry("hello"))->getVal() << std::endl;
	Hash<double>* hesh = new Hash<double>();
	hesh->insertEntry("hello", 3.3);
	std::cout << (hesh->getEntry("hello"))->getVal() << std::endl;
	hush->deleteEntry("hello");
	hush->deleteEntry("hello");
	hesh->insertEntry("hello", 3.5);
	hesh->insertEntry("gfllo", 3.6);
	std::cout << (hesh->getEntry("hello"))->getVal() << std::endl;
	std::cout << (hesh->getEntry("gfllo"))->getVal() << std::endl;

	return 0;
}