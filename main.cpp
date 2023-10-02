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

void CheckDiff(int Normal,int comeCB,int num=1) {

	int AllNor= AddforNum(Normal, num);
	int AllCB= ComebackMoney(comeCB, num);

	printf("%d時間の給与\n",num);
	printf("%d : 普通\n", AllNor);
	printf("%d : 再起\n", AllCB);

	//総合計の差が超えれば終了
	if (AllNor < AllCB) {
		printf("\n%d時間で超える\n", num);
		return;
	}
	else {
		printf("\n\n");
		//回数を増やしてもう一回
		num++;
		return CheckDiff(Normal, comeCB, num);
	}

}

int main(void) {

	int Normal = 1072;

	int comeB = 100;

	int num = 8;

	printf("%d\n", AddforNum(Normal, num));
	printf("%d\n", ComebackMoney(comeB, num));
	printf("%d回\n", num);

	CheckDiff(Normal, comeB);

	return 0;
}