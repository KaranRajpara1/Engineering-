import java.io.*;
class A
{
	 int i;
	 int j;
	void showij()
	{
		System.out.println("i: "+i+"\tj: "+j);
	}
	
}
class B extends A
{
	int k;
	void showk()
	{
		System.out.println("k: "+k);
	}
}
class Access
{
	public static void main(String args[])
	{
		A superOb=new A();
		B subOb=new B();
		superOb.i=10;
		superOb.j=20;
		System.out.println("Content of superclass object:");
		superOb.showij();
	
		subOb.i=7;
		subOb.j=8;
		subOb.k=9;
		System.out.println("Content of subclass object:");
		subOb.showij();
		subOb.showk();
	}
}