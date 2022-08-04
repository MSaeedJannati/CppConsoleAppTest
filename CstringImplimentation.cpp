#include "CstringImplimentation.h"
#include "InArrayTools.h"

void Print(const char* s, bool gotoNextLine)
{
	if (s == nullptr)
		return;

	auto charPointer = s;
	while (*charPointer != NULL)
	{
		_putch(*charPointer);
		charPointer++;
	}
	if (!gotoNextLine)
		return;
	std::cout << "\n";
}
void Print(int number)
{
	char buffer[50];
	int counter = 0;
	int digit = 0;
	while (number>0)
	{
		digit = number % 10;
		buffer[counter] = GetChar(digit);
		number /= 10;
		counter++;
	}
	char reserve;
	for (int i = 0; i < (counter) / 2; i++)
	{
		reserve = buffer[i];
		buffer[i]=buffer[counter-1 - i];
		buffer[counter-1 - i] = reserve;
	}
	buffer[counter] = NULL;
	Print(buffer);
}
void Read(char* buffer, int bufferSize)
{

	auto endPointer = buffer + bufferSize;
	for (char c = _getch(); c != '\r' && (buffer < endPointer); c = _getch(), buffer++)
	{
		_putch(c);
		*buffer = c;
	}
	_putch('\n');
	*buffer = NULL;
}

int ConvertStringToInt(const char* string)
{
	int outPut{ 0 };
	int size{ 0 };
	int currentDigit{ 0 };
	char* charPointer =(char*) string;
	while (*charPointer != NULL)
	{
		size++;
		charPointer++;
	}
	for (int i=size-1;i>=0;i--)
	{
		currentDigit = GetNumberByAscii(*(string+i));
		if (currentDigit == -1)
			return -1;
		outPut += currentDigit * GetPowOfTen(size-1-i);
	}
	return outPut;
}
char GetChar(int digit)
{
	if (digit > 9)
		return NULL;
	if (digit < 0)
		return NULL;
	return digit + 48;
}
int GetNumberByAscii(char numChar)
{
	if (numChar > '9')
	{
		Print("Wrong input baby: ", false);
		_putch(numChar);
		return -1;
	}
	if (numChar < '0')
	{
		Print("Wrong input baby: ", false);
		_putch(numChar);
		return -1;
	}
	return numChar - '0';
}

int GetPowOfTen(const int pow)
{
	int outPut = 1;
	for (int i = 0; i < pow; i++)
		outPut *= 10;
	return outPut;
}

