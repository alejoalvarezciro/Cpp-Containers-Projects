#pragma once
#include "CharMatrix.h"
class Definition
{
private:

	CharMatrix word;
	CharMatrix result;

public:

	//Constructors
	Definition(const char* ID, const char* def);

	//Rule of 5
	~Definition() = default;
	Definition(const Definition& other) = default;
	Definition& operator=(const Definition& other) = default;
	Definition(Definition&& other) noexcept = default;
	Definition& operator=(Definition&& other) noexcept = default;

	//Getters
	const CharMatrix& getWord() const;
	const CharMatrix& getResult() const;

	//Setters
	void setResult(const char* def);

};

