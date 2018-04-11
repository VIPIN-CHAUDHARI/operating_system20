for(i=0;i<Q;i++)
	{
		Safe_Sequence[i]=0;
		Allocated[i]=0;
		Executed[i]=0;
	}
	do
	{
	 for(i=0;i<Q;i++)
	 {
		if(Executed[i]==0)
		{
			if(current_P>0)
			{
				Allocated[i]++;
				current_P--;
			}

			if(Allocated[i]==Max[i])
			{
				Executed[i]=1;
				printf("Process %d executed\n",i);
				current_P=current_P+Allocated[i];
                Safe_Sequence[Process_Count]=i;
				Process_Count++;
			}
		}
	 }

	}while(Process_Count!=Q);

	printf("Safe sequence is: ");
	for(i=0;i<Q;i++)
	{
		printf("P%d\t",Safe_Sequence[i]);
	}
}
