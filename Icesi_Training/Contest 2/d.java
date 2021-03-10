import java.util.Scanner;

public class d {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String n = s.next();
        int k = s.nextInt();
        System.out.println(solucion(n, k));
    }

    static int solucion(String n, int k) {
        if(n.length()>1){
            long suma = 0;
            for (int i = 0; i < n.length(); i++) {
                suma+=Character.getNumericValue(n.charAt(i));
            }
            return solucion(Long.toString(suma*k), 1);
        }
        return Integer.parseInt(n);      

    }
}
