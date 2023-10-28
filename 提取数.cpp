#include <stdio.h>

int main()

{
    char n=0b10001010;
    
	for(int i=7;i!=-1;i--){         
	    printf("%d\n",(n>>i)&0b00000001);
	}
   
    
    
    return 0;
	
 } 
