#pragma once


template <typename T>

class Min {

public:

	Min(T gnum1, T gnum2) : num1(gnum1), num2(gnum2) {}

	T GetMinNum() {

		if (num1 <= num2) {
			return num1;
		}
		else {
			return num2;
		}


	}

private:

	T num1;

	T num2;
};

