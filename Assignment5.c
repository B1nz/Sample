    #include <stdio.h>

    //Declaration
    float getNum	(void);
    float maxNums	(float fnum1, float fnum2, float fnum3, float fnum4, float fnum5);
    float minNums	(float fnum1, float fnum2, float fnum3, float fnum4, float fnum5);
    void result		(float result1, float result2);
    void end        (void);

    int main(void){
        
    //	Welcome message

        printf("========== Min Max Generator App ==========\n");
        printf("        Input 5 Int or Float Number\n\n\n");
        
    //	Declaration

        float inputNum1 = 0.0;
        float inputNum2 = 0.0;
        float inputNum3 = 0.0;
        float inputNum4 = 0.0;
        float inputNum5 = 0.0;
        
        inputNum1 = getNum();
        inputNum2 = getNum();
        inputNum3 = getNum();
        inputNum4 = getNum();
        inputNum5 = getNum();
        
    //	Find max

        float result1 = maxNums(inputNum1, inputNum2, inputNum3, inputNum4, inputNum5);
        
    //	Find min

        float result2 = minNums(inputNum1, inputNum2, inputNum3, inputNum4, inputNum5);
        
    //	Show result

        result(result1, result2);
        
        return 0;
        
    }

    float getNum(void){
        
        printf("Please Enter Number : ");
        float input = 0.0;
        scanf("%f", &input);
        
        return input;
    }

    float maxNums(float fnum1, float fnum2, float fnum3, float fnum4, float fnum5){

        float max = fnum1;
        if(fnum2 > max){
            max = fnum2;
        }
        if(fnum3 > max){
            max = fnum3;
        }
        if(fnum4 > max){
            max = fnum4;
        }
        if(fnum5 > max){
            max = fnum5;
        }

        return max;

    }

    float minNums(float fnum1, float fnum2, float fnum3, float fnum4, float fnum5){

        float min = fnum1;
        if(fnum2 < min){
            min = fnum2;
        }
        if(fnum3 < min){
            min = fnum3;
        }
        if(fnum4 < min){
            min = fnum4;
        }
        if(fnum5 < min){
            min = fnum5;
        }

        return min;

    }

    void result(float result1, float result2){

    printf("\n---------- Result ----------\n\n");
    printf("Min numbers = %f\n", result2);
    printf("Max numbers = %f\n", result1);
    printf("----------------------------\n\n");

    end();
    }

    void end(void){

        char ans;
        
        printf("Do you want to continue?(y/n)\n");
        scanf("%c", &ans);

        if (ans == "y"){
            main();
        }
        if (ans == "n"){
            return 0;
        }
        if (ans != "y" && ans != "n")
        {
            printf("\nInput not valid!\n");
            end();
        }

    }