#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person {
    char *firstname;
    char *lastname;
    char *title;
    unsigned int age;
} Person;

Person *person_init(Person *const person, const char *const firstname, const char *const lastname,
                    const char *title, const unsigned int age) {
    person->firstname = malloc(strlen(firstname) + 1);
    strcpy(person->firstname, firstname);
    person->lastname = malloc(strlen(lastname) + 1);
    strcpy(person->lastname, lastname);
    person->title = malloc(strlen(title) + 1);
    strcpy(person->title, title);
    person->age = age;
    return person;
}

Person *person_destroy(Person *const person) {
    free(person->firstname);
    person->firstname = NULL;
    free(person->lastname);
    person->lastname = NULL;
    free(person->title);
    person->title = NULL;
    return person;
}

void person_print(const Person *const person) {
    printf("Person{firstname=\"%s\", lastname=\"%s\", title=\"%s\", age=%d}", person->firstname,
           person->lastname, person->title, person->age);
}

void example(void) {
    Person *person = malloc(sizeof(Person));
    person_init(person, "Myeonggyu", "Choi", "mygy", 27);
    person_print(person);
    person_destroy(person);
    free(person);
}

int main(void) {
    example();

    return EXIT_SUCCESS;
}
