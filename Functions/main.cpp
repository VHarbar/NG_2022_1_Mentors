#include <iostream>

using namespace std;

void drawLine(int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "*";
    }
    cout << endl;
}

int numbersSumm(int a, int b)
{
    return a+b;
}

void drawRectangular(int size)
{
    for(int i = 0; i < size; i++)
    {
        drawLine(size);
    }
}

void drawTriangle(int size)
{
    for(int i = 1; i <= size; i++)
        drawLine(i);
}

void drawReversedTriangle(int size)
{
    for(int i = size; i != 0; i--)
        drawLine(i);
}

void recursionTriangle(int size)
{
    if(size > 1)
        recursionTriangle(size-1);
    drawLine(size);
}

void recursionReversedTriangle(int size)
{
    drawLine(size);
    if(size > 1)
        recursionReversedTriangle(size-1);
}

int numbersDivision(int a, int b)
{
    return a-b;
}

float numbersDivision(float a, float b)
{
    return a-b;
}

int main()
{
    float number = 0;
    number = numbersDivision((float)3.0 , (float)2.5);
    cout << number;
}
