package chapter02.section009;

class Employee
{
	String name;
	int idNum;
	int salary;
	boolean sex;
}

public class Exam3_1
{
	public static void main(String[] args)
	{
		Employee myJik = new Employee();
		myJik.name = "ȫ�浿";
		myJik.idNum = 17001;
		myJik.salary = 4500000;
		myJik.sex = true;
		
		System.out.printf("%s\n", myJik.name);
		System.out.printf("%d\n", myJik.idNum);
		System.out.printf("%d\n", myJik.salary);
		System.out.printf("%b\n", myJik.sex);
	}
}