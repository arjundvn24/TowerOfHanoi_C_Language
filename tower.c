#include <stdio.h> 


void sol(int n, char start, char end, char extra) 
{ 
	if (n == 1) 
	{ 
	
		printf("Place disk 1 from rod %c to rod %c \n", start, end); 
		return; 
	} 
	sol(n-1, start, extra, end); 
	printf("Place disk %d from rod %c to rod %c \n", n, start, end); 
	sol(n-1,extra, end, start); 
} 

int main() 
{ int n;
	printf("Enter number of disks \n");
	scanf(" %d",&n);
	sol(n, 'X', 'Z', 'Y'); 
	return 0; 
} 

