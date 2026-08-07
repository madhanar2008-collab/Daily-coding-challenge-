
int fun(char temp){
    switch(temp){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default : return 0; 
    }
}

int romanToInt(char* s) {
    int i=strlen(s)-1;
    int one=0; int two=0; int result=0;

    while(i>=0){
           
        if(i>0){
            char left = s[i-1];
            char right = s[i];  
            two = fun(right);
            one = fun(left);
            if(one>=two){result = result + two; i--; }
            else if(one < two){result = result + (two - one);  i = i-2; } 
        } 
        else if(i==0){
            char left = s[0];
            one = fun(left);
            result = result + one;
            i--;
        }
    
    }
    return result;
}