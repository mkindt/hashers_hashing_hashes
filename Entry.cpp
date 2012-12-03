#include <string>
#include "Entry.h"
// using std::string;

template <typename V>
Entry<V>::Entry(std::string k, V v){
	key = k;
	val = v;
}

template <typename V>
std::string Entry<V>::getKey(){
	return key;
}

template <typename V>
V Entry<V>::getVal(){
	return val;
}

template <typename V>
void Entry<V>::setVal(V v){
	val = v;
}


template class Entry<int>;
template class Entry<double>;
template class Entry<std::string>;
