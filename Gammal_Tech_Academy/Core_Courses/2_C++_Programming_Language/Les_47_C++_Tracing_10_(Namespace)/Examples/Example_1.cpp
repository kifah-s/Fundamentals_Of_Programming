

/* >>> Example 1 <<< */

#include "gammal.h"

using namespace gammal_tech;

void member_number()
{
    print("You are member:");
    gammal_print(members + 1);
}

int main()
{
    print("hi");
    member_number();

    printf("\n\n------------------");

    gammal x("C");
    print("mt");
    x.membership_type();
    x.upgrade();

    gammal_print("--------------\n");
}

//* Output:
//* Welcome to Gammal Tech
//* You are member:
//* 10987283902984
//* ------------------
//* Membership type:
//* C
//* upgrade to yearly membership
//* --------------