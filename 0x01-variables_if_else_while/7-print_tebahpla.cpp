#include <cstdio>

int main(){
    char ch;
    for (ch = 'z'; ch >= 'a'; ch--){
        putchar(ch);
    }
    putchar('\n');
    return 0;
}