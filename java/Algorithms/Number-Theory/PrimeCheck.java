public class PrimeCheck {
	public static void main(String[] args) {
		int n = io.in.nextInt();
		System.out.println(isPrime(n));
	}

	public static boolean isPrime(int num) {
		int mul = 2;
		if(num <= 1)	return false;

		while(mul*mul <= num){
			if(num%mul == 0 || num%(num/mul) == 0) {
				return false;
			}
			mul++;
		}
		return true;
	}
}