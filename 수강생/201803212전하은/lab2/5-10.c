#include <stdio.h>
int main(void) {
	int grade;
	printf("Enter numerical grade : ");
	scanf_s("%d", &grade);
    
	switch (grade / 10) {
    case 10: 
        if (grade > 100 )
        {
            printf("Error"); break;
        }
        else{
            printf("Letter grade : A");
        } break;
        
    case 9:
        printf("Letter grade : A");
        break;
    case 8:
        printf("Letter grade : B");
        break;
    case 7:
        printf("Letter grade : C");
        break;
    case 6:
        printf("Letter grade : D");
        break;
    default:
        if (grade < 0)
        {
            printf("Error"); break;
        }
        else {
            printf("Letter grade : F");
            
        }break;
    }



	return 0;
}
