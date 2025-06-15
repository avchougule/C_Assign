//5)Eliminate vowels from string

#include<stdio.h>
void main()
{
	char ch[5];
	printf("Please your string \n");
	for(int i=0;i<5;i++)
	{
		scanf("%c",&ch[i]);
	}
	printf("\n BY eleminating vowel from String : ");
	for(int i=0;i<5;i++)
	{
		if(ch[i]=='a')
		{ 
			continue;
		}
		else if(ch[i]=='e')
		{
			continue;
		}
		else if(ch[i]=='i')
		{
			continue;
		}
		else if(ch[i]=='o')
		{
			continue;
		}
		else if(ch[i]=='u')
		{
			continue;
		}
		else if(ch[i]=='s')
		{
			continue;
		}
		else
		{
		printf("%c",ch[i]);	
		}
	}
}
