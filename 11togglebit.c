/*
Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.
Input : 137
Output : 201
*/

#include<stdio.h>


typedef unsigned int UINT;


UINT ChkBit(UINT iNo)
{
	int imask=0X0000040;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	int iResult=iNo ^ imask;
	
		return iResult;

}

int main()
{
	int iNo=0;
	UINT uRet=0;
	printf("Enter Number");
	scanf("%d",&iNo);
	
	uRet=ChkBit(iNo);
	printf("%d",uRet);
	return 0;
	
}






