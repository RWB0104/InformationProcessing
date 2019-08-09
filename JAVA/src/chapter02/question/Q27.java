package chapter02.question;

public class Q27
{
	static int i, j;
	
	public static void main(String[] args)
	{
		i = 10;
		j = 20;
		
		change();
		
		System.out.printf("i = %d, j = %d\n", i, j);
	}
	
	static void change()
	{
		int temp;
		temp = i;
		i = j;
		j = temp;
	}
}