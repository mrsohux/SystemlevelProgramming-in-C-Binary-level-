/*
Write a program which accept one number and position from user and off that bit. Return modified number.
Input : 10 2
Output : 8
*/

#include<stdio.h>
typedef unsigned int UINT;

int chkbit(UINT iNo,int iPos)
{
	int iMask=0X00000001;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	if((iPos<1) ||(iPos>32))
	{
		return 0;
	}
	iMask=iMask << (iPos-1);
	int iResult=iMask ^ iNo;
	
	return iResult;
}

int main()
{	UINT iNo=0;
	int iPos=0,iRet=0;
	
	
	printf("Enter Number");
	scanf("%d",&iNo);
	
	printf("Enter Postion");
	scanf("%d",&iPos);
	
	iRet=chkbit(iNo,iPos);
	printf("%d",iRet);
	return 0;
}


