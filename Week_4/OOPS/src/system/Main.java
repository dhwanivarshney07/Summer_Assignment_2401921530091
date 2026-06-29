package system;
public class Main{
	public static void main(String args[]) {
		Outer o=new Outer();
		o.display();
		Outer.Inner i=o.new Inner();
		i.display();
		Point p=new Point();
		p.setXY(10,20);
		p.display();
		Box3D b=new Box3D(5,4,3);
		System.out.println("Area="+b.area());
		System.out.println("volume="+b.volume());
	}
}