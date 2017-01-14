#include <stdio.h>
#include "tools.h"

int main(){
	pt3D a = {7, 4, 3};
	pt3D b = {17, 6, 2};

	printf("Distance : %f\n", distBetween3DPts(a, b));
}
