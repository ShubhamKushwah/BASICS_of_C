import java.io.*;   //Not required
import java.util.*; 
import java.text.*;   //Not required
import java.math.*;   //Not required
import java.util.regex.*;   //Not required

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        
        int a;
        double b;
        String c;
        
        a = scan.nextInt();   //for integer input
        b = scan.nextDouble();  //for double input
        scan.nextLine();    //we need to do this whenever we take input of a string just after some another input
        c = scan.nextLine();    //to take string input

        System.out.println(a+i);    //to print the sum
        System.out.println(b+d);    //to print the sum
        System.out.println(s+c);    //to print the combined strings
 
        scan.close();
    }
}
