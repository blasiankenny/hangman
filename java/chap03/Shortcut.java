package to.msn.wings.selflearn.chap03;

public class Shortcut {

  public static void main(String[] args) {
    String str = "ajlkjal";
    if (str != null && str.startsWith("http://")) {
    
      System.out.println("「http://～」で始まります。");
    }
  }
}
