package chapter02.question;

public class Q19
{
	public static void main(String[] args)
	{
		int hap1, hap2;
		hap1 = 10 + 10 % 4 - 10 % 9;
		hap2 = 10 * 10 % 4 - 10 % 9 + 5;
		
		System.out.printf("%d  ,  %d\n", hap1, hap2);
	}
}