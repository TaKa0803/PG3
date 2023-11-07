#include "Circle.h"

#include<stdio.h>

#include<cmath>
#include<numbers>


void Circle::size() {
	area_ = (float)wide_ * (float)wide_ * (float)std::numbers::pi;
}

void Circle::draw() {
	printf("矩形の面積は%4.1f\n", area_);
}


