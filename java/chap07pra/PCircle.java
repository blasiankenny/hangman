package to.msn.wings.selflearn.chap07pra;


public class PCircle{
	
	public double radius;
	
	public PCircle() {
		this(1);
	}
	
	public PCircle(double radius) {
		this.radius=radius;
	}
	
	public double getArea() {
		return this.radius*this.radius*Math.PI;
	}
	
	
	
}
