// Your code here...

int isPrime( int num)
{
  int c=0,i;
  for(i=2;i<=num-1;i++)
  {
    if(num % i!=0)
    {
        return 1;  //prime
    }
    else
    {
        return 0;  // not prime
    }
     
  }
   
  
}
