#include <list>
#include <iostream>
#include <string>
#include "Hash.h"

template <typename V>
Hash<V>::Hash(int size){
	primeSize = size;
	// theHash = new list<eee>;
}
template <typename V>
Entry<V>* Hash<V>::getEntry(string k){
	return 0;
}

template <typename V>
bool Hash<V>::findEntry(string k){
	return true;
}

template <typename V>
void Hash<V>::deleteEntry(string k){
}

template <typename V>
void Hash<V>::insertEntry(string k, V v){
}

template class Hash<int>;
template class Hash<double>;
template class Hash<std::string>;
