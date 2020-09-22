import java.io.*;
import java.util.*;
public class bufferedreader
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader reader=new BufferedReader(new InputStreamReader(System.in));
		int i=0;
		do
		{
			System.out.println("Enter your name");
			String name=reader.readLine();
			Scanner s=new Scanner(System.in);
			System.out.println("Enter your id");
			int id=s.nextInt();
			System.out.println("Enter your salary");
			float salary=s.nextFloat();
			System.out.println("Name entered is "+name);
			System.out.println("Id is "+id);
			System.out.println("Salary is "+salary);
			i++;
		}while(i<3);
	}
}