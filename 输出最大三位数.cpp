#include <stdio.h>

int main()

{
	int a,b,c;
	int sum;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a-b>0){
		  if (a-c>0){
		  	if (b-c>0) {
		  	  printf("%d",sum=a*100+b*10+c);
		      }
		    else {printf("%d",sum=a*100+c*10+b);
			 }
		    }    
		    
		  else  {
			  printf("%d",sum=c*100+a*10+b);
		      }
    }
	else {
		  if (b-c>0){
		  	if (a-c>0) {
		  	  printf("%d",sum=b*100+a*10+c);
		      }
		      else printf("%d",sum=b*100+c*10+a);
		    }
		  else   {
			  printf("%d",sum=c*100+b*10+a);
		      }   
		return 0;
	
}
}
