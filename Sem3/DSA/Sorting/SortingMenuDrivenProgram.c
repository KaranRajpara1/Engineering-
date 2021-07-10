#include<stdio.h>

void shell(int arr[],int n);
void radix(int arr[],int n);
void insertion(int arr[],int n);

int main()
{
    int choice,n,i;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n===========================");
    printf("\n Sorting Algorithms");
    printf("\n===========================");
    printf("\n1.Shell Sort");
    printf("\n2.Radix Sort");
    printf("\n3.Insertion Sort");
    printf("\n===========================");
    printf("\nEnter choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        shell(arr,n);
        break;
    case 2:
        radix(arr,n);
        break;
    case 3:
        printf("\nInsertion Sort\n");
        insertion(arr,n);
        break;
    default :
        printf("\nInvalid Choice");
        break;
    }
    return 0;
}

void shell(int arr[],int n)
{
    int i,j,step;
    for(step=n/2; step>0; step=step/2)
    {
        for(i=step;i<n;i++)
        {
            int temp=arr[i];
            for(j=i; j>=step; j=j-step)
            {
                if(temp<arr[j-step])
                {
                    arr[j]=arr[j-step];
                }
                else
                {
                    break;
                }
            }
            arr[j]=temp;
        }
    }
    printf("\nSorted array: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

}


void radix(int arr[],int n)
{
   int bucket[10][10],bucket_cnt[10];
   int i,j,k,r,NOP=0,divisor=1,lar,pass;
   lar=arr[0];
   for (i=1; i<n; i++)
   {
        if (arr[i]>lar)
        {
            lar=arr[i];
        }
   }
   while (lar>0)
    {
      NOP++;
      lar=lar/10;
    }
   for (pass=0; pass<NOP; pass++)
   {
      for (i=0; i<10; i++)
      {
         bucket_cnt[i]=0;
      }
      for (i=0; i<n; i++)
      {
         r=(arr[i]/divisor)%10;
         bucket[r][bucket_cnt[r]]=arr[i];
         bucket_cnt[r]++;
      }
      i = 0;
      for (k=0; k<10; k++)
      {
         for (j=0; j<bucket_cnt[k]; j++)
         {
            arr[i] = bucket[k][j];
            i++;
         }
      }
      divisor=divisor*10;
      printf ("After pass %d : ", pass + 1);
      for (i=0; i<n; i++)
      {
        printf ("%d ", arr[i]);
      }
      printf ("\n");
   }
}

void insertion(int arr[],int n)
{
    int step,i;
    for (step=1; step<n; step++)
    {
        int key=arr[step];
        int j=step-1;
        while (key<arr[j] && j>=0)
        {
          arr[j+1]=arr[j];
          j--;
        }
        arr[j+1]=key;
  }
  for(i=0; i<n; i++)
  {
      printf("%d ",arr[i]);
  }
}
