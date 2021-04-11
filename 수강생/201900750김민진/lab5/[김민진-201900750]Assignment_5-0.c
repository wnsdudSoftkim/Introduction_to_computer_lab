#include <stdio.h>
#define N 10

int main(void)
{
	int user = 0, cnt = 0;
	int len1, len2, set1[N], set2[N], uni[N + N];
	int arr[10], max, min;

	while (user != 5)
	{
		printf("\n\n");
		printf("1. Intersection Calculation\n");
		printf("2. Union Calculation\n");
		printf("3. Finding Maximum number\n");
		printf("4. Finding Minimum number\n");
		printf("5. Quit\n\n");

		printf("Enter the program you want: ");
		scanf_s("%d", &user);

		switch (user)
		{
		case 1:
			printf("\n");
			printf("Enter set1 size(less then %d): ", N);
			scanf_s("%d", &len1);

			printf("Enter the integer elements of set1: ");
			for (int i = 0; i < len1; i++)
				scanf_s("%d", &set1[i]);

			printf("\n");
			printf("Enter set2 size(less than %d): ", N);
			scanf_s("%d", &len2);

			printf("Enter the integer elements of set2: ");
			for (int i = 0; i < len2; i++)
				scanf_s("%d", &set2[i]);

			printf("\n");
			printf("The intersection of two sets is: ");
			for (int i = 0; i < len1; i++)
			{
				for (int j = 0; j < len2; j++)
				{
					if (set1[i] == set2[j])
					{
						printf("%d ", set2[j]);
					}

				}
			}
			printf("\n");
			break;

		case 2:
			printf("\n");
			printf("Enter set1 size(less then %d): ", N);
			scanf_s("%d", &len1);

			printf("Enter the integer elements of set1: ");
			for (int i = 0; i < len1; i++)
				scanf_s("%d", &set1[i]);

			printf("\n");
			printf("Enter set2 size(less than %d): ", N);
			scanf_s("%d", &len2);

			printf("Enter the integer elements of set2: ");
			for (int i = 0; i < len2; i++)
				scanf_s("%d", &set2[i]);

			printf("\n");
			printf("The union of two sets is: ");

			for (int i = 0; i < len1; i++)
			{
				for (int j = 0; j < len2; j++)
				{
					if (set1[i] == set2[j])
					{
						set2[j] = set2[j + 1];
						set2[j + 1] = 0;
						cnt += 1;
					}
				}
			}

			for (int i = 0; i < len1; i++)
			{
				uni[i] = set1[i];
				uni[i + len1] = set2[i];
			}

			for (int i = 0; i < (len1 + len2) - cnt; i++)
				printf("%d ", uni[i]);
			printf("\n");
			break;

		case 3:
			printf("\n");
			printf("Enter the size of array(less then %d): ", N);
			scanf_s("%d", &len1);

			printf("Enter the elements: ");

			for (int i = 0; i < N; i++)
			{
				if (i < len1)
				{
					scanf_s("%d", &arr[i]);
				}
				else
					arr[i] = 0;
			}

			max = arr[0];

			for (int i = 0; i < len1; i++)
			{
				if (max < arr[i])
				{
					max = arr[i];
				}

			}
			printf("\n");
			printf("The largest element is: %d.\n", max);
			printf("\n");
			break;

		case 4:
			printf("\n");
			printf("Enter the size of array(less then %d): ", N);
			scanf_s("%d", &len1);

			printf("Enter the elements: ");

			for (int i = 0; i < N; i++)
			{
				if (i < len1)
				{
					scanf_s("%d", &arr[i]);
				}
				else
					arr[i] = 0;
			}

			min = arr[0];

			for (int i = 0; i < len1; i++)
			{
				if (min > arr[i])
				{
					min = arr[i];
				}

			}
			printf("\n");
			printf("The largest element is: %d.\n", min);
			printf("\n");
			break;

		case 5:
			break;

		default:
			printf("\n");
			printf("Wrong input.\n");
			break;
		}
	}

	return 0;
}