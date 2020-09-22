import java.io.*;
import java.util.*;
abstract class Employee 
{
	private String name, address;
	protected int basicSalary;
	public void getName()
	{
		System.out.println("name");
	}
	public void getAddress()	
	{	
			System.out.println("name");	
	}	
	public void getBasicSalary()	
	{
			System.out.println("name");
	}
	public void setAddress(String add)
	{	
		address = add;
	}	
	public void setName(String nm)	
	{	
		name = nm;
	}
	public void setBasicSalary(int  sal)
	{
		basicSalary = sal;	
	}
	public  abstract void getMonthlySalary();
}
class NormalEmployee extends Employee
{
	String name;
	String address;
	static int salary;
									
	Scanner sc=new Scanner(System.in);
	public void getName()
	{
		System.out.println("Enter name:");
		name=sc.nextLine();		
	}
	public void getAddress()
	{
		System.out.println("Enter address:");
		address=sc.nextLine();
	}
	public void getMonthlySalary()
	{
		System.out.println("Enter Monthly Salary:");
		salary=sc.nextInt();
	}
	public void setName(String name)
	{
		System.out.println("Name of the Employee"+name);
	}
	public void setAddress(String address)
	{
		System.out.println("Address of the Employee"+address);
	}
	public void setBasicSalary(int salary)
	{
		System.out.println("Salary of the Employee:"+salary);
	} 	
}
class BonusEmployee extends Employee
{
	NormalEmployee obj=new NormalEmployee();
	int bonus;
	int final1;
	int sal=obj.salary;
	BonusEmployee(int bonus)
	{
		this.bonus=bonus;
	}
	
	public void getMonthlySalary()
	{
		final1 = obj.salary + bonus;
		System.out.println ("Basic Salary with Bonus:"+final1);
	}
	
}
class Test2
{
	public static void main(String args[])
	{
		Employee obj1=new NormalEmployee();
		System.out.println("Normal Details of Employee:\n");
		obj1.getName();
		obj1.getAddress();
		obj1.getMonthlySalary();

		Scanner sc=new Scanner(System.in);
		System.out.println("Bonus Employee:\n");
		System.out.println("Enter monthly bonous salary");
		int bonus=sc.nextInt();
		Employee obj2=new BonusEmployee(bonus);
		obj2.getMonthlySalary();
	}
		
}
