package chapter02.question;

public class Q43
{
	static class IntClass
	{
		int a, b;
	}
	
	public static void main(String[] args)
	{
		IntClass myVar = new IntClass();
		myVar.a = 10;
		myVar.b = 20;
		
		prnt(myVar);
		
		System.out.printf("a = %d, b = %d\n", myVar.a, myVar.b);
	}
	
	static void prnt(IntClass myVar)
	{
		switch (myVar.b >> 3)
		{
			case 1:
				myVar.a = myVar.b;
				break;
				
			case 2:
				myVar.b = myVar.a;
				break;
				
			case 4:
				myVar.a -= myVar.b;
				break;
				
			case 8:
				myVar.a += myVar.b;
				break;
				
			case 16:
				myVar.a *= myVar.b;
				
			default:
				break;
		}
	}
}