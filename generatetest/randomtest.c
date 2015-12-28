/* random test generator */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int getnum(void);
int getnum1(void);
int main(void)
{

//comment by sachin
	int i,a=0,b=0,k=0,e,msec;
	clock_t start = clock(), diff;
	printf("Welcome to the math test! press any key to start your test.\n\n");
	system("PAUSE");
	srand(time(0));
	for(i=0;i<10;i++)
	{
		a=getnum();
		b=getnum1();
		printf("  %d * %d = ",b,a);
		scanf_s("%d",&e);
		if(e==a*b)
			{
				k++;
		}
	}
	diff = clock() - start;
	msec = diff * 1000 / CLOCKS_PER_SEC;
	printf("Time taken %d seconds %d milliseconds\n", msec/1000, msec%1000);
	printf("\n out of 10, you have got %d correct.\n\n\n",k);
	system("PAUSE");
	getchar();
	return 0;
}
int getnum(void)
{
	int a=(1+(rand()%10));
	if(a<=2)
		a+=2;
	if(a==10)
		a--;
	return a;
}
int getnum1(void)
{
	int b=(1+(rand()%20));
		if(b<=10)
			b+=6;
	return b;
}



