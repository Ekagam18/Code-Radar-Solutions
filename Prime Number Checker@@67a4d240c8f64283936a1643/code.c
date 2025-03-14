// Your code here...

int isPrime( int num)
{
  int c=0,i;
   if(num <=1)
    {
        return 0;  
    }
  for(i=2;i*i<=num;i++)
  {
    if(num % i!=0)
    {
        return 1;  //prime
    }
    
    else 
    {
        return 0;// not prime
    }
     
  }
   
  
}
