import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class CCC11S1 {
public static void main(String[] args) throws IOException {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            int a = Integer.parseInt(in.readLine());
            int s = 0;
            int t = 0;
            for(int i = 0; i < a; i++){
                String temp = in.readLine();
                for(int j = 0; j < temp.length(); j++){
                    if(temp.charAt(j)=='S'||temp.charAt(j)=='s'){
                        s++;
                    }else if(temp.charAt(j)=='T'||temp.charAt(j)=='t'){
                        t++;
                    }
                }
            }
            if(t>s){
                System.out.println("English");
            }else
            if(s>t){
                System.out.println("French");
            }else
            if(t==s){
                System.out.println("French");
            }
    }
}