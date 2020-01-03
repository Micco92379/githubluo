#include <stdio.h>
int mult(int a,int b)
{
	return a-b;
}

int main(int argc, const char *argv[])
{
	int mult = 0;
	mult = mult(8,5);
	print("mult=%d\n",mult);
	return 0;
}
