import java.io.*;
import java.util.*;
class DOB
{
	int dd,mm,yy;
	void getdetail()throws IOException
	{
		Scanner b= new Scanner(System.in);
		System.out.print("Enter the date:");
		dd=b.nextInt();
		System.out.print("Enter the month");
		mm=b.nextInt();
		System.out.print("Enter the year");
		yy=b.nextInt();
	}
	void printdetail()
	{
		System.out.println("Date:"+dd);
		System.out.println("month:"+mm);
		System.out.println("year:"+yy);
	}
}
class Student extends DOB
{
	double prn;
	String name;
	int marks;
	void getdetail()throws IOException
	{
		Scanner d= new Scanner(System.in);
		System.out.print("Enter the PRN:");
		prn=d.nextDouble();
		d.nextLine();
		System.out.print("Enter the name:");
		name=d.nextLine();
		System.out.print("Enter the marks:");
		marks=d.nextInt();
		super.getdetail();
	}
	void printdetail()
	{
		System.out.println("============ ** ============");
		System.out.println("PRN:"+prn);
		System.out.println("Name:"+name);
		System.out.println("marks:"+marks);
		super.printdetail();
	}
	public static Comparator<Student> marksComp=new Comparator<Student>(){
		public int compare(Student s1,Student s2)
		{
			return(s1.marks-s2.marks);
		}
	};
}
class StudentData
{
	static int n; 
	public static void main(String args[])throws IOException
	{
		int i;
		Scanner d= new Scanner(System.in);
		System.out.println("Enter the Number of Students:");
		n=d.nextInt();
		List<Student> a=new ArrayList<Student>();
		for(i=0;i<n;i++)
		{
			Student m=new Student();
			System.out.println("Enter the detail of student" +(i+1));
			m.getdetail();
			a.add(m);
		}
		int opt;
		int x=1;
		do{
			System.out.println("Menu\n1.Display\n2.Add\n3.Update\n4.Delete\n5.Grade\n6.Rank List");
			System.out.println("Enter your choice:");
			opt=d.nextInt();
			switch(opt)
			{
				case 1:
					for(i=0;i<n;i++)
						{
							System.out.println("Student "+(i+1)+" Details");
							a.get(i).printdetail();
						}
					break;
				case 2:
					insert(a);
					break;
				case 3:
					update(a);
					break;
				case 4:
					delete(a);
					break;
				case 5:
					grade(a);
					break;
				case 6:
					rank_list(a);
					break;
				default:
				System.out.println("Wrong Choiceee");
			}
			System.out.println("Do you want to continue('1 or 0'):");
			x=d.nextInt();
		}
		while(x==1);
				
	}
	 static void insert(List<Student> a)throws IOException
	{
		Student m=new Student();
		System.out.println("Enter the detail of student" +(n+1));
		m.getdetail();
		a.add(m);
		n++;
		System.out.println("Student details inserted");
	}
	
	static void update(List<Student> a)throws IOException
	{
		double p;
		Scanner d= new Scanner(System.in);
		System.out.println("Enter prn:");
		p=d.nextDouble();
		for(Student r:a)
			if(r.prn==p)
			{
			r.getdetail();
			System.out.println("Student info updated");
			break;
			}
	}
	 static void delete(List<Student> a)
	{
		double p;
		Scanner d= new Scanner(System.in);
		System.out.println("Enter prn:");
		p=d.nextDouble();
		for(Student r:a)
			if(r.prn==p)
			{
			a.remove(r);
			System.out.println("Student info found and deleted");
			n--;
			break;
			}
	}
	 static void search(List<Student> a)
	{
		System.out.println("Menu:\n1.By prn;\n2.By name\n3.By position");
		System.out.println("Enter your choice:");
		Scanner d= new Scanner(System.in);
		int ch=d.nextInt();
		switch(ch)
		{
			case 1:
				double p;
				System.out.println("Enter prn:");
				p=d.nextDouble();
				for(Student r:a)
					if(r.prn==p)
					{
					r.printdetail();
					break;
					}
					break;
			case 2:
			    String nm;
				System.out.println("Enter name:");
				nm=d.nextLine();
				for(Student r:a)
					if(r.name==nm)
					{
					r.printdetail();
					break;
					}
					break;
			case 3:
				int pos;
				System.out.println("Enter position:");
				pos=d.nextInt();
				a.get(pos-1).printdetail();
				break;
			default:
				System.out.println("Wrong choice");
		}
	}
	static void grade(List<Student> a)
	{
		int A=0,B=0,C=0,F=0;
		for(Student r:a)
		{
			if(r.marks>=81 && r.marks<=100)
				A++;
			else if(r.marks>=61 && r.marks<=80)
				B++;
			else if(r.marks>=41 && r.marks<=60)
				C++;
			else 
				F++;
		}
		System.out.println("Number of students with:\nA="+A+"\nB="+B+"\nC="+C+"\nF="+F);
	}
	static void rank_list(List<Student> a)
	{
		Collections.sort(a,Student.marksComp);
		int i;
		for(i=0;i<n;i++)
						{
							System.out.println("Student "+(i+1)+" Details");
							a.get(i).printdetail();
						}
	}
		
}
