int findUnique(int b[], int size)//size is no. of elements in the array in a particular trial
{
    //Write your code here
    
    for(int i=0;i<size;i++)
    {
        int l=0;
        for(int j=0;j<size;j++)
        {
            if(i==j)
            {
                
            }
           else
           { 
               
               if(b[i]==b[j])
               {
                   l=20;
                   break;
               }
           }    
            
            
        }// unique pe l=0;
        if(l==0)
        {
            return b[i];
            //unique
        }
    }
}