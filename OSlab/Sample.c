/*Name of the Candidate:A.Annapurna
Roll No:204G1A0513
Title of the Experiment:CPU scheduling using FCFS Algorithm
Date of Creation:30-08-2022
Date of Execution:30-08-2022
*/
// Source Code
 #include <stdio.h>
 #include<conio.h>
 int main(){
	printf("Hello World\n");
  void main()
{
	int num,res=0;
	clrscr();
	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	res=prime(num);
	if(res==0)
		printf("\n%d IS A PRIME NUMBER",num);
	else
		printf("\n%d IS NOT A PRIME NUMBER",num);
	getch();
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
