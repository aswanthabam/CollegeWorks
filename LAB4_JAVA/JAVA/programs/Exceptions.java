public class Exceptions {
    public static void main(String[] args) {
        // Divide by zero error
        System.out.println("Dividing a number with \"0\" ...");
        try {
            int a = 10, b = 0;
            int c = a / b;
            System.out.println("Output : " + c); // Not executed
        } catch (ArithmeticException e) {
            System.out.println("ArithmeticException Caught : " + e.toString());
        }
        // Accessing array element which is out of bound
        System.out.println("Accessing array element which is out of bound .....");
        try {
            int a[] = { 1, 2, 3 };
            System.out.println("Fourth element of array is " + a[3]); // Not executed
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("ArrayIndexOutOfBoundsException caught : " + e);
        }
        // Trying to print a NULL Value
        System.out.println("Trying to print a NULL Value");
        try {
            String a = null;
            System.out.println("value of a is " + a.length());
        } catch (NullPointerException e) {
            System.out.println("NullPointerException caught : " + e);
        }
    }
}
