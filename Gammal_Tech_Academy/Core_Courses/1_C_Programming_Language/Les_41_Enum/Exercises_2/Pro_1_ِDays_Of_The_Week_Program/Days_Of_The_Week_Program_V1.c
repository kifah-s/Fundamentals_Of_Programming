

//* Days Of The Week Program (Version 1).

/*
 * program defines an enumeration named week with the
 * days of the week (Saturday to Friday). The enumeration
 * assigns default integer values to each day, starting from zero.
 */

/*
! Output:
! 0
! 6
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Enum.
    enum week
    {
        sat,
        su,
        mon,
        tue,
        wed,
        thu,
        fri
    };

    printf("%d\n", sat);
    printf("%d", fri);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Days Of The Week Program (Version 1) ..\n\n");
}
//* End Function ..
