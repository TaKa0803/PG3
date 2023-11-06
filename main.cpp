#include<stdio.h>
#include<Windows.h>
#include<ctype.h>
#include<time.h>


typedef void (*PFunc)(int*);


//コールバック関数
void DispResult(int *ans) {

	//ランダム数字取得
	unsigned int curtime = (unsigned int)time(nullptr);
	srand(curtime);

	int number = rand() % 6;

	printf("%d!\n", number);

	int checkans = number % 2;

	if (*ans == '0') {
		*ans = 0;
	}
	if (*ans == '1') {
		*ans = 1;
	}



	if (checkans == 0) {
		printf("結果は丁！\n");



		if (*ans==checkans)
		{
			printf("選んだのは丁！正解！\n");
		}
		else {
			printf("選んだのは半！残念！\n");
		}
	}
	else {
		printf("結果は半！\n");
		if (*ans == checkans)
		{
			printf("選んだのは半！正解！\n");
		}
		else {
			printf("選んだのは丁！残念！\n");
		}
	}


	
}

void setTimeout(PFunc p,int waitSecond, int ans) {
	Sleep(waitSecond * 1000);

	p(&ans);
}

int main(void) {

	printf("丁か半か選んでください（丁は０、半は１)\n");
	
	
	int answer;
	do
	{
		answer = getchar();
		
		if (isdigit(answer)) {
			if (answer == '0' || answer == '1') {
				break;
			}
			else {
				printf("0か1を入力してください\n");
			}
		}
		else {
			printf("0か1を入力してください\n");
		}
	} while (true);

	
	
	printf("結果は\n");

	PFunc p;
	p = DispResult;
	setTimeout(p, 3, answer);


	
	return 0;
}