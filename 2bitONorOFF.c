/*
Write a program which checks whether 15th bit is On or OFF.
*/


#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	int imask=0X00004000;
	
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
	int iNo=0;
	BOOL bRet=FALSE;
	
	printf("Enter Number");
	scanf("%d",&iNo);
	
	bRet=ChkBit(iNo);
	
	if(bRet==TRUE)
	{
		printf("15th bit is ON");
		
	}
	else{
		printf("15th Bit is off");
	}
	return 0;
	
}
