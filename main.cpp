#include<stdio.h>
#include<ctype.h>




void DrawNum(int num) {
	printf("%d\n", num);
	return;
}
void DrawNum(float num) {
	printf("%f\n", num);
	return;
}
void DrawNum(double num) {
	printf("%lf\n", num);
	return;
}


template<typename T>
void checkNum(T a, T b) {
	if (a <= b) {

		DrawNum(a);

		return;
	}
	else {
		DrawNum(b);

		return;
	}

}


template<>
void checkNum(char a, char b) {
	printf("数字以外は代入出来ません\n");
	return;
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