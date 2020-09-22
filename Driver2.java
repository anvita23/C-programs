import java.io.*;
import java.util.*;
interface Exam
{
	public void percent_cal();
	
}
interface Student2 
{
	public void calc();
}
class Result implements Exam, Student2
{	
		double marks1;
		double marks2;
		double marks3;
		double average;
		double percent;
		Result(double marks1,double marks2,double marks3)
		{
			this.marks1=marks1;
			this.marks2=marks2;
			this.marks3=marks3;
		}
	
		public void calc()
		{
			average=(marks1+marks2+marks3);
			System.out.println("Total marks:"+average);
		}
	

	public void percent_cal()
	{
		percent=average/300 *100;
		System.out.println("Percentage:" +percent);
	}
		
}
class Driver2
{
	public static void main(String args[])
	{
		double marks1;
		double marks2;
		double marks3;
		double average;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter marks of 1st subject:");
		marks1=sc.nextDouble();
		System.out.println("Enter marks of 2nd subject:");
		marks2=sc.nextDouble();
		System.out.println("Enter marks of third subject:");
		marks3=sc.nextDouble();
		Result obj=new Result(marks1,marks2,marks3);
		obj.calc();
		obj.percent_cal();
	}
}
