#include<stdio.h>
int main()
{
    int array[20],n,c,d,swap;
    printf("Enter the number.\n");
    scanf("%d",&n);
    printf("Enter intrgers: %d\n",n);
        for(c=0;c<n;c++)
        {
            scanf("%d",&array[c]);
        }
        for(c=0;c<n-1;c++)
        {
            for(d=0;d<n-c-1;d++)
            {
                if(array[d]>array[d+1])
                {
                    swap =array[d];
                    array[d]=array[d+1];
                    array[d+1]=swap;
                }
            }
        }
    printf("List is a assending order:\n");
        for(c=0;c<n;c++)
        {
            printf("%d\n",array[c]);
        }
    return 0;
}