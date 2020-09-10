#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void printset(int* p1, int i, int n);
void cartesian(int* p1, int* p2, int n, int m);
int main()
{
	int n,m;
	scanf("%d %d", &n, &m);
	if (n < 1 || m < 1 || n>10 || m>10)
	{
		printf("Error");
		return 0;
	}
	int* pSet1 = (int*)malloc(n*sizeof(int));
	int* pSet2 = (int*)malloc(m * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", pSet1+i);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d", pSet2 + i);
	}
	printset(pSet1,1,n);
	printset(pSet2,2, m);
	cartesian(pSet1, pSet2, n, m);
}
void cartesian(int *p1,int *p2,int n,int m)
{
	printf("==========Cartesian Product==========\n\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == 0 && j==0)printf(" (%d,%d)",*(p1+i),*(p2+j));
			else printf(",(%d,%d)", *(p1 + i), *(p2 + j));
		}
		printf("\n");
	}
}
void printset(int *p1,int i,int n)
{
	printf("Set %d = {", i);
		for (int j = 0; j < n; j++)
		{
			if(j==0)printf("%d",*(p1+j));
			else printf(", %d", *(p1 + j));
		}
		printf("}\n");
}