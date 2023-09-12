import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

public class RMIInterface_imp extends UnicastRemoteObject implements RMIInterface {
    public RMIInterface_imp() throws RemoteException {
        // Constructor
    }

    @Override
    public String sayHello() throws RemoteException {
        return "Hello from Aswanth V C";
    }
}
