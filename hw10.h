struct shoes{char name[256]; int price; struct shoes *next;};
void print_shoes(struct shoes *s);
struct shoes * make_shoes(char *n, int q);
void print_list(struct shoes *s);
struct shoes * insert_front(struct shoes *s, char *n, int p);
struct shoes * free_list(struct shoes *s);
struct shoes * remove_node(struct shoes *front, char *n, int p);

