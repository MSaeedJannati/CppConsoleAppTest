#include "Fibounachi.h"

int  GetFibonachiElement(int index)
{
	if (index < 1)
		return -1;
	if (index <= 2)
		return 1;
	return (GetFibonachiElement(index - 1) + GetFibonachiElement(index - 2));
}
