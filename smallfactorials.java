import java.math.BigInteger;
import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int num = sc.nextInt();
		for (int i = 0; i < num; i++)
		{
			Scanner sc2 = new Scanner(System.in);
			BigInteger a = sc.nextBigInteger();
			if (a.equals(BigInteger.valueOf(0)))
			{
				System.out.println(1);

			}
	        else
	        {
	        	System.out.println(fact(a));
	        }

		}
		System.out.println("");
	}

	public static BigInteger fact (BigInteger x)
	{
		if (x.equals(BigInteger.valueOf(1)))
		{
			return BigInteger.valueOf(1);
		}
		else
		{
			return x.multiply(fact(x.subtract(BigInteger.valueOf(1))));
		}
	}
}
