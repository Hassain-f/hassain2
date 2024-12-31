#include<stdio.h.>
int findmajorityelement(int arr[],int n)
{
    int candidate=-1,count=0;
    int i;
    for(i=0; i<n; i++)
    {
        if(count==0)
        {
        candidate=arr[i];
        count=1;
        }
        else if (arr[i]==candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count=0;
    for(i=0;i<n; i++)
    {
        if(arr[i]==candidate)
        {
            count++;
        }
    }
    if(count>n/2){
    return candidate;
    }else{
        return-1;
    }
    }
    int main()
    {
       int n,i;
        printf("Enter the size of the array:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the elements of the array:\n");
        for(i=0;i<n; i++)
        {
            scanf("%d",&arr[i]);
            int result =findmajorityelement(arr,n);
            if(result!=-1)
            {
               printf("the majority element is%d\n",result);
            }else{
                printf("no majority element exists in the array\n");
            }
        }
    }





