#include <stdio.h>
// Define a union for address information
union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};
int main() {
    union Address addr;

    printf("Enter your name: ");
    gets(addr.name);
    printf("Name: %s\n", addr.name);

    printf("\nEnter your present address:\n");

    printf("Home/Hostel Address: ");
    gets(addr.home_address);

    printf("City: ");
    gets(addr.city);

    printf("State: ");
    gets(addr.state);

    printf("ZIP Code: ");
    gets(addr.zip);

    printf("\n--- Present Address ---\n");
    printf("Name   : %s\n", addr.name);          // Will not work correctly — because of union memory sharing
    printf("Address: %s\n", addr.home_address);
    printf("City   : %s\n", addr.city);
    printf("State  : %s\n", addr.state);
    printf("ZIP    : %s\n", addr.zip);

    return 0;
}
