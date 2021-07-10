interface myInterface
{
	public void display();
	/*{
		System.out.println("Display method of my interface");
	}*/
}
public class interfaceExample implements myInterface
{
	public static void main(String args[])
	{
		interfaceExample d=new interfaceExample();
		d.display();
	}
	public void display()
	{
		System.out.println("Display method of my interface");
	}		
}
		