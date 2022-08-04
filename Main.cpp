#include <iostream>
#include <conio.h>
#include"CstringImplimentation.h"
#include"RepeatingCstringPrint.h"
#include "Fibounachi.h"

int main()
{
	char buffer[50];
	Print("Which Fibounachi element do you want");

	Read(buffer);
	int inNumber = ConvertStringToInt(buffer);
	int fibonuchiIndex=GetFibonachiElement(inNumber);
	Print(fibonuchiIndex);
	while (!_kbhit());
	return 0;
}
