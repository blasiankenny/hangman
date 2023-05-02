package to.msn.wings.selflearn.chap07pra;


public class PMyClass{
	
	
	public static double getBmi(double weight, double height) {
		
		return weight/height*height;
		
	}
	
	
	public static double getAverage(double... values) {
		
		int total=0;
		
		for(var value : values) {
			
			total+=value;
			
		}
		
		return total/values.length;
		
		
	}
	
}