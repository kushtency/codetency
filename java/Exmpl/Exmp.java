public class Exmp {
	public static void main(String[] args) {
		String st = "hello";
		String st1 = "hello";
		String st2 = new String("hello");

		System.out.println(st == st1);
		System.out.println(st1 == st2);
		System.out.println(st.equals(st1));
	}

}