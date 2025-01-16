#include "variadic_functions.h"

void print_all(const char * const format, ...) {
    char *str, *seperator = "";
    int i = 0;

    va_list printer;
    va_start(printer, format);

    if (format) {

        while (format[i]) {
            switch (format[i]) {
                case 'c':
                    printf("%s%c",seperator,va_arg(printer, int));
                    break;
                case 'i':
                    printf("%s%d",seperator,va_arg(printer, int));
                    break;
                case 'f':
                    printf("%s%f",seperator,va_arg(printer, double));
                    break;
                case 's':
                    str = va_arg(printer, char *);
                    if (!str) {
                        str = "(nil)";
                    }
                    printf("%s%s",seperator, str);
                    break;

                default:
                    i++;
                    continue;
            }
            seperator = ", ";
            i++;
        }
    }
    printf("\n");
    va_end(printer);
}