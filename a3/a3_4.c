/*
CH-230-A
a3_p3
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>        // I added stlib for the strings
int position(char str[], char c)
{
int idx;
/* Loop until end of string */
for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
/* do nothing */
}
return idx; // return idx shouldnt be in the loop, we only return at the end
}
int main() {
char line[80];
char c = 'g'; //
printf("Enter string:\n");
fgets(line, sizeof(line), stdin);
printf("The first occurrence of ’g’ is: %d\n", position(line, c));
}
