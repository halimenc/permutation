#include <stdio.h>
#include <string.h>
#define N 10

// prints all permutation of given numbers

// Function to print an array of integers
void print(int *num, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", num[i]);
	printf("\n");
}

int main()
{
	int num[N];
	int *ptr;
	int temp;
	int i, n, j;
	printf("\nhow many number are you going to add: ");
	scanf("%d", &n);
	printf("\nwrite the numbers:\n");
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);

// Generate and print all permutations of the input numbers
	for (j = 1; j <= n; j++)
	{
		for (i = 0; i < n - 1; i++)
		{
			// Swap adjacent elements in the array
			temp = num[i];
			num[i] = num[i + 1];
			num[i + 1] = temp;
			print(num, n);
		}
	}

	return 0;
}
