//hackerblocks
//minimum time traversal in java

import java.util.*;
class Traversal
{
	static int result = Integer.MAX_VALUE;
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int input = sc.nextInt();
		for(int i=1;i<=input;i++)
		{
			int s[]=new int[2];
			int d[]= new int[2];
			int n= sc.nextInt();
            s[0]=sc.nextInt();
            s[1]=sc.nextInt();
            d[0]=sc.nextInt();
            d[1]=sc.nextInt();
            int h[][]=new int[5][n];
            boolean f[]=new boolean[n];
            for(int j=0;j<n;j++)
            {
            	h[0][j]=sc.nextInt();
            	h[1][j]=sc.nextInt();
            	h[2][j]=sc.nextInt();
            	h[3][j]=sc.nextInt();
            	h[4][j]=sc.nextInt();
                f[j]=false;
            }

          find_min_path(s, d, h, n, f, 0, false, 0);
          System.out.println("#"+i+ " : "+ result);
          result = Integer.MAX_VALUE;


		}
	}

	public static void find_min_path(int s[], int d[], int h[][], int n, boolean f[], int a, boolean f1, int time)
	{
		if(f1)
		{
          time +=Math.abs(s[0]-d[0])+Math.abs(s[1]-d[1]);
          result = Math.min(result, time);
          return;
		}
		if(a==n)
		{
			time +=Math.abs(s[0]-d[0])+Math.abs(s[1]-d[1]);
          result = Math.min(result, time);
          return;
		}

		for(int j=0;j<n;j++)
		{
			if(!f[j])
			{
              f[j]=true;
              int t = Math.abs(s[0]-h[0][j])+Math.abs(s[1]-h[1][j]);
              int b = s[0];
              int c= s[1];
              s[0]=h[2][j];
              s[1]=h[3][j];
              find_min_path(s, d, h, n, f, a+1, f1, time+t+h[4][j]);
              f[j]=false;
              s[0]=b;
              s[1]=c;


              f[j]=true;
               t = Math.abs(s[0]-h[2][j])+Math.abs(s[1]-h[3][j]);
               b = s[0];
               c= s[1];
              s[0]=h[0][j];
              s[1]=h[1][j];
              find_min_path(s, d, h, n, f, a+1, f1, time+t+h[4][j]);
              f[j]=false;
              s[0]=b;
              s[1]=c;

			}
		}
		find_min_path(s, d, h, n, f, a+1, !f1, time);
		return;
	}

}
