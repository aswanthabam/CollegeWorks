import java.rmi.Naming;

public class MyRMIClient {
    public static void main(String[] args) {
        try {
            RMIInterface remoteObject = (RMIInterface) Naming.lookup("rmi://localhost/MyRemoteObject");
            String result = remoteObject.sayHello();
            System.out.println("Remote method invocation result: " + result);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
