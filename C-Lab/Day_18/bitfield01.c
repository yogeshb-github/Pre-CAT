#include<stdio.h>
struct Demo
{
    signed num1:4;   //
	              //                                          
    unsigned int num2:3; // 
	             //                             
    signed num3:2; // 
	             //
};
	int main(void)
	{
	    struct Demo d1;
	    d1.num1=5;  //
				        //                                 
	    d1.num2=6;  //
		        //
	    d1.num3=-1;     // 
		        //     
		        //     
	    printf("%d %d %d",d1.num1,d1.num2,d1.num3);   
		          // return 0;
	    printf("\n");
	    d1.num1=10; //     
		        //     
	    d1.num2=9;  //  
		        //  
	    d1.num3=3;  //  
		        //  
			//            
	    printf("%d %d %d",d1.num1,d1.num2,d1.num3);
	    return 0;     
	} 

	// 5  6 -1  -6 1 -1

