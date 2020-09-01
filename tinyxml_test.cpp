#include <iostream>

#include "tinyxml.h"
#include "LevelParser.h"

using namespace std;

int main()
{
	LevelParser levelParser;
	Level* pLevel = levelParser.parseLevel("C:/Users/62349/Desktop/pal2-town1.tmx");
	printf("%p", pLevel);

	return 0;
}