#include<stdio.h>
#include"Min.h"









int main(void) {

	Min<int>intNum(1, 5);
	Min<float>floatNum(0.5f,-2.0f);
	Min<double>doubleNum(0.1, 4.2);

	printf("int型: %d\n", intNum.GetMinNum());
	printf("float型: %f\n", floatNum.GetMinNum());
	printf("double型: %lf\n", doubleNum.GetMinNum());

	
	return 0;
}


