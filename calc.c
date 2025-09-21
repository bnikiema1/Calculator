#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{   

    if(argc == 4){
        
        long long int a = atoll(argv[1]);
        long long int b = atoll(argv[3]);
        long long int result;

        // Using strcmp() for string comprarison not ==, This isn't python
        if(strcmp(argv[2] ,"+") == 0)
        {
            result = a + b;
            printf("result = %lld\n", result); // use %lld when printing large numbers instead of storing it in int which is 32 bit lld is 64 bit

        }else if (strcmp(argv[2], "-") == 0)
        {
            result = a - b;
            printf("result = %lld\n", result);

        }else if (strcmp(argv[2], "x") == 0)
        {
            result = a * b;
            printf("result = %lld\n", result);
        }else if (strcmp(argv[2], "/") == 0)
        {
            if(b != 0)
            {
                result = a / b;
                printf("result = %lld\n", result);
            }else
            {
                printf("Cant divid a number by zero");
            }
            
        }
        
    }else
    {
        printf("must have atleast 3 arguments");
    }
    

    return 0;
}