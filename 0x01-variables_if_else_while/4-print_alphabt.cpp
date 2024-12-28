#include <cstdio>

int main(){
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++){
        if (ch == 'e' || ch == 'q'){
            continue;
        }
        putchar(ch);
    }
    putchar('\n');
    return 0;
}