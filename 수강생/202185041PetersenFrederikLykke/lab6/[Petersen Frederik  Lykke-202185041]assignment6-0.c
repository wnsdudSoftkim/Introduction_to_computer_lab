/* A menu driven progran with the following functions: */
/* 1. Add Student ID */
/* 2. Delete Student ID */
/* 3. Insert Student ID at a given position or index */
/* 4. Search Student ID */
/* 5. Update Student ID */
/* 6. Display Student IDs */

#include <stdio.h>
// Define database size
#define N 5

int main(void){

  int choice;
  int choice1 = 1;
  int choice2 = 0;
  int choice3 = 1;
  int stIDs[N];
  int exists[N];
  int found;
  int duplicate;
  int flag;
  int count = 0;
  for(int i = 0; i < N; i++){
    exists[i] = 0;
  }
  int inputID;
  int IDindex;
  int replaceID;

  while(1){
    printf("Choose between the following:\n");
    printf("1. Add Student ID \n");
    printf("2. Delete Student ID \n");
    printf("3. Insert Student ID at a given position or index \n");
    printf("4. Search Student ID \n");
    printf("5. Update Student ID \n");
    printf("6. Display Student IDs\n");
    printf("7. Stop program\n");
    printf("MAIN MENU choice: ");
    scanf("%d", &choice);

    //Add Student ID
    if(choice == 1){
      while(1){
        count = 0;
        for(int i = 0; i < N; i++){
          if(exists[i] == 1){
            count++;
          }
        }
        if(count >= N){
          printf("Database full, cannot add further IDs\n");
          break;
        }
        printf("\nEnter ID to be added: ");
        scanf("%d", &inputID);
        duplicate = 0;

        for(int i = 0; i < N; i++){
          if(stIDs[i] == inputID && exists[i] == 1){
            duplicate = 1;
            break;
          }
        }

        if(duplicate == 1){
          printf("The id %d already exists, nothing added\n", inputID);
        }

        else if(duplicate == 0){
          for(int i = 0; i < N; i++){
            if(exists[i] != 1){
              exists[i] = 1;
              stIDs[i] = inputID;
              break;
            }
          }
      }

      printf("Do you want to add another ID? Enter 0 for NO: ");
      scanf("%d", &choice1);
      getchar();

      if (choice1 == 0) break;
      }

    //Delete Student ID
    }else if(choice == 2){
      while(1){
        printf("\nEnter ID to be deleted: ");
        scanf("%d", &inputID);
        flag = 0;
        for(int i = 0; i < N; i++){
          if(stIDs[i] == inputID && exists[i] == 1){
            exists[i] = 0;
            flag = 1;
          }
        }
        if(flag == 0){
          printf("ID %d not found\n", inputID);
        }
        printf("Do you want to delete another ID? Enter 1 for YES: ");
        scanf("%d", &choice2);
        getchar();
        if (choice2 != 1) break;
      }

    //Insert Student ID at a given position or index
    }else if(choice == 3){
      while(1){
        printf("\nEnter index for ID insertion (at most %d): ", N-1);
        scanf("%d", &IDindex);
        if(IDindex < 0 || IDindex >= N){
          printf("Index %d out of bounds\n", IDindex);
          break;
        }
        printf("\nEnter ID: ");
        scanf("%d", &inputID);
        if(exists[IDindex] != 1){
          exists[IDindex] = 1;
          stIDs[IDindex] = inputID;
        }
        else if(exists[IDindex] == 1){
          for(int i = N - 2; i >= IDindex; i--){
            exists[i + 1] = exists[i];
            stIDs[i + 1] = stIDs[i];
          }
          stIDs[IDindex] = inputID;
        }
        printf("Do you want to insert another ID? Enter 0 for NO: ");
        scanf("%d", &choice3);
        getchar();
        if (choice3 == 0) break;
      }

    //Search Student ID
    }else if(choice == 4){
      printf("Enter ID to be searched for: ");
      scanf("%d", &inputID);
      found = 0;
      for(int i = 0; i < N; i++){
        if(exists[i] == 1 && stIDs[i] == inputID){
          printf("ID %d was found at index %d\n", inputID, i);
          found = 1;
          break;
        }
      }
      if(found != 1){
        printf("ID %d was NOT found\n", inputID);
      }

    //Update Student ID
    }else if(choice == 5){
      printf("Enter ID to be updated: ");
      scanf("%d", &inputID);
      found = 0;
      for(int i = 0; i < N; i++){
        if(exists[i] == 1 && stIDs[i] == inputID){
          found = 1;
        }
      }
      if(found != 1){
        printf("ID %d was NOT found\n", inputID);
      }
      if(found == 1){
        printf("Enter replacing ID: ");
        scanf("%d", &replaceID);
        for(int i = 0; i < N; i++){
          if(exists[i] == 1 && stIDs[i] == inputID){
            printf("ID %d replaced with %d\n", inputID, replaceID);
            stIDs[i] = replaceID;
            break;
          }
        }
    }

    //Display Student IDs
    }else if(choice == 6){
      printf("Position |ID\n");
      for(int i = 0; i < N; i++){
        if(exists[i] == 1){
          printf("%d        |%d\n", i, stIDs[i]);
        }
      }

    //Stop program
    }else if(choice == 7){
      break;

    }else{
      printf("Invalid choice\n");
    }
    printf("-----------------------------------\n");
    printf("\n");
  }
  return 0;
}
