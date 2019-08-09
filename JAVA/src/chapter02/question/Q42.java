package chapter02.question;

class CharClass
{
	String a[] = { "Seoul", "Incheon", "Kyonggi", "Daejun", "Daegu", "Pusan" };
}

public class Q42
{
	public static void main(String[] args)
	{
		CharClass myVar = new CharClass();
		String str01 = myVar.a[3];
		
		System.out.printf("%s", str01);
	}
}