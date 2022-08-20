typedef struct node *List;

List creat_list();
int empty_list(List lst);
int insert_soldier_end(List *lst, char *nome);
int insert_mortos(List *lst, char *nome);
int sort_number(List lst);
int list_size(List lst);
int remove_soldier(List *sold, List *baixas);
void print_list(List lst);