// Your code here...

int isPrime( int a)
{
  int c=0,i;
  for(i=2;i<a-1;i++)
  {
    if(a % i!=0)
    {
        return 1;  //prime
    }
    else
    {
        return 0;  // not prime
    }
     
  }
   
  
}
