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

	//Getters
	const CharMatrix& getWord() const;
	const CharMatrix& getResult() const;

	//Setters
	void setResult(const char* def);

};

