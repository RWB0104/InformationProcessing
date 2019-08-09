package chapter02.section009;

public class Exam0_1
{
	public static void main(String[] args)
	{
		int i, j= 0;
		
		for (i = 0; i < 8; i++)
		{
			j = i + j;
		}
		
		System.out.printf("%d, %d", i, j);
	}
}