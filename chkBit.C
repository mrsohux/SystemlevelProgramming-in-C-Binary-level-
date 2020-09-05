/*
Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL chkBit(UNIT iNo)
{
	int imask=0X04082020;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	int iResult=iNo & imask;
	
	if(iResult==imask)
	{
		return TRUE;
	}
	else{
		return FALSE;
	}
}
int main()
{
	int iNO=0;
	BOOL bRet=FALSE;
	
	printf("Enter Number");
	scanf("%d",&iNO);
	
	bRet=chkBit(iNO);
	
	if(bRet==TRUE)
	{
		printf("7th & 15th & 21st , 28th bit is On");
	}
	else{
		printf("one of the from 7th or 15th or 21st or 28th bit is OFF");
	}
}
