#ifndef __HASH_H__
#define __HASH_H__

#include <list>
#include <string>
#include "Entry.h"
using std::string;

template <typename V>
class Hash {
private:
	typedef Entry<V> eee;
	list<eee>theHash;
	int primeSize;
public:
	Hash<V>(int size);
	Entry<V>* getEntry(string k);
	bool findEntry(string k);
	void deleteEntry(string k);
	void insertEntry(string k, V v);
};

#endif
