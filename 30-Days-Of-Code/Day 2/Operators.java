import java.util.Scanner;
public class Arithmetic{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double mealCost = scan.nextDouble(); // original meal price
        int tipPercent = scan.nextInt(); // tip percentage
        int taxPercent = scan.nextInt(); // tax percentage
        scan.close(); //close the scanner variable
      
        double total = mealCost + tipPercent*mealCost*0.01 + taxPercent*mealCost*0.01;//calculation code.
      
        // cast the result of the rounding operation to an int and save it as totalCost 
        int totalCost = (int) Math.round(total);
      
        System.out.println("The total meal cost is " + totalCost + " dollars.");
    }
}
