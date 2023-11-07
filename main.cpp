#include<stdio.h>

#include"IShape.h"
#include"Circle.h"
#include"Rectangle.h"


int main(void) {

	IShape* iShape[2] = {
		new Circle,
		new Rectangle
	};

	for (int i = 0; i < 2; i++) {
		iShape[i]->size();
	}

	for (int i = 0; i < 2; i++) {
		iShape[i]->draw();
	}

	for (int i = 0; i < 2; i++) {
		delete iShape[i];
	}

	return 0;
}