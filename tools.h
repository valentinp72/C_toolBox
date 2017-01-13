/*
 * C toolbox : Headers
 *
 * Initially created by:
 * MOTTIER Emeric
 * PELLOIN Valentin
 * TEYSSIER Titouan
 *
 * Creation:    11/28/2016
 * Last update: 01/13/2017
*/
#ifndef TOOLS
#define TOOLS

	// -- CONSTANTS -- //

	#define TRUE  1
	#define FALSE 0

	// -- FUNCTIONS -- //

	void initRandom();
	int randab(int a, int b);
	int didItHappen(int chance);

	int min(int a, int b);
	int max(int a, int b);

	int switchAB(int * a, int * b);
	int isBetween(int val, int a, int b);
	int intervalOverlaping(int a, int b, int c, int d);
	int mapping(int value, int min, int max, int destMin, int destMax);

	int  car2val(char car);
	char up2low(char car);
	char low2up(char car);

	void err(char msg[], int dir);
	void errInit();
	void errClose();

	int fileExist(char * fileName);
	int nLinesFile(char * file);
	int nColsFile(char * file);

#endif
