#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
int main()
{
	pid_t a;
	int i,n,m;
	printf("Enter the number\n");
	a=fork();
	scanf("%d",&n);
	if(a==0)/*Child Process*/
	{
		for(i=n;i>=1;i=i/2)
		{
			printf("%d\n",i);
		}
	}
	else if(a>0)/*Parent Process*/
	{
		wait();
	}
	else
	{
		printf("The process not created");
	}
}
