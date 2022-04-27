#include <stdio.h>
#include <string.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;
    
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

char *match( char *s, char ch1, char ch2 ){
	int i,j;
	for(i=0;i<strlen(s);i++){
		if(s[i]==ch1){
			for(j=i;j<strlen(s);j++){
				printf("%c",s[j]);
				if(s[j]==ch2){
					break;
				}
			}
			printf("\n");
			return (s+i);
		}
	}
	printf("\n");
	return s+strlen(s);    //没找到的情况 
}


