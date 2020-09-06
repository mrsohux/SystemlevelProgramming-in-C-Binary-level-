/*
Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3

*/


#include<stdio.h>
int Countbit(int iNo)
{
	int iCnt=0;
	
	while (iNo != 0)
    {
        if ((iNo & 1) == 1)
            iCnt++;
        iNo = iNo >> 1;
    }
	return iCnt;
}
int main()
{
	int iValue=0;
	
	int iRet=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet=Countbit(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
