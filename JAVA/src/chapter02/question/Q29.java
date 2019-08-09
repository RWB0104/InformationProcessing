package chapter02.question;

public class Q29
{
	public static void main(String[] args)
	{
		int a, b = 10;
		
		for (a = 0; a < 5; ++a, b -= a);
		
		System.out.printf("%d, %d\n", a, b);
	}
}