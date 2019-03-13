#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[101];
    scanf("%s",str);
    for(i=1;i<strlen(str);i++)
    {
        if(str[i]==tolower(str[i]))
        {
            puts(str);
            return 0;
        }
    }
    if(str[0]==toupper(str[0])){
        str[0]=tolower(str[0]);
    }
    else{
        str[0]=toupper(str[0]);
    }
    
    
    
    for(i=1;i<strlen(str);i++)
    {
        str[i]=tolower(str[i]);
    }
    
    puts(str);
    return 0;
}