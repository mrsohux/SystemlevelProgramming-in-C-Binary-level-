/*
Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number.
Input : 137
Output : 713
*/


#include<stdio.h>

typedef unsigned int UNIT;

UNIT chkBit(UNIT iNo)
{
	int imask=0X00000240;
	
	int iResult=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iResult=iNo ^ imask;
	return iResult;
}

int main()
{
	int iNo;
	UNIT uRet=0;
	
	printf("Enter Number");
	scanf("%d",&iNo);
	
	uRet=chkBit(iNo);
	
	printf("%d",uRet);
	
	return 0;
}
