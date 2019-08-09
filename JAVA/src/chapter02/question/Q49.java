package chapter02.question;

public class Q49
{
	public static void main(String[] args)
	{
		String str = "I am Tom!";
		int n = str.length();
		char[] st = new char[n];
		char temp;
		
		for (int k = 0; k < n; k++)
		{
			st[k] = str.charAt(k);
		}
		
		n--;
		
		for (int k = 0; k < n; k++)
		{
			temp = st[k];
			st[k] = st[n];
			st[n] = temp;
			n--;
		}
		
		for (char a : st)
		{
			System.out.printf("%s", a);
		}
	}
}