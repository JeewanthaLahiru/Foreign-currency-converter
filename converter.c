#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input,output;
    float ivalue,ovalue;
    printf("[1-LKR/ 2-SGD/ 3-QAR/ 4-USD]\n\n");
    printf("Below are the latest currency rates,\n\t1 USD = 174.77  LKR \n\t1 USD = 3.64  QAR \n\t1 USD = 1.35  SGD \n\n");
    printf("input method- ");
    scanf("%d",&input);
    printf("output method- ");
    scanf("%d",&output);
    printf("\n\ninput value in %d- ",input);
    scanf("%f",&ivalue);
    switch(input)
    {
    case 1:
        switch(output)
        {
        case 1:
            ovalue= ivalue;
            printf("%0.2f LKR",ovalue);
            break;
        case 2:
            ovalue=(ivalue*1.35)/174.77;
            printf("%0.2f SGD",ovalue);
            break;
        case 3:
            ovalue=(ivalue*3.64)/174.77;
            printf("%0.2f QAR",ovalue);
            break;
        case 4:
            ovalue=ivalue/174.77;
            printf("%0.2f USD",ovalue);
            break;

        default:
            printf("wrong output method");
            break;
        }
        break;

        case 2:
        switch(output)
        {
        case 1:
            ovalue= (ivalue*174.77)/1.35;
            printf("%0.2f LKR",ovalue);
            break;
        case 2:
            ovalue=ivalue;
            printf("%0.2f SGD",ovalue);
            break;
        case 3:
            printf("%0.2f QAR",ovalue);
            ovalue=(ivalue*3.64)/1.35;
            break;
        case 4:
            printf("%0.2f USD",ovalue);
            ovalue=ivalue/1.35;
            break;

        default:
            printf("wrong output method");
            break;
        }
        break;

        case 3:
        switch(output)
        {
        case 1:
            ovalue= (ivalue*174.77)/3.64;
            printf("%0.2f LKR",ovalue);
            break;
        case 2:
            ovalue=(ivalue*1.35)/3.64;
            printf("%0.2f SGD",ovalue);
            break;
        case 3:
            printf("%0.2f QAR",ovalue);
            ovalue=ivalue;
            break;
        case 4:
            printf("%0.2f USD",ovalue);
            ovalue=ivalue/3.64;
            break;

        default:
            printf("wrong output method");
            break;
        }
        break;
        case 4:

        switch(output)
        {
        case 1:
            ovalue= ivalue*174.77;
            printf("%0.2f LKR",ovalue);
            break;
        case 2:
            ovalue=ivalue*1.35;
            printf("%0.2f SGD",ovalue);
            break;
        case 3:
            printf("%0.2f QAR",ovalue);
            ovalue=ivalue*3.64;
            break;
        case 4:
            printf("%0.2f USD",ovalue);
            ovalue=ivalue;
            break;

        default:
            printf("wrong output method");
            break;
        }
        break;
        default:
            printf("wrong input method\n\n");
            break;
    }

    return 0;
}
