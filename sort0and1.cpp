void sortZeroesAndOne(int a[], int b)//void vala function hai.therefore kuch return nhi krna .therefore can skip return.therefore skipping return.peace!!!peace!!!peace!!!peace!!!peace!!!peace!!!peace!!!peace!!!
{
   int l=0;
   for(int i=0;i<b;)//  b baar.// same hogye therefore i mera traversing me help krega
   {
       if(a[i]==0)
       {
           //swap
           int temp=a[i];
           a[i]=a[l];
           a[l]=temp;
           i++;
           l++;
       }
       else//a[i]==1;
       {
          //no swap;
           i++;
       }
       
   }
    
}    