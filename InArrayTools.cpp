#include "InArrayTools.h"

void PrintArray(const int* firstIndexPointer, int size)
{
    std::cout << "{";
    for (auto i = firstIndexPointer; i < firstIndexPointer + size; i++)
    {
        std::cout << *i<<",";
    }
    std::cout << "}\n";
}

void ReverseArray(int* firstIndexPointer, int size)
{
    for (auto i = firstIndexPointer; i < firstIndexPointer + size/2; i++)
    {
        Swap(*(i),*(firstIndexPointer+((firstIndexPointer+size-1)-i)));
    }
}

void Swap(int& first, int& second)
{
    int reserveSpace = first;
    first = second;
    second = reserveSpace;
}
