import java.applet.Applet;
import java.awt.*;

public class myapp extends Applet 
{
Button b;
TextField t;
public void init() {
	t=new TextField("This");
	b=new Button("Hello");
	t.setBounds(10,40,120,20);
	b.setBounds(10,80,80,40);
	add(b);
	add(t);
}
}