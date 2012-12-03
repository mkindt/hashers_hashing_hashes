#ifndef __ENTRY_H__
#define __ENTRY_H__
#include<string> //this line solved everything....
// using std::string;

template <typename V>
class Entry {
private:
	std::string key;
	V val;
public:
	Entry(std::string k, V v);
	std::string getKey();
	V getVal();
	void setVal(V v);
};

#endif
