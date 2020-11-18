import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args)throws ArrayIndexOutOfBoundsException 
	{
	    int n,t;
	    Scanner s=new Scanner(System.in);
	    t=s.nextInt();
	    for(int loop=1;loop<=t;loop++){
	        n=s.nextInt();
	        int arr[][]=new int[n][n];
	        for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    arr[i][j] = s.nextInt();
                }
            }
            int cnt=0;
            for(int i=n-1;i>0;i--){
                if(arr[i][i]!=arr[i][i-1]+1){
                    cnt+=1;
                    for(int j=0;j<i+1;j++){
                        for(int k=j;k<i+1;k++){
                            int temp = arr[j][k];
                            arr[j][k] = arr[k][j];
                            arr[k][j] = temp;
                        }
                    }
                }
                else
                continue;
            }
            System.out.println(cnt);
	    }
	}
}
