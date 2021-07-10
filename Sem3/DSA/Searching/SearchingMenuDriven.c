#include<stdio.h>

void menu();
int interpolation(int a[],int i,int j,int key);

void main()
{
    int a[50],key,i,ans,choice,n;
    while(choice != 2)
    {
        menu();
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter No. of Element:");
                scanf("%d",&n);
                printf("\n Enter array elements in sorted manner: ",n);
                for(i=0; i<n ;i++)
                {
                    scanf("%d",&a[i]);
                }
                printf("\nEnter searching element: ");
                scanf("%d",&key);
                ans=interpolation(a,0,n-1,key);
                if(ans == -1)
                {
                   printf("\nElement %d not found :",key); ;
                }
                else
                {
                    printf("\nElement is present at index =%d",ans);
                }
                break;
            case 2:
                break;
            default :
                printf("\nInvalid choice");
                break;
        }
    }
}

 void menu()
 {
    printf("\n\n============================");
    printf("\n Searching Methods");
    printf("\n============================");
    printf("\n1.Interpolation Search");
    printf("\n2.Exit");
    printf("\n============================");
    printf("\nEnter choice: ");
 }


int interpolation(int a[],int i,int j,int key)
{
     int c,mid;
     if(i>j)
     {
        return -1;
     }
     if(j>i)
     {
        c=(key-i)/(j-i);
     }
     else
     {
        c=0;
     }

     mid=i;
     if(c>0)
     {
         mid=i+(j-i)/c;
     }
     if(key==a[mid])
     {
         return(mid);
     }
     if(key>a[mid])
     {
         return(interpolation(a,mid+1,j,key));
     }

     return(interpolation(a,i,mid-1,key));
}
