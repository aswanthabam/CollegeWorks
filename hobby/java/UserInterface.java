import java.awt.*;
class Login extends Panel{
  public Login()
  {
    /*setBackground(Color.white);    */
    setSize(300, 300);
    setLayout(new FlowLayout());
    TextField user = new TextField(100), pass = new TextField(100);
    add(user);//,BorderLayout.NORTH);
    add(pass);//,BorderLayout.SOUTH);
  }
  public void paint(Graphics g){
    g.setColor(Color.gray);
    g.drawRect(200,50,300,150);
    g.fillRect(200,50,300,150);
  }
}
class TopBar extends Panel
{
  public TopBar(){
    Label l = new Label("AVC Interface");
    l.setForeground(Color.white);
    l.setBackground(Color.black);
    setLayout (new FlowLayout());
    add(l);
  }
  public void paint(Graphics g){
    g.drawRect(0,0,700,50);
    g.fillRect(0,0,700,50);
    //g.setColor(Color.white);
    
  }
  
}
class LoginWindow extends Frame{
  public LoginWindow(){
    setLayout (new BorderLayout());
    add(new TopBar(),BorderLayout.NORTH);
    add(new Login(),BorderLayout.CENTER);
  }
}
public class UserInterface {
  public static void main(String[] arg){
    LoginWindow a = new LoginWindow();
    a.setSize(new Dimension (700,350));
    a.setTitle("User Interface ");
    a.setVisible(true);
  } 
}