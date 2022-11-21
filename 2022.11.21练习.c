/*
#include<stdio.h>
#include<math.h>
int main()
{
	int sign = 1;
	double pi = 0.0, n = 1.0, term = 1.0;
	while (fabs(term) >= 1e-6)
	{
		pi = pi + term;
		n = n + 2;
		sign = -sign;
		term = sign / n;


	}
	pi = pi * 4;
	printf("pi=%10.8f\n", pi);
	return 0;
}*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
	int n, k, i, m = 0;
	for (n = 101; n <= 200; n = n + 2)
	{
		k = sqrt(n);
		for(i=2;i<=k;i++)
		if (n % i == 0)
			break;
	if (i >= k + 1)
	{
		printf("%4d", n);
	}
	printf("");
			
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int f1 = 1, f2 = 2;
	int i;
	for (i = 1; i <= 20; i++)
	{
		printf("%12d %12d", f1, f2);
		if (i % 2 == 0)
			printf("\n");
		f1 = f1 + f2;
		f2 = f2 + f1;
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int j, i, n = 0;
	for(i=1;i<=5;i++)
		for (j = 1; j <= 5; j++, n++)
		{
			if (n % 5 == 0)
				printf("\n");
			if (i == 3 && j == 1)
				continue;
			printf("%d\t",i*j);
		}
	printf("\n");
	return 0;
}
*/
#include<stdio.h>
#include<math.h>


int is_prime(int n)
{
	int j = 0;
	for (j = 2; j<=n; j++)
	{
		if (n % j == 0);
		return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf(" %d ", i);
	}
	return 0;
}




#include<stdio.h>
int main() 
{
	int n;
	for (n = 100; n <= 200; n++)
	{
		if (n % 3 == 0)
			continue;
		printf(" %d",n);
	}
	printf("\n");
	return 0;
}










