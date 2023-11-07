#pragma once


class IShape {

public:

	virtual void size() = 0;

	virtual void draw() = 0;

protected:

	int wide_ = 1;

	float area_;
};