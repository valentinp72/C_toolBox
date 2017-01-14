#include <stdio.h>
#include "tools.h"

int main(){
	pt3D a = {7, 4, 3};
	pt3D b = {7, 4, 3};

	printf("Distance : %f\n", pt3D_Dist(a, b));
	printf("%i\n", pt3D_equals(a, b));
}
