#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "defs.h"

using namespace std;
template <class T>

class Array {

	public:

		//constructor
		Array();
				
		//destructor
		~Array();
		
		//other
		Array<T>& add(const T&);
		Array<T>& remove(const T&);
		const T& get(int index) const;
		int getSize() const;
		bool isFull() const;
		void clear();

		//operator overloading
		Array<T>& operator+=(const T&); //add
		Array<T>& operator-=(const T&); //remove
		const T& operator[](int)const; //const get
		T& operator[](int);       //non const get
		// bool operator==(T&);
	
	
	private:
		int numElements;
		T* elements;
	
};

// template <class T>
// bool Array<T>::operator==(T& t)
// {
//     for (int i = 0; i < numElements; ++i){
//       if (elements[i] != t.elements[i]){
//         return false;
//       }
//   }
//   return true;

// }

template <class T>
Array<T>::Array(){
	elements = new T[MAX_ARR];
	numElements = 0;
}

template <class T>
Array<T>::~Array(){
	delete [] elements;
}

template <class T>
void Array<T>::clear(){
	for(int i = 0; i < numElements; ++i) {
		delete elements[i];
	}
	numElements = 0;
}

template <class T>
Array<T>& Array<T>::add(const T& t){
	if (numElements >= MAX_ARR)   return *this;
  	elements[numElements++] = t;
	return *this;
}

template <class T>
Array<T>& Array<T>::remove(const T& t){
	int index = 0;
	while (index < numElements){
		if (t == elements[index]){
			--numElements;
			break;
		}
		++index;
	}

	while (index < numElements){
		elements[index] = elements[index + 1];
		++index;
	}
	return *this;
}

template <class T>
int Array<T>::getSize() const{
	return numElements;
}

template <class T>
bool Array<T>::isFull() const {
	return numElements >= MAX_ARR;
}

template <class T>
const T& Array<T>::get(int index) const{
	if (index < 0 || index >= numElements) {
		cerr<<"Array index out of bounds"<<endl;
		exit(1);
	}
	return elements[index];
}

template <class T>
Array<T>& Array<T>::operator+=(const T& t){ //add
	if (numElements >= MAX_ARR){
		return *this;
	}
  	elements[numElements++] = t;
	return *this;
}

template <class T>
Array<T>& Array<T>::operator-=(const T& t){ //remove
		int index = 0;
	while (index < numElements){
		if (t == elements[index]){
			--numElements;
			break;
		}
		++index;
	}

	while (index < numElements){
		elements[index] = elements[index + 1];
		++index;
	}
	return *this;
}

template <class T>
const T& Array<T>::operator[](int index) const{ //const get
	if (index < 0 || index >= numElements) {
		cerr<<"Array index out of bounds\n";
		exit(1);
	}
	return elements[index];
}

template <class T>
T& Array<T>::operator[](int index){       //non const get
	if (index < 0 || index >= numElements) {
		cerr<<"Array index out of bounds\n"<<endl;
		exit(1);
	}
	return elements[index];
}

#endif