#include <stdio.h>


int main()

{
    int i,n,fact=1;
  
  scanf("%d",&n);
   
 if(n>0)
  
  {
     
   printf("factorial");
   
 for(i=1;i<=n;i++)
   
   
 {
   
 fact=fact*i;
  
  }

printf("\nfactorial of %d is:%d",n,fact);

}

else

{
   
 printf("not a factorial");

}

return 0;

    
}


