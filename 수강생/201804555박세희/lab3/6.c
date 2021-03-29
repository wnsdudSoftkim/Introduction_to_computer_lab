#include <stdio.h>


main() {


		int N, M, i, tmp = 1;

		printf("Enter a range of numbers(two integers):");
		scanf_s("%d %d", &N, &M);

		for (i = N;i <= M; i++) {
			printf("%d!=1", i);
			
			tmp = tmp * i;
			printf("=%d\n", tmp);
		}

		return 0;
	}

