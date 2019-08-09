package chapter02.question;

public class Q36
{
	public static void main(String[] args)
	{
		int i = 1, hap = 0;
		
		while (i <= 6)
		{
			hap += i;
			i += 2;
		}
		
		System.out.printf("i = %d, hap = %dÀÔ´Ï´Ù.\n", i, hap);
	}
}