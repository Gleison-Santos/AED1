typedef struct node *Poli;
Poli criar_poli();
int vazio_poli(Poli p);
int inserir_term_ord(Poli *p, int base, int expo);
void imprime_poli(Poli p);
int remove_term(Poli *p, int expo);
int reinicia_poli(Poli *p);
int calcular_poli(Poli p, int x);