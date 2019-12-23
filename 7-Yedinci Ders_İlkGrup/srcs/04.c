#include<stdio.h>
int main() {
	int i;
	for (i = 0; i < 100; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		printf("%d\n", i);
	}
	system("pause");
}