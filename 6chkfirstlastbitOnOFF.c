/*
Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.
*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL chkBit(UNIT iNo)
{
	int iMask=0X80000001;
	int iResult=0;
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
	int iNo=0;
	
	BOOL bRet=FALSE;
	
	printf("Enter Number");
	scanf("%d",&iNo);
	
	bRet=chkBit(iNo);
	
	if(bRet==TRUE)
	{
		printf("first and last bit is On ");
	}
	else{
		printf("first and last bit is Off");

	}
return 0;
}
