#include <stdio.h>
#include <string.h>

int main () {
    char *test_str = "\t";
    char test_char = '\t';
    char str_to_char;
    printf("a.%s.a\n", test_str);
    printf("a.%c.a\n", test_char);
    str_to_char = (char) *test_str;
    printf("a.%c.a\n", str_to_char);
    if (str_to_char == '\t') printf("yas\n");
    printf("----------------------------\n");

    char *test_str_2 = "'\n'";
    char str_to_char_2;
    str_to_char_2 = (char) *(test_str_2+1);
    printf("a.%s.a\n", test_str_2);
    printf("a.%c.a\n", str_to_char_2);
    if (str_to_char_2 == '\n') printf("yas 2\n");
    printf("----------------------------\n");

    char *test_str_3 = "'\a'";
    printf("a.%c.a\n", (char) *(test_str_3));
    printf("a.%c.a\n", (char) *(test_str_3 + 1));
    printf("a.%c.a\n", (char) *(test_str_3 + 2));
    printf("----------------------------\n");

    char test_str_4 = 10;
    printf("a.%c.a\n", test_str_4);
    return 0;
}