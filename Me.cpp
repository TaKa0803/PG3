#include"Me.h"
#include<stdio.h>

Me::Me() {
	name = "自分のドッペルゲンガー";
	printf("%sが現れた!\n", name);
}

Me::~Me() {
	printf("%sが死んだ！\n", name);

}


void Me::Action() {
	printf("%sは踊りを見て笑った！\n", name);

}