#include<stdio.h>
#include<conio.h>
void Check_State(int *Max,int Avail,int Q)
{
	int i;
	int current_P;
	current_P=Avail;

    int Safe_Sequence[Q];
	int Process_Count=0;
	int Allocated[Q];
	int Executed[Q];
