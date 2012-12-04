#include <list>
#include <iostream>
#include <string>
#include "Hash.h"

using std::string;
using std::list;

template <typename V>
int Hash<V>::hasher(string k){
	int sum = 0; // ASCII values == 32 to 126, letters are 65 to 122
	for (int i = 0; i < (int)k.size(); ++i){
		sum += (int)k[i];
	}
	return sum%997;
}

template <typename V>
Hash<V>::Hash(){
	primeSize = 997;
}

template <typename V>
Entry<V>* Hash<V>::getEntry(string k){
	int bucket = hasher(k);
	if (theHash[bucket].empty())
		return 0;
	else
		for (typename list<Entry<V>*>::iterator i = theHash[bucket].begin(); i != theHash[bucket].end(); ++i){
			if ((*i)->getKey() == k)
				return *i;
		}
	return 0;
}

template <typename V>
bool Hash<V>::findEntry(string k){
	int bucket = hasher(k);
	if (theHash[bucket].empty())
		return 0;
	else
		for (typename list<Entry<V>* >::iterator i = theHash[bucket].begin(); i != theHash[bucket].end(); ++i){
			if ((*i)->getKey() == k)
				return 1;
		}
	return 0;
}

template <typename V>
void Hash<V>::deleteEntry(string k){
	int bucket = hasher(k);
	if (theHash[bucket].empty()){
		std::cout << "Can't delete, not found." << std::endl;
		return;
	}
	for (typename list<Entry<V>* >::iterator i = theHash[bucket].begin(); i != theHash[bucket].end(); ++i){
		if ((*i)->getKey() == k){
			theHash[bucket].erase(i);
			std::cout << "Erased " << k << std::endl;
			return;
		}
	}
}

template <typename V>
void Hash<V>::insertEntry(string k, V v){
	int bucket = hasher(k);
	for (typename list<Entry<V>* >::iterator i = theHash[bucket].begin(); i != theHash[bucket].end(); ++i){
		if ((*i)->getKey() == k){
			(*i)->setVal(v);
			std::cout << "Existing entry, replaced value." << std::endl;
			return;
		}
	}
	Entry<V>* temp = new Entry<V>(k, v);
	theHash[bucket].push_back(temp);
}

template class Hash<int>;
template class Hash<double>;
template class Hash<std::string>;
