// Selection sort Program 


#include<stdio.h>
#include<conio.h>
void main()
{

    int arr[100],i,temp=0,j,n=0;
    system("cls");
    printf("Enter no. of elements you want in array");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("Enter array Elements");
        scanf("%d",&arr[i]);
    }
   
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[i]>arr[j]);
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nAfter sorting the array elements are:");
    for(i=0;i<=n;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
}