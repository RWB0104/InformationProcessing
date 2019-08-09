package chapter02.section009;

public class Exam1_1
{
	public static void main(String[] args)
	{
		int a[] = new int[5];
		int i;
		
		for (i = 0; i < 5; i++)
		{
			a[i] = i + 10;
		}
		
		for (i = 0; i < 5; i++)
		{
			System.out.printf("%4d", a[i]);
		}
	}
}