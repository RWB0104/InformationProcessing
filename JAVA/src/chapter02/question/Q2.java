package chapter02.question;

public class Q2
{
	public static void main(String[] args)
	{
		int a = 12, b = 8, c = 2, d = 3;
		a /= b++ - c * d;
		
		System.out.printf("%d\n", a);
	}
}