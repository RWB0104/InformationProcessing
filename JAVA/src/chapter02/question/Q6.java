package chapter02.question;

public class Q6
{
	public static void main(String[] args)
	{
		int a, b, c, result;
		a = 1;
		b = 2;
		c = 3;
		result = ++a + b++ + ++c;
		
		System.out.printf("%d %d %d %d", result, a, b, c);
	}
}