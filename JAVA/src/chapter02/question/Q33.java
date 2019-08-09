package chapter02.question;

public class Q33
{
	static class CharClass
	{
		char a[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
	}
	
	public static void main(String[] args)
	{
		CharClass myVar = new CharClass();
		
		System.out.printf("%c, %c\n", myVar.a[1], myVar.a[2]);
	}
}