#include <stdio.h>
#include <stdlib.h>

typedef struct noeud {
int valeur;
struct noeud*suivant;
}noeud;

noeud*cree(int valeur){
noeud*nv=(noeud*)malloc(sizeof(noeud));
if(nv==null){
    printf("error");
    }else{
nv->valeur=valeur;
nv->suivant=null;
return nv ;
}
};


void afficher(noeud*debut){
    noeud*tmp=debut;
    *tmp;
    while(tmp!=null){
        printf("%d",tmp->valeur);
        tmp=tmp->suivant;
    }
};

noeud*ajouterD(noeud*debut,int valeur){
    noeud*nv=null;
    if(nv){
        nv->nv=valeur;
        nv->suivant=debut;
        return nv;
    }
};

noeud*ajouterF(noeud*debut,int valeur){
    noeud*nv=null;
    *tmp;
    nv=(noeud*)malloc(sizeof(noeud));
    if(nv){
        nv=valeur;
    }
    else if(debut==null){
        debut=nv;
    }else{
        tmp=debut;
        while(tmp->suivant!=null){
            tmp=tmp->suivant;
            tmp->suivant=nv;
        }
    }return debut;
};

int taille(noeud *debut) {
int i=0;
noeud *tmp;
    ;
    noeud*tmp = debut;
    while (tmp!= null)
    {
        i++;
        tmp = tmp->suivant;
    }
    return i;
};

noeud*insertion(noeud*debut,int pos,int valeur){
    {
    noeud *nv, *tmp;
nv= (noeud *)malloc(sizeof(noeud));
nv->valeur = valeur;
    nv->suivant = null;

int size = taille(debut);
    if (pos < 1 || pos > size + 1) {
      printf("error");
    } else if (pos == 1) {

        NV->suivant = debut;
        debut = NV;
    }else{

        tmp= debut;
        for (int i = 1; i < pos - 1; i++){

          tmp = tmp->suivant;
           };
            nv->suivant = tmp->suivant;

              tmp->suivant = nv;

         };
    return debut;
};

void  rechercher(noeud*debut,int valeur){
    noeud*tmp=debut;
    while (tmp->valeur==valeur{
           if(tmp->valeur==valeur){
            return tmp;
           }tmp=tmp->suivant;
    }return null;

}


 noeud*suppressionD(noeud*debut){
     noeud*tmp=debut;
     if(debut){
        debut=tmp->suivant;
        free(tmp);
     }return debut;
 }


 noeud*suppressionF(noeud*debut){
     noeud*tmp=debut;
     if(debut==null){
        printf("la liste est vide");
        }else if(debut->suivant==null){
            free(debut);
            debut=null;

            }else{
                while(tmp->suivant->suivant){
                    tmp=tmp->suivant;
                }
            }free(tmp->suivant);
            tmp->suivant=null;
             return debut;
 }



 noeud*suppressionP(noeud*debut,int pos){
     noeud*courant=debut;
     *tmp;
     while(couarnt->suivant&&pos!=courant->suivant->valeur){
        courant=courant->suivant;

    }if(!(courant->suivant){
        printf("l'element n'existe pas");
        }else{
            tmp=courant->suivant;
            courant=courant->suivant->suivant;
            free(tmp);
            }
            return debut;
 }

 noeud*modifierD(noeud*debut, int valeur)
{
    if(debut==null)
       {return null; }

   else{debut->valeur=valeur;
    return debut;           }

};


noeud *modifierF(noeud*debut, int valeur)
{
    if (debut == null) {
     printf("la liste est vide");
        return null;
    }
       noeud *courant;
        courant = debut;
    while (courant->suivant!=null) {
        courant=courant->suivant;
    }
    courant->valeur = valeur;
    return debut;


 noeud *modifierP(noeud*debut, int pos, int valeur)
{ int i;
    if (debut == NULL){
     printf("la liste est vide");
        return null;
    }
    int size =taille(debut);
    if (pos < 1 ||pos> size) {
   printf("la position est invalide");
        return debut;
    }
    noeud *courant;
    courant = debut;
    for (i = 1;i<pos;i++) {
      courant=courant->suivant;
    }
    courant->valeur=valeur;
    return debut;

 int main(){
  noeud*debut =null;
    noeud*M = cree(10);
    noeud*N = cree(20);
    noeud*O = cree(30);

    printf("adreese du noeud debut : %p", debut);
    printf("adreese du noeud M : %p", M);
    printf("adreese du noeud N : %p", N);
    printf("adreese du noeud O :  %p",O);

    debut = M;
    M->suivant = N;
    N->suivant = O;
    O->suivant = null;


    printf("adreese du noeud %p",debut);
    printf("adreese du noeud M suivant %p", M->suivant);
    printf("adreese du noeud N suivant %p\n", N->suivant);
    printf("adreese du noeud O suivant %p\n", O->suivant);
    affiche(debut);

    printf("Ajout au debut");
    debut = ajouterD(debut,60);
    affiche(debut);

    printf("Affichage a la fin");
    debut = ajouterF(debut,80);
    affiche(debut);

    printf("Recherche");
    rechercher(debut,20);

    printf("Taille de la liste");
    printf("la taille est %d", taille(debut));

    printf("Insertion à une position");
    debut = insertion(debut, 2,36);
    affiche(debut);

    printf("Suppression au debut");
    debut = suppressionD(debut);
    affiche(debut);

    printf("Suppression à la fin");
    debut = suppressionF(debut);
    affiche(debut);

    printf("Suppression à une position");
    debut = suppressionP(debut,9);
    affiche(debut);

    printf("Modifier au debut");
    debut = modifierD(debut,4);
    affiche(debut);

    printf("Modifier à la fin");
    debut = modifierF(debut,5);
    affiche(debut);

    printf("Modifier à une position");
    debut = modifierP(debut,4,67);
     affiche(debut);

    return 0;
}
