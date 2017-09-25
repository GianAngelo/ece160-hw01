#include<stdio.h>
#include<string.h>
// Jason Kurian helped me with the following topics: understanding the purpose of argc and argv, registering values for j and k (Using the "&" before), and making sure all brackets are closed.
int main(int argc, char *argv[])
{		
		char c = argv[1][0];
		float j;
		float k;
		sscanf(argv[2],"%f",&j);
		sscanf(argv[3],"%f",&k);
		float ans; 
		switch(c) {
			case('+'):
				ans = j+k;
					printf("%f\n",ans);
			  			break;
			case('-'):
				ans = j - k; 
					printf("%f\n",ans);
			  			break;
			case('x'):
				ans = j * k; 
					printf("%f\n",ans);  
			  			break;
			case('/'):
				ans = j / k; 
			  		printf("%f\n",ans);
			 			break;
			 		}	
return 0;
}