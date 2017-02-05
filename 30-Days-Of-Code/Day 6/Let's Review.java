import java.io.*;   //Not Required
import java.util.*; //For Scanner
public class Solution{
		public static void main(String[] args) {
		
	    Scanner scan = new Scanner(System.in);
	    int n = scan.nextInt();
	    scan.nextLine();   //To handle that string input after some else input.
	    while(n>0)
	    {
	     String str=scan.nextLine();
	     
            char one[]=str.toCharArray();     //To take each element of string in 'one', one by one. Here the string will behave as an array
	     for(int i=0;i<str.length();i++)
	         {
	         if(i%2==0)
	             System.out.print(one[i]);
	         }
	        System.out.print(" ");
	      for(int i=0;i<str.length();i++)
	          {
	         if(i%2!=0)
	             System.out.print(one[i]);
	    }
	      System.out.println();
	     --n;
	    }
	    scan.close();
	}
}
