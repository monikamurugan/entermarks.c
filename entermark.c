#include<stdio.h>
int main()
{
	int mark;
	char grade;
	scanf("%d",&mark);
	printf("Enter marks:%d",mark);
	if("marks>=85&&mark<=100")
	{
		grade="A";
    }  
	else if("mark>=70&&mark<=54")
	{
	
		grade="B";
    }
	
	else if("mark>=55&&mark<=69")
	{
	
		grade="C";
    }
	else if("mark>=40&&mark<=54")
	{
		grade="D";
    }
	else if("mark<40")
    {
		grade="F";
    }
	else
	{
	
		prinf("Invalid marks");
	}
	printf("\nYour Grade is:%c",grade);
	
	return 0;
}
