package to.msn.wings.selflearn.chap07.practice;



public class HamsterPra{
	
	
	public String name;
	public int age;
	
	public HamsterPra(String name, int age) {
		
		this.name = name;
		this.age = age;
		
	}
	
	public HamsterPra() {
		
		this("権兵衛",0);
		
		
	}
	
	public void show() {
		
		System.out.printf("Name = %s Age = %d\n",this.name,this.age);
		
	}
	
	
}