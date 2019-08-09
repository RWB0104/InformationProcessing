package chapter02.question;

public class Q26
{
	public static void main(String[] args)
	{
		int i = 0, hap = 0;
		
		// 혹은 true
		while (i < 100)
		{
			++i;
			hap += i;
			
			if (i >= 100)
			{
				break;
			}
		}
		
		System.out.printf("1에서 100까지의 합은 %d입니다.\n", hap);
	}
}