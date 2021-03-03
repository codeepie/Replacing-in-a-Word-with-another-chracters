//
//  main.c
//  Replacing in a Word with another chracters
//
//  Created by yogendra singh on 3/3/21.
//  Copyright © 2021 yadavboy. All rights reserved.
//

//These three words will be read one at a time, in three separate line.
//The first word should be changed like all vowels should be replaced by $.
//The second word should be changed like all consonants should be replaced by #.
//The third word should be changed like all char should be converted to upper case.
//Then concatenate the three words and print them.

#include <stdio.h>

#include <string.h>
int main() {
char *str1 = malloc(sizeof(char) * 256);
    char *str2 = malloc(sizeof(char) * 256);
    char *str3 = malloc(sizeof(char) * 256);
    scanf("%s %s %s", str1, str2, str3);
int s1 = strlen(str1);
int s2 = strlen(str2);
int s3 =strlen(str3);
    for(int i = 0; i < s1; i++) {
            if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' ||
               str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U')
                str1[i] = '$';
}
for(int i = 0; i < s2; i++) {
     if(str2[i]!='a' && str2[i]!='e' && str2[i]!='i' && str2[i]!='o' && str2[i]!='u' &&
        str2[i]!='A' && str2[i]!='E' && str2[i]!='I' && str2[i]!='O' && str2[i]!='U')
                str2[i] ='#';
}
for(int i = 0; i < s3; i++) {
if(str3[i] >= 'a' && str3[i] <= 'z')
    str3[i] = str3[i] - 32;
}
printf("%s%s%s", str1, str2, str3); return 0;
}
