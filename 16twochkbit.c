/*
Write a program which accept one number , two positions from user and check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : FALSE

Input :15 1 4
Output :TRUE
*/


#include<stdio.h>

typedef unsigned int UNIT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chekBit(UNIT iNo,int ipos,int ipos2)
{
    int imask = 0x00000001;
	int imask2=0x00000001;
	int iResult=0,iResult2=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	if((ipos<1)||(ipos>32) & (ipos2<1)||(ipos2>32))
	{
		return 0;
	}
	imask=imask <<(ipos-1);
	
	imask2=imask2 <<(ipos2-1);
	
	iResult=imask & iNo;
	
	iResult2=imask2 & iNo;
		if((iResult==imask) && (iResult2==imask2))
		{
			return TRUE;
		}
		else{
			return FALSE;
		}
}



int main()
{
	UNIT iNo;
	BOOL bRet=FALSE;
	int ipos=0,ipos2=0;
	
	printf("Enter Number");
	scanf("%d",&iNo);
	
	printf("Enter Position");
	scanf("%d",&ipos);
	
	printf("Enter Position2");
	scanf("%d",&ipos2);
	
	bRet=chekBit(iNo,ipos,ipos2);
	
	if(bRet==TRUE)
	{
		printf("True");
	}	
	else
	{
		printf("False");
	}
	return 0;
}
