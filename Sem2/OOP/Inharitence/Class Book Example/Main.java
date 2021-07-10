import java.io.*;
class shape
{
	float length,width=0F;
	
}
class Rectangle extends shape
{
	public void area()
	{
		System.out.println("Area of Rectangle is "+length*width);
	}
}
class Triangle extends Rectangle
{
	Triangle()
	{
	}
	Triangle(float length,float width)
	{
		super.length=length;
		super.width=width;
	}
	public void area()
	{
		
		System.out.println("Area of Triangle is "+0.5*length*width);
		super.area();
	}
}
class Main
{
	public static void main(String args[])throws Exception
	{
		DataInputStream d=new DataInputStream(System.in);
		System.out.println("Enter length :");
		float length=Float.parseFloat(d.readLine());
		System.out.println("Enter width : ");
		float width=Float.parseFloat(d.readLine());
		Triangle t=new Triangle(length,width);
		t.area();
	}
}