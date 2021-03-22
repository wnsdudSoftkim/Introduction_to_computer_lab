#include <stdio.h>

int main(void)
{
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    // (grade_a * 10) + (grade_b * 1) == numerical grade.
    int grade_a = grade/10;
    int grade_b = grade%10;
    
    if (grade >= 0 && grade <= 100)
    {
        switch (grade_a)
        {

        case 10: case 9:
            printf("Letter grade: A");
            break;
        case 8:
            printf("Letter grade: B");
            break;
        case 7:
            printf("Letter grade: C");
            break;
        case 6:
            printf("Letter grade: D");
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("Letter grade: F");
            break;
    
        default:
            break;
        }
    }
    else
    {
        printf("Wrong numerical grade");
    }

    return 0;
}