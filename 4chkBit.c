/*
Write a program which checks whether 7th & 8th & 9th bit is On or
OFF.
*/


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL chkBit(UNIT iNo)
{
	int iMask=0X000001120;
	
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
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
	
	if(bRet == TRUE)
	{
		printf("7th & 8th & 9th bit is On");
	}
	else{
		printf("one of the from 7th & 8th & 9th bit is OFF");
	}
}
