package chapter02.question;

public class Q25
{
	public static void main(String[] args)
	{
		int i, hap = 0;
		
		for (i = 0; i <= 10; ++i, hap += i);
		
		System.out.printf("%d, %d\n", i, hap);
	}	
}