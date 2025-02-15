#include <stdio.h>


int main() {
    
    char b;
    scanf("%c", &b);
    if(b == 'a'||b == 'e'||b == 'i'||b == 'o'||b == 'u'||
    b == 'A'||b == 'E'||b == 'I'||b == 'O'||b == 'U'){
        printf("Vowel");}
    }
    else if((b >='A'&&b<='Z')||(b>='a'&&b<='z')){
        printf("Constant");
    }
    else if(b>=0||b<=0){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}