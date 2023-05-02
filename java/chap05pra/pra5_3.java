package to.msn.wings.selflearn.chap05pra;

import java.time.LocalDateTime;
import java.time.Period;



public class pra5_3 {

	public static void main(String[] args) {
		
		var rn = LocalDateTime.now();
		System.out.println(rn.getMonthValue());
		System.out.println(rn.getMinute());
		
		var period = Period.ofDays(30);
		
		System.out.println(rn.plus(period));
		
	}

}
