package chapter02.question;

public class Q34
{
	public static void main(String[] args)
	{
		int i = 0, hap = 0;
		
		for (i = 1; i <= 5; ++i, hap += i)
		{
			System.out.printf("���� %d %4d�Դϴ�.\n", i, hap);
		}
	}
}