package chapter02.question;

public class Q46
{
	public static void main(String[] args)
	{
		int numAry[] = { 0, 0, 0, 0, 3 };
		int i, j;
		
		for (j = 4; j >= 0; --j)
		{
			for (i = 4; i > j; --i)
			{
				numAry[j] += numAry[i];
			}
		}
		
		for (j = 0; j < 5; ++j)
		{
			System.out.printf("%d ", numAry[j]);
		}
	}
}