#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,l,a=0,b=0;
	char s[20],s2[20],ch,ch2;	
	
	printf("Enter a String: ");
	gets(s);
	printf("Entered String: ");
	puts(s);
	l=strlen(s);
	
	printf("\nEnter a character u wish to change: ");
	ch=getchar();
	getchar();
		
	for(i=0;i<=l-1;i++)
	{
		if(s[i]==ch)
		{
			a++;
		}
		if(s[i]!=ch)
		{
			b++;
		}
	}
	
	if(a>0)
	{
	printf("\nCharacter is found");
	printf("\nEnter character to replace %c: ",ch);
	ch2=getchar();
	}
	else if(b>0)
	{
		printf("\nCharacter is not found");
		printf("\nNo Changes will be made!");
		exit(0);
		
	}
	
	for(i=0;i<=l-1;i++)
	{
		if(s[i]==ch)
		{
			s2[i]=ch2;
		}
		if(s[i]!=ch)
		{
			s2[i]=s[i];
		}
	}
	
	printf("\nString: %s",s2);
}
