typedef struct ponto Ponto;

Ponto * gera_pto();
int set_pto(Ponto *p, int a, int b);
int get_pto(Ponto *p, int *a, int *b);
float Distancia_pto(Ponto *p1, Ponto *p2);
int libera_pto(Ponto **p);