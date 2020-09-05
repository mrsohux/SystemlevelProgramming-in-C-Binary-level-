/*
Write a program which accept one number and position from user and
toggle that bit. Return modified number.
Input : 10 3
Output : 14
*/


#include<stdio.h>

typedef unsigned int UNIT;

UNIT toggleBit(UNIT iNo,int ipos)
{
	int imask=0x00000001;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	if((ipos<1)||(ipos>32))
	{
		return 0;
	}
	imask=imask<<(ipos-1);
	
	int iResult=imask ^ iNo;
	return iResult;
}



int main()
{
	UNIT iNo;
	UNIT uRet=0;
	int ipos=0;
	
	printf("Enter Number");
	scanf("%d",&iNo);
	
	printf("Enter Position");
	scanf("%d",&ipos);
	
	uRet=toggleBit(iNo,ipos);
	
	printf("%d",uRet);
	
	return 0;
}
