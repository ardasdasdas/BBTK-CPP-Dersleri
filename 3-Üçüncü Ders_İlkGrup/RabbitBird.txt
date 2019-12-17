#include <stdio.h>
#include <math.h>
#define rabbitRate 0.085
#define birdRate 0.077
main()
{
	double rabbit = 38, bird = 102, temp1, temp2;
	int yearCount = 0;
	temp1 = rabbit;
	temp2 = bird;
	while (rabbit < bird)
	{
		temp1 = rabbit * rabbitRate;
		rabbit += temp1;
		
		printf("rabbit->%f ", rabbit);

		temp1 = bird * birdRate;
		bird += temp1;
		
		printf("bird->%f \n", bird);

		yearCount++;
	}

	printf("%d\n", yearCount);

	system("pause");
}

