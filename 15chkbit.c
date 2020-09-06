/*
Write a program which accept one number from user and check whether 9th or 12th bit is on or off.
Input : 257
Output : TRUE
*/


#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0
BOOL chkbit(UINT iNo)
{
	int iMask=0X10000001;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	int iResult=iMask & iNo;
	
	if(iResult==iMask)
	{
		return TRUE;
	}
	else{
		FALSE;
	}
}

int main()
{	UINT iNo=0;
	int iPos=0;
	BOOL bRet=FALSE;
	
	printf("Enter Number");
	scanf("%d",&iNo);
	
	bRet=chkbit(iNo);
	if(bRet==TRUE)
	{
		printf("TRUE");

	}
	else{
		printf("FALSE");
	}
	return 0;
}


