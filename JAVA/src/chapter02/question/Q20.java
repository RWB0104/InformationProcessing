package chapter02.question;

public class Q20
{
	public static void main(String[] args)
	{
		int a, hap = 0;
		for (a = 0; a < 10; ++a, hap += a);
		
		System.out.printf("%d, %d\n", a, hap);
	}
}