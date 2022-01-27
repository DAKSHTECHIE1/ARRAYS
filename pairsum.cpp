int pairSum(int a[], int s, int h)
{
    int t=0,sum;
	//Write your code here
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            sum=a[i]+a[j];
            if(i==j)
            {
             //skip /no work  
            }
           else
           { 
               if(sum==h)
               {
                   t++;
               }
               
               // kaam krana hai.
               
           }    
            
            
        }
       
    }
    int pair;
    //s=0 loop nhi chle and mujhe koi pair bhi nhi mila ek tareeke se kyonki elements hi nhi hai therefore pair=0 return ho jyega;
    pair=t/2;// pair is my ans which we would return now
    return pair;
    
}