/*
Write a program which checks whether 5th & 18th bit is On or OFF.
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL chkbit(UNIT iNo)
{
	int iResult=0;
	int iMask=0X00020010;
	
	iResult=iNo & iMask;
	
	if(iResult==iMask)
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
	scanf("%d",&bRet);
	
	bRet=chkbit(iNo);
	
	if(bRet==TRUE)
	{
		printf("5th & 18th bit is On ");
		
	}
	else{
		printf("5th & 18th bit is OFF");
	}
	return 0;
	
	
}
