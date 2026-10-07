#include <stdio.h>

struct Address
{
    char city[30];
    int pincode;
};

struct Person
{
    char name[30];
    int age;
    struct Address address;
};

int main()
{
    struct Person person = {
        "Meena",
        22,
        {"Bengaluru", 560001}
    };

    struct Person *ptr = &person;

    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("City: %s\n", ptr->address.city);
    printf("Pincode: %d\n", ptr->address.pincode);

    return 0;
}
