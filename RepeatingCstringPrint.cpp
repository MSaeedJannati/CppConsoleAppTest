#include "RepeatingCstringPrint.h"

void RepeatingPrint(const char* input, int repeatingTime)
{
	for (int i = 0; i < repeatingTime; i++)
	{
		Print(input, false);
		Print(" ", false);
	}
	Print("");
}
