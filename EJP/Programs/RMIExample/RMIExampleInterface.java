import java.rmi.Remote;
import java.rmi.RemoteException;

public interface RMIInterface extends Remote {
    // Declare remote methods
    String sayHello() throws RemoteException;
}
