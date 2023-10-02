#include<stdio.h>
#include<ctype.h>

template<typename T>
T checkNum(T a, T b) {	
		if (a <= b) {
			return a;
		}
		else {
			return b;
		}
	
}

template<>
char checkNum<char>(char a, char b) {
	printf("数字以外は代入出来ません");
	return'\n';
}



int main(void) {

	printf("%d\n", checkNum<int>(10, 5));
	printf("%4.1f\n", checkNum<float>(10.2f, 0.5f));
	printf("%lf\n", checkNum<double>(10.2, 0.1));
	printf("%c\n", checkNum('a', 'b'));

	return 0;
}