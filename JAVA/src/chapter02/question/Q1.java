package chapter02.question;

public class Q1
{
	public static void main(String[] args)
	{
		int i, j = 0;
		
		for (i = 0; i < 8; i++)
		{
			j += i;
		}
		
		System.out.printf("%d, %d\n", i, j);
	}
}