import java.io.*;   /*Not Required*/
import java.util.*;     /*For java.util.Scanner to take inputs*/
import java.text.*;     /*Not Required*/
import java.math.*;     /*Not Required*/
import java.util.regex.*;   /*Not Required*/

public class Solution {     /*this is the main class that is the class with the main() method*/
	public static void main(String[] args) {   /*the main method, the program begins here*/
		Scanner scan = new Scanner(System.in);    /*declared the input variable "scan", used to take inputs in the program*/
		String inputString = scan.nextLine();     /*to read input from user and store it in string "inputString"*/
		scan.close();     /*closing the Scanner variable*/
		System.out.println("Hello, World.");  /*printing "hello world" out on the screen*/
        System.out.println(inputString);  /*printing string on the screen*/
	}  
}
/*remember here "println" is used to print sth and also get to the next line, and to just print sth do "print"*/
