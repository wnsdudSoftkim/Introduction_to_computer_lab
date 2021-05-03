#include<stdio.h>
#define max 100

int main()
{
	int op, i, j;
	int student_num = 0;
	int input_id,index;
	int id[max] = { 0 };

	printf("1. Add \n2. Delete\n3. Insert\n4. Search\n5. Update\n6. Display all\n");

	while (1)
	{
	start:

		printf("\nEnter the option for student ID ->");
		scanf("%d", &op);
		int k = 0;
		switch (op)
		{
		case 1:
			printf("\n[ADD]\n");
			printf("Enter the new Student ID : ");
			scanf("%d", &input_id);

			if (student_num >= 1)                     //�л� ���� 1�� �̻��̸� �ߺ� �˻�
			{
				for (i = 0; i < student_num; i++) 
				{                                               //�л� �� ��ŭ �ݺ�
					if (input_id == id[i]) {                    //�Է¹��� id�� ������ id�� ��ġ�ϴ°�
						printf("***Duplicate ID found***\n\n");
						goto start;                          //��ġ�ϸ� ����� ����� �ʱ�� ���ư�
					}
				}
			}

			id[student_num] = input_id;
			student_num++;

			printf("[%d] student : %d\n", student_num, id[student_num-1 ]);
			break;

		case 2:
			printf("\n[delete]\n");
			printf("Enter the Student ID to delete : ");
			scanf("%d", &input_id);

			for (i = 0; i < student_num; i++)
			{
				if (input_id == id[i]) {             //������ id�� ã�Ƽ�
					k = 1;
					for (j = i; j < student_num; j++) {
						id[j] = id[j + 1];           // �� �����ͷ� ���
					}
					printf("delete success!\n");
					student_num--;                  //
				}
			}
			if (k == 0)                       //������ id�� ������ ����
			{
				printf("**error try again**\n\n");
				goto start;
			}
			break;

		case 3:
			printf("\n[Insert]\n");
			printf("Enter the 'index' and 'new ID' (index = (0 ~ number of studen) : ");
			scanf("%d %d", &index, &input_id);
			
			if (index < 0 || index >99) {
				printf("**error! wrong index!**\n\n");
				break;
			}

			for (i = 0; i < student_num; i++)               // �Է� id �ߺ� �˻�
			{                                               
				if (input_id == id[i]) {                    
					printf("***Duplicate ID found***\n\n");
					goto start;                            //���� id�� �ߺ��Ǹ� ����� ����� �ʱ�� ���ư�
				}
			}

			student_num++; 

			for (i = student_num ; i >= index; i--)
			{
				id[i] = id[i-1];                        //�Է¹��� index ��ŭ �ڷ� ��ĭ�� �з�����
			}
			
			id[index-1] = input_id;                       //index�� ����
			printf("insert sucess!\n");
			break;


		case 4:
			printf("\n[Search]\n");
			printf("Enter the student ID to search :");
			scanf("%d", &input_id);

			k = 0;
			for (i = 0; i < student_num; i++)               
			{
				if (input_id == id[i]) {
					k = 1;
					printf("\n=>[%d]student %d\n",i+1,input_id);
				}
			}
			if (k == 0) 
			{
				printf("No found");
				goto start;
			}
			break;

		case 5 :
			printf("\n[Upedate]\n");
			printf("Enter 'ID' to update and 'new ID' :");
			scanf("%d %d", &index, &input_id);
			
			for (i = 0; i < student_num; i++)               // �Է� id �ߺ� �˻�
			{
				if (input_id == id[i]) {
					printf("***Duplicate ID found***\n\n");
					goto start;                            //���� id�� �ߺ��Ǹ� ����� ����� �ʱ�� ���ư�
				}
			}
			
			k = 0;

			for (i = 0; i < student_num; i++)               
			{
				if (index == id[i]) {
					id[i] = input_id;
					printf("updata sucess! %d -> %d",index,id[i]);
					k = 1;
				}
			}
			if (k == 0) {
				printf("**error! no exist ID **");
				break;
			}
			break;

		case 6 :
			printf("\n[Display all students ID]\n\n");
			for (i = 0; i < student_num; i++)
			{
				printf("[%d}student : %d \n", i + 1, id[i]);
			}
		}
	}
}

