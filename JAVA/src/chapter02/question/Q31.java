package chapter02.question;

public class Q31
{
	public static void main(String[] args)
	{
		int i = 0, hap = 0;
		
		do
		{
			++i;
			hap += i;
		}
		
		while (i < 10);
		
		System.out.printf("���� %5d�Դϴ�.", hap);
	}
}