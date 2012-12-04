#ifndef __HASH_H__
#define __HASH_H__

#include <list>
#include <string>
#include "Entry.h"

using std::string;
using std::list;

template <typename V>
class Hash {
private:
	list< Entry<V>* > theHash[997];
	int primeSize; //modify based on anticipated length of key string?
	int hasher(string k);
public:
	Hash<V>();
	Entry<V>* getEntry(string k);
	bool findEntry(string k);
	void deleteEntry(string k);
	void insertEntry(string k, V v);
};

#endif
