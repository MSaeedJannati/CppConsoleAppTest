#include "ArraySum.h"

int CalcArraySum(int* firstElementPointer, int size)
{
	auto outPut = 0;
	for (auto i = firstElementPointer; i < firstElementPointer + size; i++)
	{
		outPut += *i;
	}
	return outPut;
}
