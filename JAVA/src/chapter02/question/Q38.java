package chapter02.question;

public class Q38
{
	public static void main(String[] args)
	{
		int[][] a = { { 1, 1, 0, 1, 0 }, { 1, 0, 1, 0 } };
		int tot = 0;
		int totSu = 0;
		
		for (int i[] : a)
		{
			for (int j : i)
			{
				tot += j;
			}
			
			totSu = totSu + i.length;
		}
		
		System.out.printf("%d, %d\n", totSu, tot);
	}
}