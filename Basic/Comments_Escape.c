#include <stdio.h>

int main(){

    /* escape sequence = character combination consisting of a backslash \
    followed by a letter or combination of digits.
    They specify actions within a line or string of text.
    \n = newline
    \t = tab
    \' = display '
    \" = display "
    \\ = display \\
    \a = display Alert(Beep, Bell)
    \b = Backspace
    \e = Escape Character
    \f = Formfeed Page Break
    \r = Carriage Return
    \t = Horizontal Tab
    \v = Vertical Tab
    */

    printf("1\t2\t3\n4\t5\t6\t\n");
    printf("\"I like pizza\" - Me probably");
    return 0;
}