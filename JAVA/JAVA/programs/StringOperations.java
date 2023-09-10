import java.io.*;
import java.util.Scanner;

public class StringOperations {
    public static void main(String[] args) {
        String s = new String();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string");
        s = sc.nextLine();
        System.out.println("Entered string is " + s);
        // System.out.println("Select the operation to be performed on the string from
        // the menu");
        System.out.println("\n1. Find the length of the string");
        System.out.println("2. Convert to both upper case and lower case");
        System.out.println("3. Append another string to the end of this string (Concatination)");
        System.out.println("4. Find the character at a specific position");
        System.out.println("5. Find the substring between two limits ");
        System.out.println("6. Exit");
        while (true) {
            System.out.println("\nSelect the operation to be performed on the string from the menu");
            int x;
            x = sc.nextInt();
            switch (x) {
                case 1:
                    System.out.println("Length of the string is " + s.length());
                    break;
                case 2:
                    System.out.println("String in all upper case is " + s.toUpperCase());
                    System.out.println("String in all lower case is " + s.toLowerCase());
                    break;
                case 3:
                    System.out.println("Enter the string to be appended");
                    // sc = new Scanner(System.in);
                    String t = sc.next();
                    System.out.println("Appended string is " + s.concat(t));
                    break;
                case 4:
                    System.out.println("Enter the index ");
                    int z;
                    z = sc.nextInt();
                    System.out.println("The character at index " + z + " is " + s.charAt(z));
                    break;
                case 5:
                    System.out.println("Enter the two limits for the substring ");
                    int f, g;
                    f = sc.nextInt();
                    g = sc.nextInt();
                    System.out.println("Substring between position " + f + " and " + g + " is " + s.substring(f, g));
                    break;
                case 6:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Enter a valid choice ");
            }
        }
    }
}