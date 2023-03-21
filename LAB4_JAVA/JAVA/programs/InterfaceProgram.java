
interface MyInterface {
    // Two methods to implement
    int proccess();

    void display();
}

class Values {
    // The class that stores the two values
    int a = 10, b = 20;
}

class Sum extends Values implements MyInterface {
    public int proccess() {
        return a + b;
    }

    public void display() {
        System.out.println("Sum of " + a + " & " + b + " is = " + proccess());
    }
}

class Diff extends Values implements MyInterface {
    public int proccess() {
        return a - b;
    }

    public void display() {
        System.out.println("Difference of " + a + " & " + b + " is = " + proccess());
    }
}

public class InterfaceProgram {
    public static void main(String[] args) {
        Sum su = new Sum();
        su.display();
        Diff di = new Diff();
        di.display();
    }
}
