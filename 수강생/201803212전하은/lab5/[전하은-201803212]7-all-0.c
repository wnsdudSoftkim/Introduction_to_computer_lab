#include<stdio.h> //교집합과 합집합 최대 최소
int main()
{
    int a[50], b[50],c[70],i, n, k, ch,j, max=0, min;
    printf("How many elements for array a? ");
    scanf_s("%d", &n);
    printf("Enter %d elements:\n", n);
   
    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    printf("How many elements for array b? ");
    scanf_s("%d", &k);
    printf("Enter %d elements:\n", k);
    for (i = 0; i < k; i++)
        scanf_s("%d", &b[i]);

    printf("What do you want to know? 1 : <intersection> 2 : <union> 3 : <max of a> 4: <min of a>. \n");
    scanf_s("%d", &ch);

    if (ch == 1) {
        printf("intersection is ..");
        for (i = 0; i < n; i++) {
            for (j = 0; j < k; j++) { 
                if (a[i] == b[j]) {
                    printf("%d ", a[i]);
                }

            }
           
        }
    }
    else if (ch == 2) {
        printf("union is..");
        for (i = 0; i < n; i++) {
            c[i] = a[i];
            printf("%d", a[i]);
            }

        for (j = 0; j < k; j++) {
            for (i = 0; i < n; i++) {   
                if (b[j] == a[i]) {
                    break;
                }
                if (i == n-1) {
                    printf("%d", b[j]);
                }
                
            }
        }   
    }
    else if (ch == 3) {
        printf("max of a is...");
        for (i = 0; i < n; i++) {
            if (a[i] >= max) {
                max = a[i];
            }
        }
        printf("%d",max);

    }
    else if (ch == 4) {
        printf("min of a is...");
        min = a[0];
        for (i = 1; i < n; i++) {
            if (a[i] <= min) {
                min = a[i];
            }
        }
        printf("%d",min);

    }
    else {
        printf("Worng number");
    }

   
     
}
