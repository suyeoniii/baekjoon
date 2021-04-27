import java.io.InputStream;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i = 0; i<n; i++){
            String s = sc.next();
            String[] s2 = s.split(",");
            System.out.println(Integer.parseInt(s2[0])+Integer.parseInt(s2[1]));
        }
    }
}
