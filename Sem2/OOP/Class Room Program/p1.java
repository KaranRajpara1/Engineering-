import java.io.*;
class p1
{
	public static void main(String args[]) throws Exception
	{
		DataInputStream d=new DataInputStream(System.in);
		System.out.println("Enter first number: ");
		int a=Integer.parseInt(d.readLine());	
		System.out.println("Enter second number: ");
		int b=Integer.parseInt(d.readLine());
		p1 d1=new p1();
		d1.ADD(a,b);
	}
	public void ADD(int x,int y)
	{
		int z=Square(x+y);
		System.out.println(z);
	}
	public int Square(int x)
	{
		return multiply(x*x);
	}
	public int multiply(int x)
	{
		return (x*10);
	}
}		
		