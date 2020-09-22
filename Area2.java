import java.io.*;
import java.util.*;
abstract class Shape
{
	public abstract  void ToString();
		
	public void getmethod()
	{
		System.out.println("You will come to know about the number of sides.\n");
	}
	public abstract double getArea();
	public abstract double getPerimeter();
}
class Rectangle extends Shape
{
	protected double dim1;
	protected double dim2;
	public Rectangle(double dim1,double dim2)
	{
		this.dim1=dim1;
		this.dim2=dim2;
	}
	public void getmethod()
	{
		System.out.println("Number of sides is:4"); 
		
	}

	public double getArea()
	{
		 return dim1*dim2;
	} 
	public double getPerimeter()
	{
		 return 2*(dim1+dim2);

	}
	public void  ToString() 
	{
		System.out.println("Area:"+getArea()+"and Perimeter:"+getPerimeter()+"\n");
	}
}
class Triangle extends Shape
{
	protected double base;
	protected double side1;
	protected double side2;
	protected double height;
	public Triangle(double base,double side1,double side2,double height)
	{
		this.base=base;
		this.side1=side1;
		this.side2=side2;
		this.height=height;
	}
	public void getmethod()
	{
		System.out.println("Number of sides is :3");
	}
	public double getArea()
	{
		return 0.5f*base*height;
	}
	public double getPerimeter()
	{
		return(base+side1+side2);
	}
	public void  ToString()
	{
		System.out.println("Area:"+getArea()+"and Perimeter:"+getPerimeter()+"\n");
	}	
}
class Circle extends Shape
{
	protected double radius;
	public Circle(double radius)
	{
		this.radius=radius;
	}
	public void getmethod()
	{
		System.out.println("Number of sides is:0");
	}
	public double getArea()
	{
		return 3.14f*radius*radius;
	}
	public double getPerimeter()
	{
		return 2*3.14f*radius;
	}
	public void ToString()
	{
		System.out.println("Area:"+getArea()+"and Perimeter:"+getPerimeter()+"\n");
	}
}
class Area2
{
	public static void main(String args[])
	{
		Shape obj1=new Rectangle(6.0,2.0);   
		System.out.println("For Rectangle:\n");
		obj1.getmethod();
		obj1.getArea();
		obj1.getPerimeter();
		obj1.ToString();
		Shape obj2=new Triangle(4.0,2.0,3.0,3.0);
		System.out.println("For Triangle:\n");
		obj2.getmethod();
		obj2.ToString();
		Shape obj3=new Circle(6.0); 
		System.out.println("For Circle:\n");
		obj3.getmethod();
		obj3.ToString();
	}
}
