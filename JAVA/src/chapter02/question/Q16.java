package chapter02.question;

public class Q16
{
	public static void main(String[] args)
	{
		int a, b;
		boolean c, d;
		a = 10; b = 0;
		a *= b = 5;
		c = (a != b);
		d = (a == b);
		
		System.out.printf("%d, %b, %b\n", a, c, d);
	}
}