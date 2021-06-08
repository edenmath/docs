#include <stdio.h>
#include "eden.h"

int main(void) {
	double num, result;
	scanf("%lf", &num);

	result = eden_round(num);
	printf("%lf rounded is %lf\n", num, result);

	return 0;
}
