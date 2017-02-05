import java.io.*;
import java.util.*;     //Not Required
import java.text.*;     //Not Required
import java.math.*;     //Not Required
import java.util.regex.*;   //Not Required

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();   //taking input in 'n'
        int i;
    
        //here the loop is.
        for(i=1;i<=10;i++)
        System.out.println(n + " x " + i + " = " + n*i);
    }
}
