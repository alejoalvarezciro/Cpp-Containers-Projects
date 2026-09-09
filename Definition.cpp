#include "Definition.h"

////////////////////
////Constructors////
////////////////////
Definition::Definition(const char* ID, const char* def):
word(ID), result(def){
}

///////////////
////Getters////
///////////////
const CharMatrix& Definition::getWord() const {
	return word;
}
const CharMatrix& Definition::getResult() const {
	return result;
}

///////////////
////Setters////
///////////////
void Definition::setResult(const char* def) {
	result = CharMatrix(def);
}
