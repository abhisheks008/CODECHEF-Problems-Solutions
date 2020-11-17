import java.io.IOException;
import java.util.HashSet;
import java.util.Scanner;

class tree2 {
    public static void main(String[] args) throws IOException{
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        while(t--!=0)
        {
            int n=in.nextInt();
            int [] a=new int[n];
            for(int i=0;i<n;i++)
                a[i]=in.nextInt();
            HashSet<Integer> hs=new HashSet<>();
            for(int i=0;i<n;i++){
                if(a[i]!=0)
                hs.add(a[i]);}
            System.out.println(hs.size());

        }
    }
}
