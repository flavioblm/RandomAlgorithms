#include <stdio.h>

int main(){
        /*Given an array of integers, write a program to find 
        the contiguous subarray with the largest sum.*/
	int a[] = {-1 ,-1 ,4, 5 ,-2 , 66 , -10 , -5 , 3 , 1, 100 , -10}; 
	int length = sizeof(a) / sizeof(int);
	int s[length];
	
	int k = 0;
	s[0] = a[0]; 
	int maxSum = 0;

	for(int i = 1 ; i < length ; i++)
		{
		
		if( (a[i]+s[i-1]) > a[i] ){
			s[i] = s[i-1] + a[i] ;
		}
		
		else{
			s[i]=a[i];
		}
		
		if (s[i] > s[maxSum]){
			maxSum=i; 
		}
	}
	
	int start = maxSum ;
	
	do
	{
		if( a[start] == s[start] ){ break ;}
			start--;
	}
	while(start != 0);

	printf(" from %d to %d" , start , maxSum);
	
}
