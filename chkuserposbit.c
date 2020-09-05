/*
Write a program which accept one number and position from user andcheck whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE

*/


#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0
BOOL chkbit(UINT iNo,int iPos)
{
	 int imask=0X00000001;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if((iPos<1) || (iPos>32))
	{
		return 0;
	}
	imask =imask << (iPos-1);
	
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
{	UINT iNo=0;
	int iPos=0;
	BOOL bRet=FALSE;
	
	printf("Enter Number");
	scanf("%d",&iNo);
	
	printf("Enter Postion");
	scanf("%d",&iPos);
	
	bRet=chkbit(iNo,iPos);
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else{
		printf("FALSE");
	}
	return 0;
}


