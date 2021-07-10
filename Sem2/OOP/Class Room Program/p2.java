import java.io.*;
class p2
{
	String a=" ",b=" ",c=" ";
	public static void main(String args[]) throws Exception
	{
		DataInputStream d=new DataInputStream(System.in);
		System.out.println("Enter username:");
		String uname=d.readLine();
		System.out.println("Enter email:");
		String email=d.readLine();
		System.out.println("Enter phone number:");
		String phoneNo=d.readLine();	
		p2 d1=new p2(uname,email,phoneNo);
		d1.display();
	}
	p2(String a,String b,String c)
	{
		this.a=a;
		this.b=b;
		this.c=c;
	}
	public void display()
	{
		System.out.println("Username "+a);
		System.out.println("Email "+b);
		System.out.println("Phone Number "+c);
	}
}