package chapter02.question;

public class Q24
{
	public static void main(String[] args)
	{
		int a = 2, b = 3, c = 4, d, e;
		d = a & b & ~b;
		e = a | b & c;
		
		System.out.printf("%d %d", d, e);
	}
}