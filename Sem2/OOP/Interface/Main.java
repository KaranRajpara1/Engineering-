import java.io.*;
class main
{
	int noSys=0;
	int number[]=new int[4];
	int y[]=new int[4];
	int number2[]=new int[4];
	int x=0;
	int count=0;
	public static void main(String args[]) throws Exception
	{
		DataInputStream d=new DataInputStream(System.in);
		System.out.println("Enter radiix: ");
		int noSys=Integer.parseInt(d.readLine());
		main d1=new main();
		switch(noSys)
		{
			case 2:
			d1.binary();
			break;

			case 10:
			d1.decimal();
			break;

			case 8:
			d1.octal();
			break;
			
			case 16:
			d1.hex();
			break;



			
			
		}
	}

	public void binary() throws Exception
	{
		DataInputStream d=new DataInputStream(System.in);
		System.out.println("Enter number: ");
		
		
			for(int j=0;j<4;j++)
			{
				number[j]=Integer.parseInt(d.readLine());
			}
			int x=0;
			x=number[0];
			number2[0]=x;
			int count=0;
	
			for(int i=0;i<3;i++)
			{
				count=0;
				if(number[i]==1)
				{
					count++;
				}
				if(number[i+1]==1)
				{
					count++;
				}
				if(count==1)
				{
					number2[i+1]=1;
					
				}
				if(count==2)
				{
					number2[i+1]=0;
				}
			}
			for(int i=0;i<4;i++)
			{
				System.out.print(number2[i]);	
			}
	}







	public void decimal() throws Exception
	{
		int a;
		int number3[]=new int[50];
		
		int number4[]=new int[50];
		int number5[]=new int[50];
		DataInputStream d=new DataInputStream(System.in);
    		System.out.println("Enter number:" );
    		int nDecimal=Integer.parseInt(d.readLine());
		int j=0;
		count=0;
   		while(nDecimal>0)
   		{
        			a=nDecimal%2;
        			number3[j]=a;
        			nDecimal=nDecimal/2;
        			j++;
        			count++;
    			}
			 for(int i=count-1;i>=0;i--)
        		{
          			System.out.println(number3[i]);
        		}
			int k=0;
			k=count-1;
			for(int i=0;i<count;i++)
			{
				int y=number3[k];
				number5[i]=y;
				k--;
			}
			//x=0;
			int z=0;
			z=number5[0];
			number4[0]=z;
			
			int count2=0;
	
			for(int i=0;i<count;i++)
			{
				count2=0;
				if(number5[i]==1)
				{
					count2++;
				}
				if(number5[i+1]==1)
				{
					count2++;
				}
				if(count2==1)
				{
					number4[i+1]=1;
					
				}
				if(count2==2)
				{
					number4[i+1]=0;
				}
			}
			for(int i=0;i<count;i++)
			{
				System.out.print(number4[i]);	
			}	
	}


	public void octal() throws Exception
	{
		
		int number[]=new int[4];
		int number2[]=new int[4];
		DataInputStream d=new DataInputStream(System.in);
		int i=0,a,sum=0;
    		System.out.println("Enter number: ");
    		int n=Integer.parseInt(d.readLine());
    
   		 while(n>0)
   		 {
       			 a=n%10;
        		sum=sum+(a*(int)(Math.pow(8,i)));
        		i++;
       			 n=n/10;
    		}
  		 System.out.println(sum);

		int b;
		int number3[]=new int[50];
		
		int number4[]=new int[50];
		int number5[]=new int[50];
		
    		int nDecimal=0;
		nDecimal=sum;
		int j=0;
		count=0;
   		while(nDecimal>0)
   		{
        			b=nDecimal%2;
        			number3[j]=b;
        			nDecimal=nDecimal/2;
        			j++;
        			count++;
    			}
			 for( i=count-1;i>=0;i--)
        		{
          			System.out.println(number3[i]);
        		}
			int k=0;
			k=count-1;
			for( i=0;i<count;i++)
			{
				int y=number3[k];
				number5[i]=y;
				k--;
			}
			//x=0;
			int z=0;
			z=number5[0];
			number4[0]=z;
			
			int count2=0;
	
			for( i=0;i<count;i++)
			{
				count2=0;
				if(number5[i]==1)
				{
					count2++;
				}
				if(number5[i+1]==1)
				{
					count2++;
				}
				if(count2==1)
				{
					number4[i+1]=1;
					
				}
				if(count2==2)
				{
					number4[i+1]=0;
				}
			}
			for( i=0;i<count;i++)
			{
				System.out.print(number4[i]);	
			}	
		
	}



	public void hex() throws Exception
	{
		int a;
		int number3[]=new int[50];
		int sum=0,count=0,j=0;
		int number4[]=new int[50];
		int number5[]=new int[50];
		DataInputStream d=new DataInputStream(System.in);
    		System.out.println("Enter number:" );
    		String z=d.readLine();	


		for(int i=0;i<=z.length()-1 && z.charAt(i)!='\0';i++)
       		 {
			char ch=z.charAt(i);
            		if(ch>='0' && ch<='9')
       			 {
           			 sum=sum+((ch-48)*(int)(Math.pow(16,z.length()-1-i)));
        		}
       	 		else
       		 	{
            			sum=sum+((ch-55)*(int)(Math.pow(16,z.length()-1-i)));
       			 }

       		 }

		while(sum>0)
        	{
            		a=sum%2;
            		number3[j]=a;
            		sum=sum/2;
            		count++;
            		j++;
        	}
        	for(int i=count-1;i>=0;i--)
        	{
            		System.out.println(number3[i]);
        	}

		int k=0;
			k=count-1;
			for(int i=0;i<count;i++)
			{
				int y=number3[k];
				number5[i]=y;
				k--;
			}
			//x=0;
			int w=0;
			w=number5[0];
			number4[0]=w;
			
			int count2=0;
	
			for(int i=0;i<count;i++)
			{
				count2=0;
				if(number5[i]==1)
				{
					count2++;
				}
				if(number5[i+1]==1)
				{
					count2++;
				}
				if(count2==1)
				{
					number4[i+1]=1;
					
				}
				if(count2==2)
				{
					number4[i+1]=0;
				}
			}
			for(int i=0;i<count;i++)
			{
				System.out.print(number4[i]);	
			}	
	}

		
}