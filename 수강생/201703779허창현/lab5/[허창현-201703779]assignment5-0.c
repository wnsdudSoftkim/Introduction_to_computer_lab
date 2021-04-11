#include<stdio.h>
int main(void)
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 3,4,6,8,9};
	int uni[20], in[10];                      //�����հ� ������ �迭
	int max, min,i,j, size_a, size_b;
	int count1 = 0, count2 = 0;

	size_a = sizeof(a) / sizeof(int);          
	size_b = sizeof(b) / sizeof(int);           //������ ũ�� ����
	

	for (i = 0; i < size_a; i++)
		uni[i] = a[i];                         //�����տ� a �迭 �Է�
	for (i = 0; i < size_b; i++)
		uni[size_a + i] = b[i];                //a �迭 �ڿ� b �迭 �Է�

	for (i = 0; i < size_a; i++)
		for (j = 0; j < size_b; j++)
			if (a[i] == b[j])
			{
				in[count1] = a[i];       //a�� ��ҿ� b�� ��Ұ� ���ٸ� �����տ� �Է�
				uni[size_a + j] = 0;     // �����տ��� �ߺ��Ǵ� ��Ҵ�  b�� ��� �� 0���� ����
				count1++;                // �ߺ��� ��� �� ��ŭ count
			}

	for (i = 0; i < size_b; i++)
		if (uni[size_a + i] != 0) {
			uni[size_a + count2] = uni[size_a + i];
			count2++;
		}
	        //�ߺ��Ǿ� 0���� ����� �κ��� �����ϰ� ��ĭ�� �о�ֱ� 


	printf("\nunion of two sets = { ");     //�ϼ��� ������ ���

	for (i = 0; i < size_a + size_b - count1; i++)
		printf("%d ,", uni[i]);
	printf("\b}\n");

	printf("\nin of two sets = { ");       //������ ���
	for (i = 0; i < count1; i++)
		printf("%d ,", in[i]);
	printf("\b}\n");
	  
	max = uni[0];                      //������ �� �ִ밪 �ּҰ� �˻�
	min = uni[0];           
	for (i = 0; i < size_a + size_b - count1; i++) {
		if (max < uni[i]) {
			max = uni[i];
		}
		if (uni[i] < min) {
			min = uni[i];
		}
	}

	printf("\nlargest element in a list : %d\n", max);
	printf("\nsmallest element in a list : %d\n\n", min);

	return 0;

}