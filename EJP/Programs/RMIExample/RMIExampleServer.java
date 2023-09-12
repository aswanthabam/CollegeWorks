import java.rmi.Naming;
import java.rmi.registry.LocateRegistry;

public class MyRMIServer {
    public static void main(String[] args) {
        try {
            RMIInterface remoteObject = new RMIInterface_imp();
            LocateRegistry.createRegistry(1099); // Create the RMI registry
            Naming.rebind("MyRemoteObject", remoteObject); // Bind the remote object to a name
            System.out.println("Server is ready.");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
