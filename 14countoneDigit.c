/*
Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4

*/

#include<stdio.h>


void countbits(int iNo,int iNo1)
{
	int iCnt=0,iCnt1=0;
	
	if((iNo==0) || (iNo1==0))
	{
		return;
	}
	
	while((iNo!=0) ||(iNo1!=0))
	{
		if((iNo & 1)==1)
		{
			iCnt++;
		}
		iNo=iNo>>1;

		if((iNo1 & 1)==1)
		{
			iCnt1++;
		}
		iNo1=iNo1>>1;

	}
	
	printf("%d %d",iCnt,iCnt1);
}

int main()
{
	int iValue=0,iValue1=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	printf("Enter Number2");
	scanf("%d",&iValue1);
	
	countbits(iValue,iValue1);
	
	
	return 0;
}
