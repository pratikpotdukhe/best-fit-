#include<stdio.h>
void main(){
	int b[20],p[20][2],m,n,i,j;
	printf("Enter no of blocks:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
              printf("Enter size of block %d :",i+1);
               scanf("%d",&b[i]);
	}
	printf("Enter no of process :");
	scanf("%d",&n);
	for(j=0;j<n;j++) {
	printf("Enter size of process %d :",j+1);
		scanf("%d",&p[j][0]);
		p[j][1]=-1;
	}
for(i=0;i<n;i++)
	{
	int bestIdx = -1; 
		for(j=0;j<m;j++)
		{
		if (b[j] >= p[i][0]) 
            { 
                if (bestIdx == -1) 
                    bestIdx = j; 
                else if (b[bestIdx] > b[j]) 
                    bestIdx = j; 
            } 
        } 
  if (bestIdx != -1) 
        {  
            p[i][1] = bestIdx; 
            b[bestIdx] -=p[i][0]; 
        } 
	}
	printf("\n  process no \t process size \t block allocated");
	for(i=0;i<n && p[i][1]!=-1;i++)
	{
		printf("\n%d\t\t%d\t\t%d",i+1,p[i][0],p[i][1]+1);
	}
}

