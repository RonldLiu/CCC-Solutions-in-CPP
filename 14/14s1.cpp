import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;
public class S1_2014 {
public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> ary = new ArrayList<Integer>();
        int k = sc.nextInt();
        for(int i = 0; i < k; i++){
            ary.add(i+1);
        }
        int m = sc.nextInt();
        int[] a = new int[m];
        for(int i = 0; i < m; i++){
            a[i] = sc.nextInt();
        }

        for(int i = 0; i < m; i++){
            int count = 0;
            for(int j = 0; j < ary.size(); j++){
                count++;
                if(count == a[i]){
                    count = 0;
                    ary.set(j, 0);
                }
            }
            for(int j = 0; j < ary.size(); j++){
                if(ary.get(j)==0){
                    ary.remove(j);
                }
            }
        }
        for(int i = 0; i < ary.size(); i++){
            System.out.println(ary.get(i));
        }
    }
}