#include <stdio.h>

#define PI 3.14159
#define FORMAT "%f\n"
#define PI2 2*PI
#define PRT printf("%f", PI);\ 
            printf("%f\n", PI2)
        //\表示这个宏没有结束    
int main(int argc, char const *argv[])
{
	PRT;
	return 0;
	
}            
