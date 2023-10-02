#include<stdio.h>
#include<ctype.h>


int AddforNum(int base, int num) {
	if (num == 1) {
		return base;
	}
	else {
		num--;
		return base + AddforNum(base, num);
	}
}


int ComebackMoney(int base, int num) {
	if (num <= 1) {
		return base;
	}
	else {
		num--;

		int Base = base * 2 - 50;
		return base + ComebackMoney(Base, num);
	}
}



int main(void) {

	int Normal = 1072;

	int comeB = 100;

	int num = 8;

	printf("%d\n", AddforNum(Normal, num));
	printf("%d\n", ComebackMoney(comeB, num));
	printf("%d回\n", num);

	return 0;
}