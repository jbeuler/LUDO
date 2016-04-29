#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <fmodex/fmod.h>

#include "SDL/SDL_gfxPrimitives.h"
#include "SDL/SDL_rotozoom.h"


#include "prototypes.h"

#define COEFFICIENT_X 2
#define ESPACE_MOTS 60
#define l_ecran 1024
#define L_ecran 600
#define L_menu 600
#define dimCarre 37
#define TAILLE_LUDO 85/**Le texte*/





int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    SDL_Event event, buttonup, debut, quitter, nvlepartie, joueur_begin, ecrire, fin, regle, quitter_partie, feuDartifice, IA;
    FILE *fichier=NULL, *fichier1=NULL;
    fichier=fopen("pieces/regles.txt","r");
    fichier1=fopen("pieces/save.txt","r+");

    FMOD_SYSTEM *system;

    FMOD_SOUND *deplace;
    FMOD_SOUND *choose;
    FMOD_SOUND *eat;
    FMOD_SOUND *turn;
    FMOD_SOUND *info;
    FMOD_SOUND *diice;



    FMOD_System_Create(&system);
    FMOD_System_Init(system,7,FMOD_INIT_NORMAL,NULL);
    FMOD_System_CreateSound(system,"sons/marche.ogg",FMOD_CREATESAMPLE,0,&deplace);
    FMOD_System_CreateSound(system,"sons/repas.ogg",FMOD_CREATESAMPLE,0,&eat);
    FMOD_System_CreateSound(system,"sons/choix.ogg",FMOD_CREATESAMPLE,0,&choose);
    FMOD_System_CreateSound(system,"sons/tour.ogg",FMOD_CREATESAMPLE,0,&turn);
    FMOD_System_CreateSound(system,"sons/hint.ogg",FMOD_CREATESAMPLE,0,&info);
    FMOD_System_CreateSound(system,"sons/shake.ogg",FMOD_CREATESAMPLE,0,&diice);



    SDL_Surface *ecran=NULL, *menu=NULL,*croix, *PetitCarre[15][15]={NULL},*piece[16]={NULL},*De[22]={NULL}, *GDe=NULL, *cercle[16]={NULL};
    SDL_Surface *lignes=NULL, *GrandCarre[2][2]={NULL}, *CarreMilieu=NULL,*image_menu[3]={NULL};
    SDL_Surface *case_lum=NULL, *case_pointmotion=NULL, *case_point=NULL, *texte[39]={NULL}, *loading[24]={NULL};
    SDL_Surface *anim_fds[32]={NULL}, *rectangle_noir=NULL, *rectangle_quitter=NULL, *rectangle_np=NULL;
    SDL_Surface *rectangle_jb=NULL, *encadre_de=NULL, *champs=NULL, *carrejaune=NULL, *carreblanc=NULL, *fond_ecran=NULL, *hint=NULL;
    SDL_Surface *boutton_clavier[3][10]={NULL}, *touche[3][10]={NULL}, *rules=NULL;
    SDL_Surface *fireworks[19]={NULL}, *fireworks1[16]={NULL}, *fireworks2[20]={NULL}, *fond_jeu=NULL, *tablo=NULL;

    SDL_Color blue={27,191,216}, colour1={0,0,0}, green={0,89,94},white={255,255,255}, colour2={255,255,255};
    SDL_Color blue_fonce={1,77,156}, black={0,0,0};



    fond_ecran=IMG_Load("pieces/fond_new.jpg");
    case_lum=IMG_Load("pieces/case_lum.jpg");
    case_pointmotion=IMG_Load("pieces/case_pointmotion.png");
    case_point=IMG_Load("pieces/case_point.jpg");
    GDe=IMG_Load("pieces/ID27.png");
    croix=IMG_Load("pieces/croix.png");
    fond_jeu=IMG_Load("pieces/fond2.png");
    tablo=IMG_Load("pieces/design.jpg");

    #include "initialisation_anim.h"


    char joueur1[25]="Nom", joueur2[25]="Nom", joueur3[25]="Nom";
    char joueur4[25]="Nom", papier[25]="";
    char joueur1_nbrepts[25]="", joueur2_nbrepts[25]="", joueur3_nbrepts[25]="", joueur4_nbrepts[25]="", blank[25]="";
    char kikomans[100]="", message[100]="", car_touche[26][2]={NULL}, message1[100]="", instructions[150]="";





    TTF_Font *police[11]={NULL};

    police[0]=TTF_OpenFont("font/angelina.ttf",TAILLE_LUDO);
    police[1]=TTF_OpenFont("font/verdana.ttf",20);
    police[2]=TTF_OpenFont("font/gabriel.ttf",30);
    police[3]=TTF_OpenFont("font/gabriel.ttf",32);
    police[4]=TTF_OpenFont("font/angelina.ttf",35);
    police[5]=TTF_OpenFont("font/angelina.ttf",20);
    police[6]=TTF_OpenFont("font/angelina.ttf",30);
    police[7]=TTF_OpenFont("font/calibri.ttf",15);
    police[8]=TTF_OpenFont("font/calibri.ttf",18);
    police[9]=TTF_OpenFont("font/calibri.ttf",22);
    police[10]=TTF_OpenFont("font/angelina.ttf",35);



    texte[0]=TTF_RenderText_Blended(police[0],"Ludo",blue);
    texte[1]=TTF_RenderText_Blended(police[1],"JOUER",white);
    texte[2]=TTF_RenderText_Blended(police[0],"Ludo",green);
    texte[3]=TTF_RenderText_Blended(police[2],"Nouvelle Partie",blue);
    texte[4]=TTF_RenderText_Blended(police[2],"Charger Partie",blue);
    texte[5]=TTF_RenderText_Blended(police[2],"Instructions",blue);
    texte[6]=TTF_RenderText_Blended(police[2],"Options",blue);
    texte[7]=TTF_RenderText_Blended(police[2],"Quitter",blue);

    texte[8]=TTF_RenderText_Blended(police[6],"Etes vous sur de vouloir quitter ?",white);
    texte[9]=TTF_RenderText_Blended(police[6],"oui",white);
    texte[10]=TTF_RenderText_Blended(police[6],"non",white);

    texte[11]=TTF_RenderText_Blended(police[0],"Nombre de joueurs",white);
    texte[12]=TTF_RenderText_Blended(police[4],"2",white);
    texte[13]=TTF_RenderText_Blended(police[4],"3",white);
    texte[14]=TTF_RenderText_Blended(police[4],"4",white);

    texte[15]=TTF_RenderText_Blended(police[6],"joueur 1",white);
    texte[16]=TTF_RenderText_Blended(police[6],"joueur 2",white);
    texte[17]=TTF_RenderText_Blended(police[6],"joueur 3",white);
    texte[18]=TTF_RenderText_Blended(police[6],"joueur 4",white);

    texte[19]=TTF_RenderText_Blended(police[4],"Commencer",white);

    texte[20]=TTF_RenderText_Blended(police[4],"Commencer",colour2);

    texte[21]=TTF_RenderText_Blended(police[4],joueur1,colour2);
    texte[22]=TTF_RenderText_Blended(police[4],joueur2,colour2);
    texte[23]=TTF_RenderText_Blended(police[4],joueur3,colour2);
    texte[24]=TTF_RenderText_Blended(police[4],joueur4,colour2);

    texte[25]=TTF_RenderText_Blended(police[4],"Nom",colour2);
    texte[26]=TTF_RenderText_Blended(police[4],"Ordinateur",colour2);
    texte[27]=TTF_RenderText_Blended(police[4],"ok",colour2);

    texte[29]=TTF_RenderText_Blended(police[4],joueur1_nbrepts,colour2);
    texte[30]=TTF_RenderText_Blended(police[4],joueur2_nbrepts,colour2);
    texte[31]=TTF_RenderText_Blended(police[4],joueur3_nbrepts,colour2);
    texte[32]=TTF_RenderText_Blended(police[4],joueur4_nbrepts,colour2);
    texte[33]=TTF_RenderText_Blended(police[4],kikomans,colour2);

    texte[34]=TTF_RenderText_Blended(police[7],"Deplacement Invalide",blue_fonce);

    texte[35]=TTF_RenderText_Blended(police[7],message,white);

    texte[36]=TTF_RenderText_Blended(police[9],"Quitter",white);
    texte[37]=TTF_RenderText_Blended(police[9],"Retour",white);
    texte[38]=TTF_RenderText_Blended(police[6],"Voulez vous sauvegarder le jeu en cours?",white);













    #include "initialisation.h"

    int kont=0;
    for(i=0;i<26;i++)
    {
        car_touche[i][0]='a'+kont;
        kont++;
    }

    kont=0;

    for(i=0;i<3;i++)
        for(j=0;j<10;j++)
        {
        if(kont<26)
        {touche[i][j]=TTF_RenderText_Blended(police[7],car_touche[kont],black);
        i_kont[i][j]=kont;
        kont++;
        }

        }
    touche[1][0]=TTF_RenderText_Blended(police[7],car_touche[0],black);///a
    touche[2][4]=TTF_RenderText_Blended(police[7],car_touche[1],black);///b
    touche[2][2]=TTF_RenderText_Blended(police[7],car_touche[2],black);///c
    touche[1][2]=TTF_RenderText_Blended(police[7],car_touche[3],black);///d
    touche[0][2]=TTF_RenderText_Blended(police[7],car_touche[4],black);///e
    touche[1][3]=TTF_RenderText_Blended(police[7],car_touche[5],black);///f
    touche[1][4]=TTF_RenderText_Blended(police[7],car_touche[6],black);///g
    touche[1][5]=TTF_RenderText_Blended(police[7],car_touche[7],black);///h
    touche[0][7]=TTF_RenderText_Blended(police[7],car_touche[8],black);///i
    touche[0][6]=TTF_RenderText_Blended(police[7],car_touche[9],black);///j
    touche[1][7]=TTF_RenderText_Blended(police[7],car_touche[10],black);///k
    touche[1][8]=TTF_RenderText_Blended(police[7],car_touche[11],black);///l
    touche[2][6]=TTF_RenderText_Blended(police[7],car_touche[12],black);///m
    touche[2][5]=TTF_RenderText_Blended(police[7],car_touche[13],black);///n
    touche[0][8]=TTF_RenderText_Blended(police[7],car_touche[14],black);///o
    touche[0][9]=TTF_RenderText_Blended(police[7],car_touche[15],black);///p
    touche[0][0]=TTF_RenderText_Blended(police[7],car_touche[16],black);///q
    touche[0][3]=TTF_RenderText_Blended(police[7],car_touche[17],black);///r
    touche[1][1]=TTF_RenderText_Blended(police[7],car_touche[18],black);///s
    touche[0][4]=TTF_RenderText_Blended(police[7],car_touche[19],black);///t
    touche[0][6]=TTF_RenderText_Blended(police[7],car_touche[20],black);///u
    touche[2][3]=TTF_RenderText_Blended(police[7],car_touche[21],black);///v
    touche[0][1]=TTF_RenderText_Blended(police[7],car_touche[22],black);///w
    touche[2][1]=TTF_RenderText_Blended(police[7],car_touche[23],black);///x
    touche[0][5]=TTF_RenderText_Blended(police[7],car_touche[24],black);///y
    touche[2][0]=TTF_RenderText_Blended(police[7],car_touche[25],black);///z


    i_kont[1][0]=0;///a
    i_kont[2][4]=1;///b
    i_kont[2][2]=2;///c
    i_kont[1][2]=3;///d
    i_kont[0][2]=4;///e
    i_kont[1][3]=5;///f
    i_kont[1][4]=6;///g
    i_kont[1][5]=7;///h
    i_kont[0][7]=8;///i
    i_kont[0][6]=9;///j
    i_kont[1][7]=10;///k
    i_kont[1][8]=11;///l
    i_kont[2][6]=12;///m
    i_kont[2][5]=13;///n
    i_kont[0][8]=14;///o
    i_kont[0][9]=15;///p
    i_kont[0][0]=16;///q
    i_kont[0][3]=17;///r
    i_kont[1][1]=18;///s
    i_kont[0][4]=19;///t
    i_kont[0][6]=20;///u
    i_kont[2][3]=21;///v
    i_kont[0][1]=22;///w
    i_kont[2][1]=23;///x
    i_kont[0][5]=24;///y
    i_kont[2][0]=25;///z











    ecran = SDL_SetVideoMode(l_ecran,L_menu,32,SDL_HWSURFACE|SDL_DOUBLEBUF);

    if (ecran == NULL)
    {
        fprintf(stderr,"ERREUR %s", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
    SDL_WM_SetCaption("LUDO",NULL);

    image_menu[0]=IMG_Load("pieces/pic3.png");
    image_menu[1]=IMG_Load("pieces/ludo.gif");
    //image_menu[2]=IMG_Load("pieces/0103.gif");

    for(i=0; i<4; i++)
    {
        piece[i]=SDL_LoadBMP("pieces/piece_blanche1.bmp");
        piece[i+4]=IMG_Load("pieces/b.png");

        piece[i+8]=IMG_Load("pieces/a.png");
        //piece[i+8]=IMG_Load("pieces/piece_grise1.bmp");
        piece[i+12]=SDL_LoadBMP("pieces/piece_grise1.bmp");

    }

        for(i=0; i<4; i++)
        {
        SDL_SetColorKey(piece[i],SDL_SRCCOLORKEY,SDL_MapRGB(piece[i]->format,0,41,43));

        SDL_SetColorKey(piece[i+8],SDL_SRCCOLORKEY,SDL_MapRGB(piece[i+8]->format,0,41,43));
        SDL_SetColorKey(piece[i+12],SDL_SRCCOLORKEY,SDL_MapRGB(piece[i+12]->format,0,41,43));/**transparence*/
         }

                #include "FILL.h"
                #include "initialisation_pacours.h"

              /*  #include "anim_fds.h"
                #include "anim_loading.h"*/





    while(c)
    {

    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
    SDL_BlitSurface(fond_ecran,NULL,ecran,&xyDe[5]);
    SDL_BlitSurface(GDe,NULL,ecran,&xyDe[5]);/**Grand de de fond*/

     for(i=0; i<1001;i++)
    {
        xylignes.x=i+12;
        xylignes.y=10;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);

        xylignes.y=590;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);

    }

     for(i=0; i<2;i++)
    {
        xylignes.x=i*1000+12;

        for(j=0;j<581;j++)
        {xylignes.y=j+10;

        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);}
    }



    for(i=2;i<8;i++)
    {
        SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);
    }

    SDL_Flip(ecran);


        SDL_WaitEvent(&debut);
        switch(debut.type)
        {
            case SDL_QUIT:
                c=0;
            break;

            case SDL_KEYDOWN:
                switch(debut.key.keysym.sym)
                {
                case SDLK_RETURN:
                    #include "BLIT.h"
                    #include "mov.h"
                    break;

                case SDLK_ESCAPE:
                    c=0;
                    break;

                default:
                    break;
                }
            break;

            case SDL_MOUSEMOTION:
                    xm= debut.motion.x;
                    ym= debut.motion.y;

               #include "conditions_anim_menu.h"


            break;

            case SDL_MOUSEBUTTONDOWN:

                    x=debut.button.x;
                    y=debut.button.y;
                    if((x>=l_ecran/2-TAILLE_LUDO/2 -80&&x<=(l_ecran/2-TAILLE_LUDO/2)+220)&&(y>=170+ESPACE_MOTS&&y<=200+ESPACE_MOTS))/**Charger Partie*/
                      {
                          if(tem_save==1)
                          {j_b=1;

                    fseek(fichier1,0,SEEK_SET);
                    for(i=0;i<16;i++)
                    {fscanf(fichier1,"%d %d %d %d %d %d %d %d %d %d %d %d %d %s %s %s %s\n",&cjb, &nbre_pieces,&u,&k[i],&l[i],&distans[i],&temoin[i], &stop[i], &anim1, &anim2,&rchecked, &socle, &machine, &joueur1, &joueur2, &joueur3, &joueur4);}

                    for(i=0;i<4;i++)
                    {
                        fscanf(fichier1, "%d\n",&jcomp[i]);
                    }

                    for(i=0;i<15;i++)
                        {for(j=0;j<15;j++)
                            fscanf(fichier1,"%d %d\n",&barrage[i][j].x, &barrage[i][j].y);}

                             {if(u>rchecked)
                             {
                                    #include "BLIT.h"
                                    #include "mov.h"
                             }
                             }
                          }
                          else
                          {
                                    #include "BLIT.h"
                                    #include "mov.h"
                          }
                      }

                    else if((x>=l_ecran/2-TAILLE_LUDO/2 -80&&x<=(l_ecran/2-TAILLE_LUDO/2)+220)&&(y>=170&&y<=200))/**Nouvelle Partie*/
                               {
                                   j_b=0; ///condition de joueur begin
                                   u=0;
                                   socle_begin=0;
                                   socle=1;

                                   no_game_final==1;
                                   total[2]==0;

                                    for(i=0;i<16;i++)/**Initialisation des positions de toutes les pieces*/
                                    {
                                        k[i]=i_k[i];
                                        l[i]=i_l[i];
                                        distans[i]=0;
                                        temoin[i]=0;

                                    }


                                    #include "condition_nvlepartie.h"

                                }

                    else if((x>=l_ecran/2-TAILLE_LUDO/2 -80&&x<=(l_ecran/2-TAILLE_LUDO/2)+220)&&(y>=170+2*ESPACE_MOTS&&y<=200+2*ESPACE_MOTS))/**Instruction*/
                                {
                                    #include "regle.h"

                                }
                    else if((x>=l_ecran/2-TAILLE_LUDO/2 -80&&x<=(l_ecran/2-TAILLE_LUDO/2)+220)&&(y>=170+4*ESPACE_MOTS&&y<=200+4*ESPACE_MOTS))/**Quitter*/
                                {
                                    #include "condition_quitter.h"
                                    i_anim=0;
                                    t_f=0;
                                    t_i=0;

                                }
            break;





            default:
                break;

    }

}


#include "free_surfaces.h"



    exit(EXIT_SUCCESS);

}

void pause()
{
   int continuer = 1;

   while (continuer)
   {
      SDL_Event event;
      SDL_WaitEvent(&event);
      switch (event.type)
      {
      case SDL_QUIT:
         continuer = 0;
      }
   }
}

int max_tableau(int *p, int nbre_valeurs)/**Tri a bulles*/
{
    int i=0,z=0;
    int chang=0;

                do/**on cherche le plus grand temoin qui sera p[0], le plus haut place dans une pile*/
                {
                    chang=0;
                    if(nbre_valeurs==1)
                        chang=0;
                    else
                    {   for(i=0;i<nbre_valeurs-1;i++)
                        {
                            if(p[i]<p[i+1])
                            {
                            chang=1;
                            z=p[i];
                            p[i]=p[i+1];
                            p[i+1]=z;
                            }
                        }
                    }
                }
                while(chang);

    return p[0];
}

void clean(int *tab, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=0;
    }
}



