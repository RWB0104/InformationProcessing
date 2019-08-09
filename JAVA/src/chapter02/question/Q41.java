package chapter02.question;

public class Q41
{
	static int a, b, c;
	
	public static void main(String[] args)
	{
		a = 0;
		b = 5;
		c = 0;
		
		prnt();
		
		System.out.printf("a = %d, b = %d, c = %d\n", a, b, c);
	}
	
	static void prnt()
	{
		while (a < b)
		{
			++a;
			c = c + a;
			prnt();
		}
	}
}