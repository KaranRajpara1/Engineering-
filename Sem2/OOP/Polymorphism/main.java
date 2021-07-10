import java.io.*;
class shape
{
	int l=0,b=0;
	public void area()
	{
	}
}
class rectangle extends shape
{
	rectangle()throws Exception
	{
		DataInputStream d=new DataInputStream(System.in);
		System.out.println("Enter two number: ");
		int x=Integer.parseInt(d.readLine());
		int y=Integer.parseInt(d.readLine());
		l=x;
		b=y;
	}
	public void area()
	{
		System.out.println("Area of rectangle is "+(l*b));
	}
}
class triangle extends rectangle
{
	triangle()throws Exception
	{
		area();
	}
	
	public int area()
	{
		super.area();
		//System.out.println("Area of triangle is "+(0.5*l*b));
		return (area(l*b));
	}
	public void area(int x)
	{
		System.out.println("Area of triangle is "+(0.5*x));
	}
}
class main
{
	public static void main(String args[]) throws Exception
	{
		
		triangle t=new triangle();
	}		
}