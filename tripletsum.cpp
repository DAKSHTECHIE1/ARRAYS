int tripletSum(int a[], int s, int h)
{
    int t=0,sum;
	//Write your code here
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            for(int k=0;k<s;k++)
            {
            
                sum=a[i]+a[j]+a[k];
                if(i==j||j==k||i==k)
                {
             //skip /no work  
                //skip //no work
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
       
    }
    int triplet;
    //s=0 loop nhi chle and mujhe koi pair bhi nhi mila ek tareeke se kyonki elements hi nhi hai therefore pair=0 return ho jyega;
    triplet=t/6;// pair is my ans which we would return now
    return triplet;
    
}   
