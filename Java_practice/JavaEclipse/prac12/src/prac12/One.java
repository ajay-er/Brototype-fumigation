package prac12;

public class One {  
int id;  
String name;  
 One (int id,String name){  
System.out.println("Ajay");
}  
}  
class Emp extends One{  
float salary;  
Emp(int id,String name,float salary){  
super(id,name);
this.salary=salary;
System.out.println("salary");  
}  
void display(){System.out.println(id+" "+name+" "+salary);}  
}  
class TestSuper5{  
public static void main(String[] args){  
Emp e1=new Emp(1,"ankit",45000f);  
e1.display();  
}}  