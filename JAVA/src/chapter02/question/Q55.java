package chapter02.question;

public class Q55
{
	public static void main(String[] args)
	{
		int a[] = { 10, 30, 50, 70, 90 };
		int i, max, min;
		max = a[0];
		min = a[0];
		
		for (i = 0; i < 5; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
			}
			
			if (a[i] < min)
			{
				min = a[i];
			}
		}
		
		System.out.printf("%d\n", max);
		System.out.printf("%d\n", min);
	}
}