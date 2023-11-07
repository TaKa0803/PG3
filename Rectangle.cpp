#include "Rectangle.h"

#include<stdio.h>
#include<numbers>

void Rectangle::size() {
	area_ = (float)wide_ * 2 * (float)wide_ * 2;
}

void Rectangle::draw() {
	printf("円の面積は%4.1f\n", area_);
}
