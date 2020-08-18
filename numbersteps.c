#include <stdio.h>
#include <string.h>

int main(void) {

	int n = 0;
	scanf("%d", &n);
	//printf("%d is the number\n",n);
	//printf(" bye bye\n");
	//fflush(stdout);

	int c[n*2];
	int x = 0, y = 0;



	for (int i = 0; i < n*2; i+=2)
	{
		//printf("%d\n",i);
		scanf("%d %d", &c[i], &c[i+1]);
		//printf("%d %d\n",c[i], c[i+1]);
	}

 	//scanf("%i %i\n", &c[0], &c[1]);
	//scanf("%i %i\n", &c[2], &c[3]);
	//scanf("%i %i\n", &c[4], &c[5]);


	for (int i = 0; i < n*2; i+=2)
	{
		x = c[i], y = c[i+1];
		if ( x % 2 == 0 && x>=0 && y >=0 && x <= 10000 && y <= 10000)
		{
			if ((x == y) || (y == (x - 2)))
			{
				printf("%i\n", x + y);
			}
			else
			{
				printf("No Number\n");
			}
		}

		else
		{
			if ( ( (x == y) || (y == (x - 2))) && (x >=0) && (y>=0 ) && (x <= 10000) && (y <= 10000) )
			{
				printf("%i\n", x + y - 1);
			}
			else
			{
				printf("No Number\n");
			}
		}
	}

	return 0;

}