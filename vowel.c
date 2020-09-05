#include<stdio.h>
int main(){
char s[100];
int i,c=0;
printf("Enter a string\n");
scanf("%s",s);
i=0;
for(i=0;s[i]!='\0';i++)
{
    switch(s[i])
    {
    case 'a':
        case 'e':
            case 'i':
                case 'o':
                    case 'u':
                        printf("%c\n",s[i]);
                        c++;
                        break;
                        default:{printf("No vowel");
                        break;}
    }
}
printf("Vowels=%d\n",c);
}
