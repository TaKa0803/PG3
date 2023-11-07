#pragma once

class Human {

public:

	Human();

	virtual ~Human();

	virtual void Action();

protected:
	const char* name;
};


