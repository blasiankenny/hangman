package to.msn.wings.selflearn.chap05pra;

import java.util.regex.Pattern;

public class practice5_2 {

	public static void main(String[] args) {
		
		//1
		String value = "住所は〒160-0000　新宿区南町0-0-0です。\n"
				+ "あなたの住所は〒210-9999　川崎市北町1-1-1ですね";
		var ptn = Pattern.compile("〒\\d{3}\\-\\d{4}");
		var match = ptn.matcher(value);
		
		while(match.find()) {
			System.out.println(match.group());
		}

			
		
		//2
		String value2 = "お問い合わせはsupport@example.comまで";
		System.out.println(value2.replaceAll(
				"[a-z_0-9]+([-+.][a-z_0-9]+)*@"
				+ "[a-z_0-9]+([-.][a-z_0-9]+)*\\."
				+ "[a-z_0-9]+([-.][a-z_0-9]+)*","<a href=\"mailto:$0\""
				+ ">$0</a>)"));
	}

}
