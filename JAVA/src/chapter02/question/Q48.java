package chapter02.question;

public class Q48
{
	public static void main(String[] args)
	{
		int i = 1, hap = 0;
		
		while (i < 10)
		{
			hap += i;
			i += 2;
		}
		
		System.out.printf("%d, %d\n", i, hap);
	}
}