/*
Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.
Input : 577
Output : 1
*/

#include<stdio.h>

typedef unsigned int UINT;


UINT ChkBit(UINT iNo)
{
	int imask=0X00000240;
	
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






