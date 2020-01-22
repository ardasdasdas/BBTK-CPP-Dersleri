#include <stdio.h>
#define rabbitRate 0.085
#define birdRate 0.077
main()
{
	double rabbit = 38, bird = 102;
	int yearCount = 0;
	while (rabbit < bird)
	{
		rabbit += rabbit * rabbitRate;
		
		printf("rabbit->%f ", rabbit);

		bird += bird * birdRate;
	
		printf("bird->%f \n", bird);

		yearCount++;
	}
	printf("Gecen yil -> %d\n", yearCount);
	system("pause");
}