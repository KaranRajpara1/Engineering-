import java.io.*;
class A1
{
	private int i;
	A1(int j)
	{
		i=j;
		System.out.println(i);
	}
}
class B1 extends A1
{
	B1()
	{
		// super.i=10; it will not work as i is private.
		// Although if you want to intiallise i then you can do like that..
		super(10);
	}
}
class superExample1
{
	public static void main(String args[])
	{
		
		B1 subOb=new B1();
		
		
	} 
}