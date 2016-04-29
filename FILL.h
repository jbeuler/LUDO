a=0;
e=0;
for(i=0; i<6; i++)/**HAUT*/
{
for(j=6; j<9; j++)
        {
        xypiece[i][j].x=xyPetitCarre[i][j].x  = (l_ecran-LONGUEUR_TABLEAU)/COEFFICIENT_X + (dimCarre*6+7) +j*(dimCarre+1)-6*(dimCarre+1);
        xypiece[i][j].y=xyPetitCarre[i][j].y    = (L_ecran-LONGUEUR_TABLEAU)/2+ i + dimCarre*i;

        PetitCarre[i][j] = SDL_CreateRGBSurface(SDL_HWSURFACE,dimCarre,dimCarre,32,0,0,0,0);

                if(a==1)
                {SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,215,205,171));
                a=0;}
                else if(a==0)
                {
                    SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,0,34,39));
                    a=1;

                }

        /*if((j==7||j==6)&&(j==7||i==0))
            {
            }
        else
            {

            }*/

        }
}


for(j=0; j<6; j++)/**GAUCHE*/
{


    for(i=6; i<9; i++)
        {
        xypiece[i][j].y=xyPetitCarre[i][j].y = (L_ecran-LONGUEUR_TABLEAU)/2 +(dimCarre*6+7) +i*(dimCarre+1) -6*(dimCarre+1);
        xypiece[i][j].x=xyPetitCarre[i][j].x = (l_ecran-LONGUEUR_TABLEAU)/COEFFICIENT_X+ j*(dimCarre+1);

        PetitCarre[i][j] = SDL_CreateRGBSurface(SDL_HWSURFACE,dimCarre,dimCarre,32,0,0,0,0);



                if(a==1)
                {SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,215,205,171));
                a=0;}
                else if(a==0)
                {
                    SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,0,34,39));
                    a=1;

                }

        /*if((j==7||j==6)&&(j==7||i==0))
            {
            }
        else
            {

            }*/

            }
}


for(i=9; i<15; i++)/**BAS*/
{
for(j=6; j<9; j++)
        {


        xypiece[i][j].x=xyPetitCarre[i][j].x = (l_ecran-LONGUEUR_TABLEAU)/COEFFICIENT_X + (dimCarre*6+7) +j*(dimCarre+1) -6*(dimCarre+1);
        xypiece[i][j].y=xyPetitCarre[i][j].y  = (L_ecran-LONGUEUR_TABLEAU)/2 +(((dimCarre*6)+5)+6+(3*dimCarre))+ i*(dimCarre+1) -9*(dimCarre+1);

        PetitCarre[i][j] = SDL_CreateRGBSurface(SDL_HWSURFACE,dimCarre,dimCarre,32,0,0,0,0);
        if(a==0)
                {SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,215,205,171));
                a=1;}
                else if(a==1)
                {
                    SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,0,34,39));
                    a=0;

                }

        /*if((j==7||j==6)&&(j==7||i==0))
            {
            }
        else
            {

            }*/
            }

        }


for(j=9; j<15; j++)/**DROITE*/
{

        for(i=6; i<9; i++)
        {

        xypiece[i][j].y=xyPetitCarre[i][j].y = (L_ecran-LONGUEUR_TABLEAU)/2 +dimCarre*6+7 +i*(dimCarre+1) -6*(dimCarre+1);
        xypiece[i][j].x=xyPetitCarre[i][j].x  = (l_ecran-LONGUEUR_TABLEAU)/COEFFICIENT_X +(((dimCarre*6)+5)+6+(3*dimCarre))+ j*(dimCarre+1) -9*(dimCarre+1);

        PetitCarre[i][j] = SDL_CreateRGBSurface(SDL_HWSURFACE,dimCarre,dimCarre,32,0,0,0,0);
        if(a==0)
                {SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,215,205,171));
                a=1;}
                else if(a==1)
                {
                    SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,0,34,39));
                    a=0;

                }

        /*if((j==7||j==6)&&(j==7||i==0))
            {
            }
        else
            {

            }*/

        }
}


/**Gestion des home*/

    xypiece[6][7].x=xyPetitCarre[6][7].x=xyPetitCarre[5][7].x;  /// HG
    xypiece[6][7].y=xyPetitCarre[6][7].y=xyPetitCarre[5][7].y + (dimCarre + 1);

    xypiece[7][8].x=xyPetitCarre[7][8].x=xyPetitCarre[7][9].x - (dimCarre + 1); /// HD
    xypiece[7][8].y=xyPetitCarre[7][8].y=xyPetitCarre[7][9].y;

    xypiece[8][7].x=xyPetitCarre[8][7].x=xyPetitCarre[9][7].x; /// BD
    xypiece[8][7].y=xyPetitCarre[8][7].y=xyPetitCarre[9][7].y - (dimCarre + 1);

    xypiece[7][6].x=xyPetitCarre[7][6].x=xyPetitCarre[7][5].x + (dimCarre + 1); /// BG
    xypiece[7][6].y=xyPetitCarre[7][6].y=xyPetitCarre[7][5].y;

    PetitCarre[8][7] = SDL_CreateRGBSurface(SDL_HWSURFACE,dimCarre,dimCarre,32,0,0,0,0);
    PetitCarre[7][8] = SDL_CreateRGBSurface(SDL_HWSURFACE,dimCarre,dimCarre,32,0,0,0,0);
    PetitCarre[7][6] = SDL_CreateRGBSurface(SDL_HWSURFACE,dimCarre,dimCarre,32,0,0,0,0);
    PetitCarre[6][7] = SDL_CreateRGBSurface(SDL_HWSURFACE,dimCarre,dimCarre,32,0,0,0,0);

    SDL_FillRect(PetitCarre[8][7],NULL,SDL_MapRGB(ecran->format,23,168,147));
    SDL_FillRect(PetitCarre[7][8],NULL,SDL_MapRGB(ecran->format,128,128,128));
    SDL_FillRect(PetitCarre[7][6],NULL,SDL_MapRGB(ecran->format,0,128,192));
    SDL_FillRect(PetitCarre[6][7],NULL,SDL_MapRGB(ecran->format,0,64,128));







for(i=0; i<2; i++)/**GRAND CARRE*/
{
for(j=0; j<2; j++)
    {
    xyGrandCarre[i][j].x=(l_ecran-LONGUEUR_TABLEAU)/COEFFICIENT_X +(((dimCarre*3)+6)+(dimCarre*6)+3)*j+ 4*j;
    xyGrandCarre[i][j].y=(L_menu-LONGUEUR_TABLEAU)/2 +(((dimCarre*6)+5)+8+(3*dimCarre))*i;

    if(i==0&&j==0)
        GrandCarre[i][j]= IMG_Load("pieces/GC00.jpg");
    else if(i==1&&j==0)
        GrandCarre[i][j]= IMG_Load("pieces/GC10.jpg");
    else if(i==1&&j==1)
        GrandCarre[i][j]= IMG_Load("pieces/GC11.jpg");
    else if(i==0&&j==1)
        GrandCarre[i][j]= IMG_Load("pieces/GC01.jpg");


    /*if(i==0&&j==1)
    SDL_FillRect(GrandCarre[i][j],NULL,SDL_MapRGB(ecran->format,137,120,71));
    else if(i==1&&j==0)
    SDL_FillRect(GrandCarre[i][j],NULL,SDL_MapRGB(ecran->format,137,120,71));
    else if(i==1&&j==1)
    SDL_FillRect(GrandCarre[i][j],NULL,SDL_MapRGB(ecran->format,137,120,71));
    else if(i==0&&j==0)
    SDL_FillRect(GrandCarre[i][j],NULL,SDL_MapRGB(ecran->format,137,120,71));*/

   /// SDL_SetAlpha(GrandCarre[i][j], SDL_SRCALPHA,255);


    }
}

    /**Positions des noms des joueurs*/
    pos[1].x=xyGrandCarre[1][1].x+  4*dimCarre;
    pos[1].y=xyGrandCarre[1][1].y + 5*dimCarre;

    pos[2].x=xyGrandCarre[0][1].x+  4*dimCarre;
    pos[2].y=xyGrandCarre[0][1].y + dimCarre/2;

    pos[3].x=xyGrandCarre[0][0].x+  dimCarre/2;
    pos[3].y=xyGrandCarre[0][0].y + dimCarre/2;

    pos[4].x=xyGrandCarre[1][0].x+  dimCarre/2;
    pos[4].y=xyGrandCarre[1][0].y + 5*dimCarre;








    CarreMilieu = IMG_Load("pieces/carremil.jpg");/**CARRE MILIEU*/



    /**lignes*/
    lignes = SDL_CreateRGBSurface(SDL_HWSURFACE,2,2,32,0,0,0,0);
    SDL_FillRect(lignes,NULL,SDL_MapRGB(ecran->format,0,0,0));


    /**rectangle_noir pour le "quitter" et autres*/
    rectangle_noir= IMG_Load("pieces/ecran_noir.bmp");
    SDL_SetAlpha(rectangle_noir, SDL_SRCALPHA ,150);

    /**rectangle choix de quitter*/
    rectangle_quitter= SDL_CreateRGBSurface(SDL_HWSURFACE,430,125,32,0,0,0,0);
    SDL_FillRect(rectangle_quitter,NULL,SDL_MapRGB(ecran->format,33,57,88));
    SDL_SetAlpha(rectangle_quitter, SDL_SRCALPHA ,200);

    /**rectangle nouvelle partie*/
    rectangle_np=SDL_CreateRGBSurface(SDL_HWSURFACE,l_ecran,L_ecran,32,0,0,0,0);
    SDL_FillRect(rectangle_np,NULL,SDL_MapRGB(ecran->format,0,136,141));

    /**rectangle joueur begin*/
    rectangle_jb=SDL_CreateRGBSurface(SDL_HWSURFACE,400,300,32,0,0,0,0);
    SDL_FillRect(rectangle_jb,NULL,SDL_MapRGB(ecran->format,33,57,88));
    SDL_SetAlpha(rectangle_jb, SDL_SRCALPHA ,200);

    /**encadrement pour les des*/
    encadre_de=SDL_CreateRGBSurface(SDL_HWSURFACE,166,110,32,0,0,0,0);
    SDL_FillRect(encadre_de,NULL,SDL_MapRGB(ecran->format,33,57,88));
    SDL_SetAlpha(encadre_de, SDL_SRCALPHA ,200);

    /**Champs de texte*/
    champs=SDL_CreateRGBSurface(SDL_HWSURFACE,225,35,32,0,0,0,0);
    SDL_FillRect(champs,NULL,SDL_MapRGB(ecran->format,128,128,128));
    SDL_SetAlpha(champs, SDL_SRCALPHA ,220);

    /**Carre blanc*/
    carreblanc=SDL_CreateRGBSurface(SDL_HWSURFACE,LONGUEUR_TABLEAU+15,LONGUEUR_TABLEAU+15,32,0,0,0,0);
    SDL_FillRect(carreblanc,NULL,SDL_MapRGB(ecran->format,0,0,0));
    SDL_SetAlpha(carreblanc, SDL_SRCALPHA ,250);

    /**Hint*/
    hint=SDL_CreateRGBSurface(SDL_HWSURFACE,510,42,32,0,0,0,0);
    SDL_FillRect(hint,NULL,SDL_MapRGB(ecran->format,255,244,141));
    SDL_SetAlpha(hint, SDL_SRCALPHA ,150);






     for(i=0;i<3;i++)
        for(j=0;j<10;j++)
    {
        xyboutton_clavier[i][j].x=xybox_quitter.x+15+20+ 32*j;
        xyboutton_clavier[i][j].y=170+xybox_quitter.y+ 32*i;

        /**Boutton clavier*/

        if(i!=2||j!=9)
        {boutton_clavier[i][j]=SDL_CreateRGBSurface(SDL_HWSURFACE,30,30,32,0,0,0,0);
        SDL_FillRect(boutton_clavier[i][j],NULL,SDL_MapRGB(ecran->format,255,255,255));
        SDL_SetAlpha(boutton_clavier[i][j],SDL_SRCALPHA,150);}
        else
        boutton_clavier[i][j]=IMG_Load("pieces/backspace.bmp");


    }











    for(i=0; i<2; i++)/**Carre Jaune*/
    {
    for(j=0; j<2; j++)
    {
    xyCarreJaune[i][j].x=(l_ecran-LONGUEUR_TABLEAU)/COEFFICIENT_X -6+(((dimCarre*3)+6+6)+(dimCarre*6)+4)*j;
    xyCarreJaune[i][j].y=(L_menu-LONGUEUR_TABLEAU)/2 -6+(((dimCarre*6)+5)+4+(3*dimCarre)+7)*i;

    }
    }
    carrejaune=SDL_CreateRGBSurface(SDL_HWSURFACE,(dimCarre*6)+13,(dimCarre*6)+13,32,0,0,0,0);
    SDL_FillRect(carrejaune,NULL,SDL_MapRGB(ecran->format,255,144,64));





