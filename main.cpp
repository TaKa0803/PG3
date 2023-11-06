#include<stdio.h>
#include<ctype.h>

template<typename T>
void checkNum(T a, T b) {
	if (a <= b) {

		if (T == int) {
			printf("%d", a);
		}
		if (T == float) {
			printf("%f", a);
		}if (T == double) {
			printf("%lf", a);
		}if (T == char) {
			printf("数字以外は代入出来ません");
		}

		return;
	}
	else {
		if (T == int) {
			printf("%d", b);
		}
		if (T == float) {
			printf("%f", b);
		}if (T == double) {
			printf("%lf", b);
		}if (T == char) {
			printf("数字以外は代入出来ません");
		}

		return;
	}

}





int main(void) {
	/*
	printf("%d\n", checkNum<int>(10, 5));
	printf("%f\n", checkNum<float>(10.2f, 0.5f));
	printf("%lf\n", checkNum<double>(10.2, 0.1));
	printf("%c\n", checkNum<char>('a','b'));
	*/

	
	checkNum<int>(10, 5);
	checkNum<float>(10.2f, 0.5f);
	checkNum<double>(10.2, 0.1);
	checkNum('a', 'b');
	
	return 0;
}