#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hw10.h"

int main() {

    struct shoes *linkedList = NULL;

    print_list(linkedList);
    printf("Printed an empty linked list, no error so far :smile:\n");

    linkedList = insert_front(linkedList, "Air Force 1", 120);
    linkedList = insert_front(linkedList, "Jordan 1", 170);
    printf("\nAdded Jordan1 and Air Forces\n");
    print_list(linkedList);
    
    linkedList = remove_node(linkedList, "Jordan 1", 170);
    printf("\nRemoved the Jordan 1s\n");
    print_list(linkedList);

    linkedList = insert_front(linkedList, "Tennis Shoes", 59);
    printf("\nAdded Tennis Shoes\n");
    print_list(linkedList);

    printf("\nFree The List\n");
    linkedList = free_list(linkedList);


    print_list(linkedList);
    printf("\nPrint Freed List(empty)\n");

    return 0;
}
