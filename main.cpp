#include<stdio.h>


#include"Human.h"
#include"Friend.h"
#include"Me.h"

int main(void) {

	
	Human* humans[3];

	for (int i = 0; i < 3; i++) {
		if (i < 2) {
			humans[i] = new Friend;
		}
		else {
			humans[i] = new Me;
		}
	}
	printf("\n");
	
	for (int i = 0; i < 3; i++) {
		humans[i]->Action();
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		delete humans[i];
	}

	printf("\n");

	return 0;
}