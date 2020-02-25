//lcm in c
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("\n\t ENTER 1ST NUMBER : ");
	scanf("%d",&n1);
	printf("\n\t ENTER 2ND NUMBER : ");
	scanf("%d",&n2);
	printf("\n------OUTPUT--------------------------------------\n");
	printf("\n\n\t %d AND  %d LCM IS : ",n1,n2);
	
	if( n1==1 || n2==1 )
	{
		if(n1>n2)
			printf("%d",n1);
		else
		   printf("%d",n2);
	}
	
	else if( n1==n2 )
	{
		printf("%d",n1);
	}
	
	else if( n1%2!=0 && n2%2!=0 )
	{
		printf("%d",n1*n2);
	}
	
	else if( n1%2==0 && n2%2==0 )
	{
		if(n2%n1==0 || n1%n2==0)
		{
			if(n1>n2)
				printf("%d",n1);
			else
				printf("%d",n2);
		}
		else
		{
			printf("%d",n1*n2/2);
		}
	}
	
	else if( (n1%2==0 && n2%2!=0) || (n1%2!=0 && n2%2==0) )
	{
		if( (n1==n2-1) || (n1==n2+1) )
		{
			printf("%d",n1*n2);
		}
		else
		{
			int i,j,ans;
			for(i=1;i<=10;i++)
 		    {
  				for(j=1;j<=10;j++)
  				{
	  				if(n1*i==n2*j)
	  				{
	  					ans=n2*j;
	  					break;
	  				}
	
				}
				if(ans==n1*i)
				{
					break;
				}
	  
 		    }
  			printf("%d ",ans);
		}
	}

	getch();
}
