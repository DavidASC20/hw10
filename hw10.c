#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hw10.h" 	

void print_shoes(struct shoes *s){
    if(s == NULL){
        return;
    }
    printf("The %s's will cost you around %d dollars\n", s -> name, s -> price);
}

struct shoes * make_shoes(char *n, int p){
    struct shoes *x = malloc(sizeof(struct shoes));

    strncpy(x -> name, n, sizeof(x ->name));
    x -> price = p;
    x -> next = NULL;

    return x;
}

void print_list(struct shoes *s) {
    if(s == NULL){
        return;
    }
    print_shoes(s);

    if(s ->next != NULL){
        print_list(s -> next);
    }
}

struct shoes * insert_front(struct shoes *s, char *n, int p){
    struct shoes *new = make_shoes(n, p);
    new -> next = s;
}

struct shoes * free_list(struct shoes *s){
    if(s != NULL){
        free_list(s -> next);
        free(s);
        return NULL;
    }
}

struct shoes* remove_node(struct shoes *front, char *n, int p){
    if(front -> next == NULL || front == NULL){
        return front;
    }
    if (strcmp(front -> next -> name, n) == 0 && front -> next -> price == p) {
    struct shoes * hold = front -> next -> next;
    free(front -> next);

    front -> next = hold;
  }
  else {
	  front = remove_node(front -> next, n, p);
  }

  return front;

}

