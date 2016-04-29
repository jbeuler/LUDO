    /**RESPECT DE LORDRE DES OBJETS COLLES*/

    SDL_BlitSurface(fond_jeu, NULL, ecran, &pos0);

    SDL_BlitSurface(carreblanc, NULL, ecran, &xyCarreBlanc);///Carre de fond



                                        if(u>rchecked)///pour ecrire le nom des joueurs sur le tableau
                                        {texte[29]=TTF_RenderText_Blended(police[7],joueur1,black);
                                        texte[30]=TTF_RenderText_Blended(police[7],joueur2,black);
                                        texte[31]=TTF_RenderText_Blended(police[7],joueur3,black);
                                        texte[32]=TTF_RenderText_Blended(police[7],joueur4,black);}







    if(socle==0)
    SDL_BlitSurface(carrejaune, NULL, ecran, &xyCarreJaune[0][0]);
    else if(socle==1)
    SDL_BlitSurface(carrejaune, NULL, ecran, &xyCarreJaune[1][1]);
    else if(socle==2)
    SDL_BlitSurface(carrejaune, NULL, ecran, &xyCarreJaune[1][0]);
    else if(socle==3)
    SDL_BlitSurface(carrejaune, NULL, ecran, &xyCarreJaune[0][1]);

    for(i=0;i<2;i++)
    {
     SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);
     SDL_BlitSurface(texte[36+i],NULL,ecran,&position[36+i]);
    }

    SDL_BlitSurface(texte[36],NULL,ecran,&position[36]);

    ///SDL_BlitSurface(encadre_de,NULL,ecran,&xyencadre_de);/**Enadrement*/
    cercle[1]=filledCircleRGBA(ecran,xyDe_anim[0].x+79,xyDe_anim[0].y+79/2,96,33,57,88,255);
    cercle[0]=filledCircleRGBA(ecran,xyDe_anim[0].x+79,xyDe_anim[0].y+79/2,92,255,255,255,255);

    SDL_BlitSurface(De[anim1],NULL,ecran,&xyDe_anim[0]);/**Dice1 of animation*/
    SDL_BlitSurface(De[anim2],NULL,ecran,&xyDe_anim[1]);/**Dice2 of animation*/




    SDL_BlitSurface(CarreMilieu,NULL,ecran,&xyCarreMilieu);/**CARRE MILIEU*/

for(j=0; j<6; j++)/**GAUCHE*/
{
    for(i=6; i<9; i++)
    SDL_BlitSurface(PetitCarre[i][j], NULL, ecran, &xyPetitCarre[i][j]);

}


for(i=0; i<6; i++)/**HAUT*/
{
    for(j=6; j<9; j++)
    SDL_BlitSurface(PetitCarre[i][j], NULL, ecran, &xyPetitCarre[i][j]);
}


for(j=9; j<15; j++)/**DROITE*/
{
    for(i=6; i<9; i++)
    SDL_BlitSurface(PetitCarre[i][j], NULL, ecran, &xyPetitCarre[i][j]);
}

for(i=9; i<15; i++)/**BAS*/
{
    for(j=6; j<9; j++)
    SDL_BlitSurface(PetitCarre[i][j], NULL, ecran, &xyPetitCarre[i][j]);
}

for(j=0; j<2; j++)/**GRAND CARRE*/
{
    for(i=0; i<2; i++)
    SDL_BlitSurface(GrandCarre[i][j],NULL,ecran,&xyGrandCarre[i][j]);
}

//SDL_BlitSurface(tablo,NULL,ecran,&pos_tablo);



 if(u>rchecked)///pour ecrire le nom des joueurs sur le tableau
 {
    if(rchecked==2)
    {   if(cjb==1)
        {SDL_BlitSurface(texte[29],NULL,ecran,&pos[1]);
        SDL_BlitSurface(texte[30],NULL,ecran,&pos[3]);

        if(strcmp(joueur2,"Ordinateur1")==0)
            jcomp[0]=1;
            else if(strcmp(joueur2,"Ordinateur1")!=0)
                jcomp[0]=0;
        }


        else if(cjb==2)
        {
            SDL_BlitSurface(texte[30],NULL,ecran,&pos[1]);
            SDL_BlitSurface(texte[29],NULL,ecran,&pos[3]);

            if(strcmp(joueur2,"Ordinateur1")==0)
            jcomp[1]=1;
            else if(strcmp(joueur2,"Ordinateur1")!=0)
                jcomp[1]=0;
        }


    }

    if(rchecked==3)
    {
            if(cjb==1)
            {SDL_BlitSurface(texte[29],NULL,ecran,&pos[1]);
            SDL_BlitSurface(texte[30],NULL,ecran,&pos[3]);
            SDL_BlitSurface(texte[31],NULL,ecran,&pos[4]);

            if(strcmp(joueur2,"Ordinateur1")==0)
            jcomp[0]=1;
            else if(strcmp(joueur2,"Ordinateur1")!=0)
                jcomp[0]=0;


            if(strcmp(joueur3,"Ordinateur2")==0)
            jcomp[2]=1;
            else if(strcmp(joueur3,"Ordinateur2")!=0)
                jcomp[2]=0;


            }
            else if(cjb==2)
            {
            SDL_BlitSurface(texte[30],NULL,ecran,&pos[1]);
            SDL_BlitSurface(texte[29],NULL,ecran,&pos[3]);
            SDL_BlitSurface(texte[31],NULL,ecran,&pos[4]);

            if(strcmp(joueur2,"Ordinateur1")==0)
            jcomp[1]=1;
            else if(strcmp(joueur2,"Ordinateur1")!=0)
                jcomp[1]=0;


            if(strcmp(joueur3,"Ordinateur2")==0)
            jcomp[2]=1;
            else if(strcmp(joueur3,"Ordinateur2")!=0)
                jcomp[2]=0;
            }
            else if(cjb==3)
            {
            SDL_BlitSurface(texte[31],NULL,ecran,&pos[1]);
            SDL_BlitSurface(texte[29],NULL,ecran,&pos[3]);
            SDL_BlitSurface(texte[30],NULL,ecran,&pos[4]);

            if(strcmp(joueur2,"Ordinateur1")==0)
            jcomp[2]=1;
            else if(strcmp(joueur2,"Ordinateur1")!=0)
                jcomp[2]=0;


            if(strcmp(joueur3,"Ordinateur2")==0)
            jcomp[1]=1;
            else if(strcmp(joueur3,"Ordinateur2")!=0)
                jcomp[1]=0;

            }

    }

    if(rchecked==4)
    {
            if(cjb==1)
            {
            SDL_BlitSurface(texte[29],NULL,ecran,&pos[1]);
            SDL_BlitSurface(texte[30],NULL,ecran,&pos[2]);
            SDL_BlitSurface(texte[31],NULL,ecran,&pos[3]);
            SDL_BlitSurface(texte[32],NULL,ecran,&pos[4]);

            if(strcmp(joueur2,"Ordinateur1")==0)
            jcomp[3]=1;
            else if(strcmp(joueur2,"Ordinateur1")!=0)
                jcomp[3]=0;

            if(strcmp(joueur3,"Ordinateur2")==0)
            jcomp[0]=1;
            else if(strcmp(joueur3,"Ordinateur2")!=0)
                jcomp[0]=0;

            if(strcmp(joueur4,"Ordinateur3")==0)
                jcomp[2]=1;
                else if(strcmp(joueur4,"Ordinateur3")!=0)
                    jcomp[2]=0;


            }
            else if(cjb==2)
            {
            SDL_BlitSurface(texte[30],NULL,ecran,&pos[1]);
            SDL_BlitSurface(texte[29],NULL,ecran,&pos[2]);
            SDL_BlitSurface(texte[31],NULL,ecran,&pos[3]);
            SDL_BlitSurface(texte[32],NULL,ecran,&pos[4]);

            if(strcmp(joueur2,"Ordinateur1")==0)
            jcomp[1]=1;
            else if(strcmp(joueur2,"Ordinateur1")!=0)
                jcomp[1]=0;

            if(strcmp(joueur3,"Ordinateur2")==0)
            jcomp[0]=1;
            else if(strcmp(joueur3,"Ordinateur2")!=0)
                jcomp[0]=0;

            if(strcmp(joueur4,"Ordinateur3")==0)
                jcomp[2]=1;
                else if(strcmp(joueur4,"Ordinateur3")!=0)
                    jcomp[2]=0;

            }
            else if(cjb==3)
            {
            SDL_BlitSurface(texte[31],NULL,ecran,&pos[1]);
            SDL_BlitSurface(texte[29],NULL,ecran,&pos[2]);
            SDL_BlitSurface(texte[30],NULL,ecran,&pos[3]);
            SDL_BlitSurface(texte[32],NULL,ecran,&pos[4]);

            if(strcmp(joueur2,"Ordinateur1")==0)
            jcomp[0]=1;
            else if(strcmp(joueur2,"Ordinateur1")!=0)
                jcomp[0]=0;

            if(strcmp(joueur3,"Ordinateur2")==0)
            jcomp[1]=1;
            else if(strcmp(joueur3,"Ordinateur2")!=0)
                jcomp[1]=0;

            if(strcmp(joueur4,"Ordinateur3")==0)
                jcomp[2]=1;
                else if(strcmp(joueur4,"Ordinateur3")!=0)
                    jcomp[2]=0;
            }
            else if(cjb==4)
            {
            SDL_BlitSurface(texte[32],NULL,ecran,&pos[1]);
            SDL_BlitSurface(texte[29],NULL,ecran,&pos[2]);
            SDL_BlitSurface(texte[30],NULL,ecran,&pos[3]);
            SDL_BlitSurface(texte[31],NULL,ecran,&pos[4]);

            if(strcmp(joueur2,"Ordinateur1")==0)
            jcomp[0]=1;
            else if(strcmp(joueur2,"Ordinateur1")!=0)
                jcomp[0]=0;

            if(strcmp(joueur3,"Ordinateur2")==0)
            jcomp[2]=1;
            else if(strcmp(joueur3,"Ordinateur2")!=0)
                jcomp[2]=0;

            if(strcmp(joueur4,"Ordinateur3")==0)
                jcomp[1]=1;
                else if(strcmp(joueur4,"Ordinateur3")!=0)
                    jcomp[1]=0;
            }



    }

 }



 /**les homes*/
 /*SDL_BlitSurface(PetitCarre[8][7], NULL, ecran, &xyPetitCarre[8][7]);
 SDL_BlitSurface(PetitCarre[7][8], NULL, ecran, &xyPetitCarre[7][8]);
 SDL_BlitSurface(PetitCarre[7][6], NULL, ecran, &xyPetitCarre[7][6]);
 SDL_BlitSurface(PetitCarre[6][7], NULL, ecran, &xyPetitCarre[6][7]);*/




           /// #include "lignes.h"
