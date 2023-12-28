//mohanna hashemi 40223084
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    char A[n+1];

    printf("enter your phrase:\n");
    scanf("%s", A);
    for (int i=0;i<n;i++)
    {
        for( int j = 0 ; j< n-2*i; j++)
        {
            if(A[j]==A[j+1])
            {
                for(int x=j ; x<n-2*i; x++)
                {
                    A[x]= A[x+2];
                }
                printf("%s\n",A);
            }
        }
        
    }
    printf("%s\n",A);
}