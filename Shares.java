import java.io.*;
import java.util.*;

public class Shares {


	private int t,n;
	private ArrayList<Integer>q=new ArrayList<Integer>();
	private ArrayList<Integer>a=new ArrayList<Integer>();
	private ArrayList<Integer>fans=new ArrayList<Integer>();
	public void takeinput(){
		Scanner input=new Scanner(System.in);
		t=input.nextInt();
		
		
		for(int i=0;i<t;i++)
		{
				n=input.nextInt();
				for(int j=0;j<n;j++)
				{
					int tmp=input.nextInt();
					q.add(tmp);
					
					
				}
			computee(q);
		q.clear();
		}
		
		}
		
		
		public void computee(ArrayList<Integer> q)
{
			
			int pday,nday,profit=0;
			int sharestaken=0;
			ArrayList <Integer>pricetaken=new ArrayList<Integer>();
			for(int day=0;day<q.size();day++)
			{
				
					if(day+1==q.size())
					{
						
						if(sharestaken==0)
						{
								a.add(0);
							
						}
							pday=q.size()-1;
							nday=q.size()-1;
							if(q.get(pday-1)<q.get(pday))
							{

								for(int k=pricetaken.size()-1;k>=0;k--)
								{
									profit=profit+(q.get(pday)-pricetaken.get(k));
									sharestaken=sharestaken-1;
									pricetaken.remove(k);
								}
								
								a.add(profit);
								
							}
							
					}
					else
					{
							pday=day;
							nday=day+1;
							if(q.get(nday)>q.get(pday))
							{
									
									sharestaken=sharestaken+1;
					//				System.out.println("shares present "+sharestaken);
									pricetaken.add(q.get(pday));
							}
							
							else{
								
							
							if(sharestaken==0)
							{
							//no action	
							
							}
							else{
								
				//				System.out.println("inside else of no action");
								for(int k=pricetaken.size()-1;k>=0;k--)
								
								{
								sharestaken=sharestaken-1;
								profit=profit+(q.get(pday)-pricetaken.get(k));
								pricetaken.remove(k);
							}	
							
							a.add(profit);
								
							}
							
							
							
								
							}
					
							
					}
					
					
					
					
			}
			
			//System.out.println("profit is :"+a);
			int ftmp=a.get(a.size()-1);
			fans.add(ftmp);
			
			
			}
			
			public void showans(){
			
			//System.out.println("uotput on console is :"+fans);
			for(int h=0;h<fans.size();h++)
			{
			System.out.println(fans.get(h));	
				
			}
				
				
			}


    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Shares sha=new Shares();
         sha.takeinput();
         sha.showans();
        
        
    }
    
}
