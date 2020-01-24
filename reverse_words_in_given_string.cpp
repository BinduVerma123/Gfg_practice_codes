/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args)throws IOException {
	    
	    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	    int t=Integer.parseInt(br.readLine());
	    while(t>0)
	    {
	        String s=br.readLine();
	       s=s.replace("."," ");
	        String a[]=s.split(" ");
	        int i;
	        for(i=a.length-1;i>0;i--)
	        {
	            System.out.print(a[i] + ".");
	        }
	        System.out.print(a[0]);
	        System.out.println();
	        t--;
	    }
		//code
	}
}
