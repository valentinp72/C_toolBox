#include <stdio.h>
#include "tools.h"

int main(){
	int a = 2, b = 4;
	pt2D point = {1, 1};
	pt3D pointBis = {1, 1, 1};

	termClear();

	switchAB(&a, &b);

	termForegroundColor(COLOR_MAGENTA);
	termBackgroundColor(COLOR_WHITE);

	printf(" a = %i ", a);

	termForegroundColor(COLOR_WHITE);
	termBackgroundColor(COLOR_MAGENTA);

	printf(" a = %i ", a);

	termResetColors();
}
