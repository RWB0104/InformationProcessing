package chapter02.question;

public class Q45
{
	public static void main(String[] args)
	{
		int i = 0, hap = 0;
		
		do
		{
			++i;
			hap += i;
		}
		
		while (i < 100);
		
		System.out.printf("1���� 100������ ���� %5d�Դϴ�.\n", hap);
	}
}