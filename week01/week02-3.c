#include<stdio.h>
char mirror_char(char c)
{
    if(c=='A') return'A';
    if(c=='B') return' ';
    if(c=='C') return' ';
    if(c=='D') return' ';
    if(c=='E') return'3';
    if(c=='F') return' ';
    if(c=='G') return'H';
    if(c=='H') return'I';
    if(c=='I') return'L';
    if(c=='J') return' ';
    if(c=='K') return'J';
    if(c=='L') return'M';
    if(c=='M') return' ';
    if(c=='N') return'O';
    if(c=='O') return' ';
    if(c=='P') return' ';
    if(c=='Q') return' ';
    if(c=='R') return'0';
    if(c=='S') return'2';
    if(c=='T') return'T';
    if(c=='U') return'U';
    if(c=='V') return'V';
    if(c=='W') return'W';

    if(c=='X') return'X';
    if(c=='Y') return'Y';
    if(c=='Z') return'5';
    if(c=='1') return'1';
    if(c=='2') return'S';
    if(c=='3') return'E';
    if(c=='4') return' ';
    if(c=='5') return' ';
    if(c=='6') return' ';
    if(c=='7') return' ';
    if(c=='8') return'8';
    if(c=='9') return' ';
    return ' ';
}
int main()
{
    char c;
    scanf("%c",&c);
    char ans=mirror_char(c);
    printf("它的鏡像字是:%c",ans);
}
