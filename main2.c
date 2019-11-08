
#include<stdio.h>
#include<stdlib.h>

/*int somme(int num_ops)
{
    int n=0;
    int i=0;
    while(i<num_ops){
        i=i+1;
        n=n+i;
    }
    return n;
}
int main(int argc,char**argv)
{

    int tab[N];
    int i=0;
    while(i<N){
        tab[i]=somme(i);
        printf("%d\n",tab[i]);
        i=i+1;
    }

    int max=100;
    int resultat=0;
    resultat=somme(max);
    printf("la somme des %d premiers entiers est: %d\n",max,resultat);
    return 0;
}

int somme(int tab[],int size){
    int res=0;
    for(int i=0; i<size;i++){
        res+=i;
        tab[i]=res;
    }
    return res;
}
void affiche_tab(int bidule[],int size){
    for(int i=0;i<size;i++){
        printf("tableau[%i]:%i\n",i,bidule[i])
    }
}

int somme_2(int a, int b){
    printf("La somme vaut:%d\n",a+b);
    return 0;
}
int main(int argc, char const *argv[])
{
    somme_2(4,5);
    return 0;
}

int main(int argc, char*argv[]){
    int i=0;
    int res=0;
    for(int i=1; i<argc;i++){
        res+= atoi(argv[i]);
    printf("la somme des args=%i\n",res);
    exit(EXIT_SUCCESS);
}
}

int bissextile(int annee){
    return(!(annee%4)&&(annee%100));
}

int main(int argc, char const *argv[])
{
    int annee=atoi(argv[1]);
    printf(bissextile(annee)?"%i est bissextile\n":"%i n'est pas bissextile\n",annee);
    return 0;
}


int num_bits(unsigned int arg){
    int res=0;
    do{
        res+=(arg&(0x1));
        while(res>>=1;
        )
    }return res;
}
}
int main(int argc, char const *argv[])
{
    char titi='b';
    int*ptr=&titi;
    printf("%i",ptr);
    return 0;
}

void swap(int *a, int *b) 
{ 
    *a=*a-*b;
    *b = *b+*a;
    *a =*b-*a;  
 }
int main(int argc, char const *argv[])
    {
        int toto=2;
        int tata=3;
        printf("%i,%i\n",toto,tata);
        swap(&toto,&tata);
        printf("%i,%i\n",toto,tata);
        return 0;
    }*/

int somme(int num_ops)
{
    int n=0;
    int i=0;
    while(i<num_ops){
        i=i+1;
        n=n+i;
    }
    return n;
}

int main(int argc, char const *argv[])
{
    int max=100;
    int resultat=0;
    resultat=somme(max);
    printf("la somme des %d premiers entiers est: %d\n",max,resultat);
    return 0;
}



