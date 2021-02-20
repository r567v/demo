#include <stdio.h>

void evaluate(int a,int b,int printedYes,int count){
    //babaab
    char input;

    scanf("%c",&input);

    if(input=='b'&&b==0){
        b = 1;
    }
    else if (input=='a'&&b==1&&a==0)
    {
        a = 1;
    }
    else if(input=='a'&&b==1&&a==1){
        a = 2;
    }
    else if(input=='b'&&b==1&&a==2){
        b=2;
    }
    else if(input=='\n'){
        return;
    }
    else{
        b=0;
        a=0;
    }

    if (a==2 && b==2 && printedYes==0)
    {
        printf("YES %d ",count-2);
        printedYes = 1;
        a=0;
        b=1;
    }
    else if(a==2&& b==2 && printedYes==1){
        printf("%d ",count-2);
        a=0;
        b=1;
    }

    

    evaluate(a,b,printedYes,count+1);

    
    
    
}


int main(){
    
    evaluate(0,0,0,0);

    return 0;
}