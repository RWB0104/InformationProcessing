package chapter02.section009.question;

public class Q3
{
	public static void main(String[] args)
	{
		String str = "Programming!";
		int n = str.length();
		char[] st = new char[n];
		n--;
		
		for (int k = n; k >= 0; k--)
		{
			st[n - k] = str.charAt(k);
		}
		
		for (char k : st)
		{
			System.out.printf("%c", k);
		}
	}
}