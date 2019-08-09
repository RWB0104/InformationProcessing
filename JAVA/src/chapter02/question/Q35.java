package chapter02.question;

public class Q35
{
	public static void main(String[] args)
	{
		String str = "Sinagong";
		int n = str.length();
		char[] st = new char[n];
		n--;
		
		for (int k = 0; k <= n; k++)
		{
			st[k] = str.charAt(k);
		}
		
		for (int k = n; k >= 0; --k)
		{
			System.out.printf("%c", st[k]);
		}
	}
}