#include<stdio.h>

int main()
{
	int i,size,top=-1,choise,find_value,a=0,change,first,second,temp;
	int stc[size];
	
	printf("=============================================");
	printf("\n<<<<<----- STACK OPERATIONS ----->>>>>");
	printf("\n=============================================");
	
	printf("\n\nEnter the size of your STACK :");
	scanf("%d",&size);
	printf("\nYour STACK is created successfully with your allocated size.");
	printf("\n=============================================");
	
	do
	{
		printf("\n\n<<<<<----- CHOISE SELECTION AS LISTED BELOW ----->>>>>");
		printf("\n\nPress 1 for the PUSH operation.");
		printf("\nPress 2 for the POP operation.");
		printf("\nPress 3 for the PEEP operation.");
		printf("\nPress 4 for the CHANGE operation.");
		printf("\nPress 5 for the DISPLAY STACK.");
		printf("\nPress 6 for EXITE.");
		printf("\n=============================================");
		printf("\n\nEnter your choise for the operation you want to perform :");
		scanf("%d",&choise);
		
		switch(choise)
		{
			case 1:
			{
				if(top==(size-1))
				{
					printf("\n=============================================");
					printf("\nNow STACK is OVERFLOW.");
					printf("\n=============================================");
				}
				else
				{
					top+=1;
					printf("\n\nEnter your STACK element :");
					scanf("%d",&stc[top]);
					printf("\nYour PUSH operation completed successfully.");
					printf("\n=============================================");
				}
				break;
			}	
			case 2:
			{
			    if(top==(-1))
				{
					printf("\n=============================================");
					printf("\nNow STACK is UNDERFLOW.");
					printf("\n=============================================");
				}
				else
				{
					top-=1;
					printf("\nYour POP operation completed successfully.");
					printf("\n=============================================");
				}
				break;	
			}
			case 3:
			{
			   printf("\n=============================================");
			   printf("\nEnter the value you want to find from STACK :");
			   scanf("%d",&find_value);
			   
			   for(i=top;i>=0;i--)
			   {
			   	  if(find_value==stc[i])
			   	  {
			   	  	a=1; 
				    printf("\n\nThe value is [%d] and place of the value is (%d) element in STACK.",stc[i],i);
				    printf("\n=============================================");
				    break;
			      }
			   }
			   if(a!=1)
			   {
				  	printf("\n\nThe value you enter is not founded in STACK.");
				  	printf("\n=============================================");
			   }  
			   break;
			}	
			case 4:
			{
				if(top==(-1))
				{
					printf("\n=============================================");
					printf("\nYour STACK is empty.");
					printf("\n=============================================");
				}
				else
				{
					printf("\n=============================================");
					printf("\nEnter the two positions 0 to %d you want to interchange:",top);
					scanf("%d", &first);
                    scanf("%d", &second);
                    
                    if (first < 0 || second < 0 || first > top || second > top)
                    {
                       printf("\nInvalid positions. Positions should be between 0 and %d.\n", top);
                    }
                    else if (first == second)
                    {
                      printf("\nPositions are the same. No interchange needed.\n");
                    }
                    else
                    {
                      int temp = stc[first];
                      stc[first] = stc[second];
                      stc[second] = temp;

                      printf("\nInterchange operation completed successfully.");
                    }

                    printf("\n=============================================");
                }
			
				break;
			}	
			case 5:
			{
				if(top==(-1))
				{
					printf("\n=============================================");
					printf("\nYour STACK is empty.");
					printf("\n=============================================");
				}
				else
				{
				   printf("\n=============================================");
				   printf("\n\nYour STACK's elements are :");
				   for(i=top;i>=0;i--)
				   {
					 printf("\n\t[%d]",stc[i]);
				   }
				   printf("\n=============================================");
			    }
			    break;
			}
			case 6:
			    printf("\n=============================================");
				printf("\n\t\tTHNK YOU SO MUCH");
				printf("\n=============================================");
				return 0;	
		}
	}while(choise!=6);
	
	return 0;
}
