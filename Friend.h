#pragma once
#include"Human.h"

class Friend : public Human {

public:
	Friend();

	~Friend()override;

	void Action() override;

private:

	const char* name;

};