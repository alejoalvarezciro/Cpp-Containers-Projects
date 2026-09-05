#pragma once
class CharMatrix
{
private:

	char* information;
	size_t total_size;
	size_t single_vector_size;

public:

	//Constructor
	CharMatrix(const size_t& elementsPerRow, const size_t& numberOfRows, const char& fillingSymbol);

	//Rule of 5
	~CharMatrix();
	CharMatrix(const CharMatrix& other);
	CharMatrix& operator=(const CharMatrix& other);
	CharMatrix(CharMatrix&& other) noexcept;
	CharMatrix& operator=(CharMatrix&& other) noexcept;

	//Getters
	const int numberOfRows() const;
	const int numberOfColumns() const;
	const int numberOfElements() const;
	const char get(const int& row, const int& column) const;

	//Setters
	void set(const int& row, const int& column, const char& newValue);
};

