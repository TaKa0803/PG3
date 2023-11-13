#include"Friend.h"
#include<stdio.h>

Friend::Friend() {
	name = "友人";
	printf("%sが現れた!\n",name);
}

Friend::~Friend() {
	printf("%sが死んだ！\n", name);
}

void Friend::ActText() {
	printf("%sは勉強をした！\n",name);
}