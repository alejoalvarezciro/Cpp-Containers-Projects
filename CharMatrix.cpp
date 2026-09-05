#include "CharMatrix.h"

///////////////////
////Constructor////
///////////////////
CharMatrix::CharMatrix(const size_t& elementsPerRow, const size_t& numberOfRows, const char& fillingSymbol):
	total_size{ elementsPerRow * numberOfRows }, single_vector_size{ elementsPerRow }{
	information = new char[total_size + 1];
	information[total_size] = '\0';
	for (size_t i = 0; i < total_size; i++)
	{
		information[i] = fillingSymbol;
	}
}

/////////////////
////Rule of 5////
/////////////////
CharMatrix::~CharMatrix() {
	delete[] information;
}

CharMatrix::CharMatrix(const CharMatrix& other) {
	total_size = other.total_size;
	single_vector_size = other.single_vector_size;
	information = new char[total_size + 1];
	information[total_size] = '\0';
	for (size_t i = 0; i < total_size; i++)
	{
		information[i] = other.information[i];
	}
}

CharMatrix& CharMatrix::operator=(const CharMatrix& other) {
	if (this == &other) { return *this; }

	delete[] information;

	total_size = other.total_size;
	single_vector_size = other.single_vector_size;
	information = new char[total_size + 1];
	information[total_size] = '\0';
	for (size_t i = 0; i < total_size; i++)
	{
		information[i] = other.information[i];
	}

	return *this;
}

CharMatrix::CharMatrix(CharMatrix&& other) noexcept {
	total_size = other.total_size;
	single_vector_size = other.single_vector_size;
	information = other.information;

	other.total_size = 0;
	other.single_vector_size = 0;
	other.information = nullptr;
}

CharMatrix& CharMatrix::operator=(CharMatrix&& other) noexcept {
	if (this == &other) { return *this; }

	delete[] information;

	total_size = other.total_size;
	single_vector_size = other.single_vector_size;
	information = other.information;

	other.total_size = 0;
	other.single_vector_size = 0;
	other.information = nullptr;

	return *this;
}

///////////////
////Getters////
///////////////
const int CharMatrix::numberOfRows() const {
	return ((int)(total_size + single_vector_size - 1)/ (int)single_vector_size);
}

const int CharMatrix::numberOfColumns() const {
	return (int)single_vector_size;
}

const int CharMatrix::numberOfElements() const {
	return (int)total_size;
}

const char CharMatrix::get(const int& row, const int& column) const {
	if (row < numberOfRows() && column < numberOfColumns())
		return information[column + (row * single_vector_size)];
}

///////////////
////Setters////
///////////////
void CharMatrix::set(const int& row, const int& column, const char& newValue) {
	if (row < numberOfRows() && column < numberOfColumns())
		information[column + (row * single_vector_size)] = newValue;
}
