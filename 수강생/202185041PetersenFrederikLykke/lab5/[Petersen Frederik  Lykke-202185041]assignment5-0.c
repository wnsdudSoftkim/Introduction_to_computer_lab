/* This menu-driven progam has two sub-programs*/
/* 1. Finding union and intersection of two sets  */
/* 2. Finding largest and smallest element in a list */
#include <stdio.h>

#define N 100

int main(void){
  int program;
  int a[N], b[N], n_a, n_b;
  int l = 0;
  int non_empty_sets = 0;
  int intersection[N];
  int flag = 0;
  int smallest, largest;
  printf("Choose either 1 or 2:\n");
  printf("1. Finding intersection and union of two sets.\n");
  printf("2. Finding largest and smallest element in a list\n");
  scanf("%d", &program);

  if(program == 1){
    printf("Enter number of elements in set A (at most %d): ", N);
    scanf("%d", &n_a);
    printf("Please enter set A with each value seperated by space.\n");
    for(int i = 0; i < n_a; i++){
      scanf("%d", &a[i]);
    }
    printf("Enter number of elements in set B (at most %d): ", N);
    scanf("%d", &n_b);
    printf("Please enter set B with each value seperated by space.\n");
    for(int i = 0; i < n_b; i++){
      scanf("%d", &b[i]);
    }

    //Finding the intersection
    printf("The intersection is: ");
    for(int i = 0; i < n_a; i++){
      for(int j = 0; j < n_b; j++){
        if(a[i] == b[j]){
          non_empty_sets = 1;
          printf("%d ", a[i]);
        }
      }
    }
    if(non_empty_sets == 0){
      printf("empty\n");
    }else if(non_empty_sets == 1){
      printf("\n");
    }
    //Finding the union
    printf("The union is: ");
    //Printing all elements of A
    for(int i = 0; i < n_a; i++){
      printf("%d ", a[i]);
    }
    //Printing all elements of B, not contained in A.
    for(int i = 0; i < n_b; i++){
      flag = 0;
      for(int j = 0; j < n_a; j++){
        if(b[i] == a[j]){
          //For each element in B: Elements are not printed if they are flagged.
          flag = 1;
        }
      }
      if(flag == 0){
        printf("%d ", b[i]);
      }
    }
    printf("\n");

  }else if(program == 2){
    printf("Enter number of elements in the set (at most %d): ", N);
    scanf("%d", &n_a);
    printf("Please enter the set with each value seperated by space.\n");
    for(int i = 0; i < n_a; i++){
      scanf("%d", &a[i]);
    }

    //Finding smallest element
    smallest = a[0];
    for(int i = 1; i < n_a; i++){
      if(a[i] < smallest){
        smallest = a[i];
      }
    }
    printf("Smallest element: %d\n", smallest);

    //Finding largest element
    largest = a[0];
    for(int j = 1; j < n_a; j++){
      if(a[j] > largest){
        largest = a[j];
      }
    }
    printf("Largest elemet: %d\n", largest);
  }else{
    printf("Illegal choice.\n");
  }

  return 0;
}
