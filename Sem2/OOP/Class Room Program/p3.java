import java.io.*;
class p3
{
	p3()
	{
	}
	p3(int x,int y)
	{
		
		if(x==1)
		{
			System.out.println((y)+" element is even");
		}
		
	}
	public static void main(String args[]) throws Exception
	{
		DataInputStream d=new DataInputStream(System.in);
		System.out.println("Enter number of elemant to be checked:");
		int n=Integer.parseInt(d.readLine());
		int arr[]=new int[n];
		int i=0;
		p3 d1=new p3();
		System.out.println("Enter elemants:");
		for(i=0;i<n;i++)
		{
			arr[i]=Integer.parseInt(d.readLine());
		}
		System.out.println("Even numbers are....");
		for(i=0;i<n;i++)
		{
			int ans=d1.check(arr[i]);
			p3 d2=new p3(ans,arr[i]);
		}
	}
	public int check(int x)
	{
		if(x%2==0)
		{
			return (1);
		}
		else if(x%2!=0)
		{
			return (2);
		}
		else
		{
		return 0;
		}
		
	}
}





