import java.awt.*;

public class GraphicsDemo extends Frame
{
  public GraphicsDemo(){
    
  }
  public void paint(Graphics g){
    int offsetX = 50,offsetY=100;
    int x[]={offsetX+20,offsetX+40,offsetX+70,offsetX+70,offsetX+40,offsetX+20};
    int y[]={offsetY+40,offsetY+60,offsetY+60,offsetY+20,offsetY+20,offsetY+40};
    int n = 6;
    g.drawPolygon(x,y,n);
    g.fillPolygon(x,y,n);
  }
  public static void main(String[] arg){
    GraphicsDemo a = new GraphicsDemo();
    a.setSize(new Dimension (370,700));
    a.setTitle("Graphics Demo");
    a.setVisible(true);
  }
}