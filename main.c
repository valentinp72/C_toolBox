#include <stdio.h>
#include "tools.h"

int main(){
	pt2D a = {0, 0};
	pt2D b = {-1, -1};

	printf("Distance : %f\n", distBetween2Pts(a, b));
}
