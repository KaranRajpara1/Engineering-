#include<stdio.h>
#include<conio.h>
int InterPol_Search(int a[],int i,int j,int key);
int IndexSequential(int a[],int n,int key);

void main()
{
 int a[30],key,mid,p,q,k,n,i,result,op;
 do
 {
  printf("\n1) Interpolation Search\n2) Index Sequential Search\n3) Quit\n");
  printf("Enter your choice: ");
  scanf("%d",&op);
  switch(op)
  {
   case 1:printf("\n Enter Total No. of Elements: ");
             scanf("%d",&n);
             printf("\n Enter a sorted list of %d elements : ",n);
            for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            printf("\n Enter the element to searched : ");
            scanf("%d",&key);
            result=InterPol_Search(a,0,n-1,key);
            if(result==-1)
            printf("\n Not found :");
            else
            printf("\n Found at location=%d",result);
            break;
   case 2:printf("\n Enter Total No. of Elements:");
            scanf("%d",&n);
            printf("\n Enter a list of %d elements:",n);
            for(i=0;i<n;i++)
            scanf("%d",&key);
            result=IndexSequential(a,n,key);
            if(result==-1)
            printf("\n Not found");
            else
            printf("\n Found at location =%d",result);
            break;
  }
}while(op!=3);
 getch();
 }
int InterPol_Search(int a[],int i,int j,int key)
{
 int c,mid;
 if(i>j)
 return (-1);
 if(j>i)
 c=(key-i)/(j-i);
 else
 c=0;
 mid=i;
 if(c>0)
 mid=i+(j-i)/c;
 if(key==a[mid])
 return(mid);
 if(key>a[mid])
 return(InterPol_Search(a,mid+1,j,key));
 return(InterPol_Search(a,i,mid-1,key));
}
 int IndexSequential(int a[],int n,int key)
{
 int keys[6],index[6],i,j,temp,n1,start;
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(a[j]>a[j+1])
 {
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
 }
 n1=0;
 for(i=0;i<n;i=i+4)
 {
keys[n1]=a[i];
index[n1]=i;
n1++;
 }
 if(key<keys[0])
  return(-1);
 for(i=0;i<n;i++)
  if(key<keys[i])
   break;
   start=index[i-1];
 for(i=start;i<start+4&&i<n;i++)
 if(a[i]==key)
 return (i);
 return(-1);
}
