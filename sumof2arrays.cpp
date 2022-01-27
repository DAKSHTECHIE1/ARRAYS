void sumOfTwoArrays(int a[], int s, int b[], int t, int o[])  
{
    //Write your code here
    int carry=0,sum;//a-i,b-j
    int i=s-1,j=t-1,max,os;
    if(s>t)
    {
        max=s;
        
    }
    else//s<=t
    {
        max=t;
    }
    os=max+1;
    int k=os-1;
    for(;(i>=0)&&(j>=0);i--,j--,k--)
    {
        sum=a[i]+b[j]+carry;
        if(sum>9)//10,11-double digit means carry ho raha hai//carry=1
        {
            carry=1;
            int m=sum%10;
            o[k]=m;
            
            
        }
        else//sum<=9//singledigit//nocarry
        {
            carry=0;
            o[k]=sum;
            
        }
        
        
    }

    if((i==-1)&&(j!=-1))
     {
        for(;j>=0;j--)
        {
           sum=carry+b[j];
            if(sum==10)
            {
                carry=1;
                o[k]=0;
                k--;
            }
            else//sum<10//9,8-single digit//
            {
                o[k]=sum;
                k--;
            }
        }
    }
    else if((i!=-1)&&(j==-1))//b ki tooti//a ki nhi
    {
        for(;i>=0;i--)
        {
           sum=carry+a[i];
            if(sum==10)
            {
                carry=1;
                o[k]=0;
                k--;
            }
            else//sum<10//9,8-single digit//
            {
                o[k]=sum;
                k--;
            }
        }
        
        
    }
    else//dono aukaat me nhi hai
    {
        // dono aukaat me nhi hai
        //fully explore ho gye.
    }  
    // ist index fill hogi ab.
    //here k is poiinting to empty index which is the ist elementi.e at 0th index
    //k is already pointing to 0th index i.e. ist element//no need to change k
    if (carry==1)
    {
        o[k]=carry;
        k--;
    }
    else//carry=0
    {
        o[k]=0;
            k--;
    }
    
}