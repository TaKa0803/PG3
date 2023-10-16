#include<stdio.h>
#include<ctype.h>

template<typename T>
void checkNum(T a, T b) {	
		if (a <= b) {
			printf("%d\n", a);
			return;
		}
		else {
			printf("%d\n", b);
		}
	
}

template<>
void checkNum<char>(char a, char b) {
	
	printf("数字以外は代入出来ません");
	return;
}

template<>
void checkNum<float>(float a, float b) {
	if (a <= b) {
		printf("%f\n", a);
		return;
	}
	else {
		printf("%f\n", b);
	}
}
template<>
void checkNum<double>(double a, double b) {
	if (a <= b) {
		printf("%lf\n", a);
		return;
	}
	else {
		printf("%lf\n", b);
	}
}


int main(void) {

	checkNum<int>(10, 5);
	checkNum<float>(10.2f, 0.5f);
	checkNum<double>(10.2, 0.1);
	checkNum('a', 'b');

	return 0;
}