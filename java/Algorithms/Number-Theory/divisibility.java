public class divisibility {

	public static void main(String[] args) {
		int n = io.in.nextInt();
		printAllFactors(n);
		System.out.println();
		printAllFactorsOptimized(n);
	}

	public static void printAllFactors(int num) {
		int mul = num;
		while(mul != 0){
			if(num % mul == 0)	System.out.print(mul + " ");
			mul--;
		}
	}

	public static void printAllFactorsOptimized(int num) {
		int mul = 1;
		while(mul * mul <= num){
			if(num % mul == 0){
				if((num / mul) != mul) System.out.print(num/mul + " ");
				System.out.print(mul + " ");
			}
			mul++;
		}
	}
}