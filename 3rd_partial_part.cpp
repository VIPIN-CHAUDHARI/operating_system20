int main()
{
	int Q;
	int P;
	int i;
	printf("Enter the number of Processes: ");
	scanf("%d",&Q);
	printf("Enter the number of Resources: ");
	scanf("%d",&P);

	int Available=P;

	int Max[Q],Max_total=0;
	printf("Enter the Maximum reQuirement of each Process: \n");
	for(i=0;i<Q;i++)
	{
		printf("Maximum reQuirement of Process %d: ",i+1);
		scanf("%d",&Max[i]);
		if(Max[i]>P)
	    {
			printf("Maximum reQuirement cannot be greater than total number of resources.\n Enter reQuirement again: ");
		    scanf("%d",&Max[i]);
			}
	    Max_total=Max_total+Max[i];
	}
		if(Max_total>=P+Q)
		{
            printf("Conditions are not satisfying for safe state. \n This is in unsafe state. so There are chances of dead lock.\n Do u want to continue\n('Enter 1 if u want to continue 0 otherwise')\n");
            int ch;
            scanf("%d",&ch);
            if(ch!=1)
			return 0;
		}
		else
		{
			printf("The Given System is in a safe state\n");
		}
      Check_State(Max,Available,Q);
	return 0;
}
