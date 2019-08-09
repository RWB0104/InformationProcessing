package chapter02.question;

public class Q22
{
	public static void main(String[] args)
	{
		int a = 32, b, c;
		b = a << 2;
		a >>= 3;
		c = a << 4;
		
		System.out.printf("%d, %d, %d\n", a, b, c);
	}
}