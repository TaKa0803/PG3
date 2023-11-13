#pragma once

class Human {

public:

	Human();

	virtual ~Human();

	virtual void ActText();

protected:
	const char* name;
};


