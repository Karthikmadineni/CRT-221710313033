#include <stdio.h>

int main () 
{
  
int i, n, j, s;
  
scanf ("%d", &n);
  
for (i = 0; i < n; i++)
    {
      
j = i + 1;
      
for (s = 0; s < n - j; s++)
	{
	  
printf (" ");
	
}
      
while (j >= 1)
	{
	  
 
printf ("%d", j);
	  
j -= 1;
	
}
      
printf ("\n");
    
 
}
  
 
 
 
 
return 0;

 
}


 
 
