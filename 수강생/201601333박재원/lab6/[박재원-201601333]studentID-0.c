#include <stdio.h>

int main() {
    //value 'num' for select the function, 'a','b','c' for indicate range or a loacation in the array, 's', 's2' for studentID.
    int num, a, b, c, s, s2;
    int arr[15] = {0};

    while(1) {
        printf("1.Add\n2.Delete\n3.Insert\n4.Search\n5.Update\n6.Display\n7.Exit\n");
        printf("Enter a number which you want: ");
        scanf("%d", &num);

        if (num == 7) break;

        if (num > 7 || num < 0) {
            printf("Wrong input detected, input must be 1 to 7.");
            break;
        }

        switch(num) {
            case 1:
                printf("Enter the student ID which you wanna add: ");
                scanf("%d", &s);

                for (a = 0; a < 15; a++) {
                    if (arr[a] == 0) {
                        b++;
                        break;
                    }
                }
                if (b == 0) printf("There is no empty space in array\n");
                else {
                    b = 0;
                    for (c = 0; c < 15; c++) {
                        if (arr[c] == s) {
                            b++;
                            break;
                        }
                    }
                    if (b == 0) arr[a] = s;
                    else printf("%d is alreay in the array\n", s);
                }
                printf("Complete\n");
                continue;

            case 2:
                printf("Enter the student ID which you wanna delete: ");
                scanf("%d", &s);

                for (a = 0; a < 15; a++) {
                    if (arr[a] == s) {
                        b++;
                        break;
                    }
                }
                if (b == 0) printf("%d is already not in the array\n", s);
                else {
                    for (c = a; c < 14; c++)
                        arr[c] = arr[c + 1];
                    b = 0;
                }
                printf("Complete\n");
                continue;

            // insert the new ID before the ID in the array which you want, if you want to insert the last in the array, you can use add in case1.
            case 3:
                printf("Enter the student ID which you wanna insert: ");
                scanf("%d", &s);

                for (a = 0; a < 15; a++) {
                    if (arr[a] == 0) {
                        b++;
                        break;
                    }
                }
                if (b == 0) printf("There is no empty space in array\n");
                else {
                    b = 0;
                    for (c = 0; c < 15; c++) {
                        if (arr[c] == s) {
                            b++;
                            break;
                        }
                    }
                    if (b == 0) {
                        printf("Enter the next student ID where you wanna insert: ");
                        scanf("%d", &s2);
                        
                        for (a = 0; a < 15; a++) {
                            if (arr[a] == s2) {
                                b++;
                                break;
                            }
                        }
                        if (b != 0) {
                            for (c = 14; c > a - 1; c--) {
                                arr[c + 1] = arr[c];
                            }
                            arr[a] = s;
                        }
                        else printf("%d is not in the array\n", s2);
                    }
                    else printf("%d is alreay in the array\n", s);
                }
                printf("Complete\n");
                continue;
            
            case 4:
                printf("Enter the student ID which you wanna find: ");
                scanf("%d", &s);

                for (a = 0; a < 15; a++) {
                    if (arr[a] == s) {
                        b++;
                        break;
                    }
                }
                if (b == 0) printf("%d is not in the array.", s);
                else printf("%d is in the array, and its position is %d.", s, a);
                printf("Complete\n");
                continue;

            case 5:
                printf("Enter the student ID which you wanna update: ");
                scanf("%d", &s);

                for (a = 0; a < 15; a++) {
                    if (arr[a] == s) {
                        b++;
                        break;
                    }
                }
                if (b == 0) printf("%d is not in the array\n", s);
                else {
                    b = 0;
                    printf("Enter the new student ID to update: ");
                    scanf("%d", &s2);

                    for (c = 0; c < 15; c++) {
                        if (arr[c] == s2) {
                            b++;
                            break;
                        }
                    }
                    
                    if (b == 0) arr[a] = s2;
                    else printf("%d is already in the array", s2);
                }
                printf("Complete\n");
                continue;


            case 6:
                for (a = 0; a < 15; a++) {
                    if (arr[a] == 0) continue;
                    printf("%d\n", arr[a]);
                }
                continue;
        }

    }
}