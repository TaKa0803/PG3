#include"Me.h"
#include<stdio.h>

Me::Me() {
	name = "自分のドッペルゲンガー";
	printf("%sが現れた!\n", name);
}

Me::~Me() {
	printf("%sが死んだ！\n", name);

}


void Me::ActText() {
	printf("%sは水泳をした!\n", name);

}