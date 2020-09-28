#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	if (2>1) then
	{
	cout << "Hello World!" << endl; //в Си: printf("Hello, World!\n");
	}

int a = 10;
int b = 20;
//Switching vars
a=a ^ b;
b=b ^ a;
a=a ^ b;
//Result of switching
cout << "result on a:" << a << "   result of b:" << b << endl;



return 0;
}

