package chapter02.question;

public class Q26
{
	public static void main(String[] args)
	{
		int i = 0, hap = 0;
		
		// Ȥ�� true
		while (i < 100)
		{
			++i;
			hap += i;
			
			if (i >= 100)
			{
				break;
			}
		}
		
		System.out.printf("1���� 100������ ���� %d�Դϴ�.\n", hap);
	}
}