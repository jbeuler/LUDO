    int i=0, j=0, x=0, y=0, xm=0, ym=0,b=0, k[16]={0}, l[16]={0}, i_k[16]={0},i_l[16]={0},s=0,t=0,a=0;
    int continuer = 1,c=1,n=0,e=0,n_anim=0, t_i=0,t_f=0,i_anim=0,i_1=0,i_2=0,i_anim1=6, i_anim2=6,temoin_x[16]={0}, temoin_y[16]={0},temoin[16]={0};
    int MAX=6, MIN=1, anim1=0,anim2=0;
    int g=0,p[15]={0},z=1,reste1=0, reste2=0;
    int chang=0, rchecked=0,r2=255,g2=255,b2=255,r4=255,g4=255,b4=255,r3=255,g3=255,b3=255,nbre_pieces=16, j_b=0;
    int r5=255,b5=255, g5=255,r6=255,b6=255,g6=255;
    int LONGUEUR_TABLEAU=(12*dimCarre) + 16+ (3*dimCarre), u=0, d=0, schecked=1, i_ecrire=0;
    int pts_j[5]={0},c_regle=0,c_partie=0,tem_save=1,c_quitter=0, cjb=0, text=0, compte=0, distans[16]={0}, socle=1, socle_begin=0, total[3]={0}, no_game[16]={0}, computer=0, priorite=0,stp=0,fini=0,i_kont[3][10]={0}, c_write=0;
    int no_game_final=0, tem_barrage=0, pres_barrage=0, c_barr=0, ind_barrage=0, i_barr=0,m=0, stop[16]={0};
    int B=0, A=0, C=0, a_b=0, check=0, t_a=0, check1=0,deyo=0;
    int jcomp[4]={0}, machine=0, controlleur=0, dg=0, ia=0, ia_blit=0, policier=0, mang=0,text_ver=0, ia_aff=0, stp1=0, jr=0, jejoue[4]={0}, ptemoin[16]={0};
    int i_animf=0, idn=0;
    clean(p,15);
    clean(temoin,16);
    clean(temoin_x,16);
    clean(temoin_y,16);
    clean(distans,16);
    clean(jcomp,4);

    srand(time(NULL));

    SDL_Rect xyPetitCarre[15][15], xylignes, xyGrandCarre[2][2],xyCarreJaune[2][2], xyCarreMilieu, xypiece[15][15],xyboutton_clavier[3][10];
    SDL_Rect position[39], xyDe[6], pos0, xybox_quitter, xyDe_anim[2], xybox_jb, xyencadre_de;
    SDL_Rect xybox_champs, parcours[16][59], parcours_reset[16][59], xyCarreBlanc, xyHint, pos[5], xyClavier, xyRules,xyCroix, barrage[15][15], pos_tablo;

    pos0.x=0;
    pos0.y=0;

    pos_tablo.x=l_ecran/2-290;
    pos_tablo.y=L_ecran/2-290;



    xybox_quitter.x=l_ecran/2-400/2;
    xybox_quitter.y=L_ecran/2-200/2;

    xyClavier.x=xybox_quitter.x;
    xyClavier.y=xybox_quitter.y+150;

    xybox_jb.x=l_ecran/2-400/2;
    xybox_jb.y=L_ecran/2-300/2;

    xybox_champs.x=xybox_quitter.x+150;
    xybox_champs.y=L_ecran/2-200/2+20;

    xyCroix.x=xybox_quitter.x+395;
    xyCroix.y=xybox_quitter.y;








/** Initialisation de xyPetitCarre*/
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            xyPetitCarre[i][j].x=0;
            xyPetitCarre[i][j].y=0;

            xypiece[i][j].x=0;
            xypiece[i][j].y=0;

            barrage[i][j].x=0;
            barrage[i][j].y=0;

        }
    }



/** Initialisation de xypiece*/
     for(i=0;i<5;i++)
    {for(j=0;j<5;j++)
    {
        xypiece[i][j].x=((6*dimCarre+3)-(5*dimCarre))/2+(l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X + dimCarre*j;/**HG*/
        xypiece[i][j].y=((6*dimCarre+3)-(5*dimCarre))/2+(L_ecran-(LONGUEUR_TABLEAU-1))/2 + dimCarre*i;

        xypiece[i][j+9].x=((6*dimCarre+3)-(5*dimCarre))/2+(l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X + dimCarre*j+6*dimCarre+3*dimCarre+9;/**HD*/
        xypiece[i][j+9].y=((6*dimCarre+3)-(5*dimCarre))/2+(L_ecran-(LONGUEUR_TABLEAU-1))/2 +dimCarre*i;

        xypiece[i+9][j].x=((6*dimCarre+3)-(5*dimCarre))/2+(l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X + dimCarre*j;/**BG*/
        xypiece[i+9][j].y=((6*dimCarre+3)-(5*dimCarre))/2+(L_ecran-(LONGUEUR_TABLEAU-1))/2+ dimCarre*i+ 6*dimCarre+ 3*dimCarre+12;

        xypiece[i+9][j+9].x=((6*dimCarre+3)-(5*dimCarre))/2+(l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X + dimCarre*j+6*dimCarre+3*dimCarre+9;/**BD*/
        xypiece[i+9][j+9].y=((6*dimCarre+3)-(5*dimCarre))/2+(L_ecran-(LONGUEUR_TABLEAU-1))/2 +dimCarre*i+6*dimCarre+3*dimCarre+12;
    }
    }

    /**Positions initiales des pieces*/
    for(i=0;i<5;i++)
    {for(j=0;j<5;j++)
    {
        xyPetitCarre[i][j].x=xypiece[i][j].x;/**HG*/
        xyPetitCarre[i][j].y=xypiece[i][j].y;
       /// printf("%d\n",xyPetitCarre[i][j].x);

        xyPetitCarre[i][j+9].x=xypiece[i][j+9].x;/**HD*/
        xyPetitCarre[i][j+9].y=xypiece[i][j+9].y;

        xyPetitCarre[i+9][j].x=xypiece[i+9][j].x;/**BG*/
        xyPetitCarre[i+9][j].y=xypiece[i+9][j].y;

        xyPetitCarre[i+9][j+9].x=xypiece[i+9][j+9].x;/**BD*/
        xyPetitCarre[i+9][j+9].y=xypiece[i+9][j+9].y;
    }
    }

/**CarreMilieu*/
    xyCarreMilieu.x=(6*dimCarre +6) + (l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X;
    xyCarreMilieu.y=(6*dimCarre +6) + (L_ecran-(LONGUEUR_TABLEAU-1))/2;

/**CarreBlanc*/
    xyCarreBlanc.x=(l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X-8;
    xyCarreBlanc.y=(L_ecran-(LONGUEUR_TABLEAU-1))/2-8;


    xyHint.x=10;
    xyHint.y=(L_ecran-(LONGUEUR_TABLEAU-1))/2 + LONGUEUR_TABLEAU-100;

for(i=0; i<2; i++)/**diagonale principale_Positions initiales*/
{
    i_k[0 + 4*i]=k[0 + 4*i]=0 +9*i;/**gestion des positions initiales avec les i_k et i_l*/
    i_l[0 + 4*i]=l[0 + 4*i]=2 +9*i;

    i_k[1 + 4*i]=k[1 + 4*i]=2 +9*i;
    i_l[1 + 4*i]=l[1 + 4*i]=0 +9*i;

    i_k[2 + 4*i]=k[2 + 4*i]=2 +9*i;
    i_l[2 + 4*i]=l[2 + 4*i]=4 +9*i;

    i_k[3 + 4*i]=k[3 + 4*i]=4 +9*i;
    i_l[3 + 4*i]=l[3 + 4*i]=2 +9*i;
}


for(i=0; i<2; i++)/**deuxieme diagonale_Positions initiales*/
{
    i_k[8 + 4*i]=k[8 + 4*i]=9 -9*i;/**gestion des positions initiales avec les i_k et i_l*/
    i_l[8 + 4*i]=l[8 + 4*i]=2 +9*i;

    i_k[9 + 4*i]=k[9 + 4*i]=11 -9*i;
    i_l[9 + 4*i]=l[9 + 4*i]=0 +9*i;

    i_k[10 + 4*i]=k[10 + 4*i]=11 -9*i;
    i_l[10 + 4*i]=l[10 + 4*i]=4 +9*i;

    i_k[11 + 4*i]=k[11 + 4*i]=13 -9*i;
    i_l[11 + 4*i]=l[11 + 4*i]=2 +9*i;
}



/**xyDe*/
xyDe[1].x=l_ecran/2-800/2;///grand de de fond
xyDe[1].y=0;

xyDe[0].x=800;/**position de l'animation des des*/
xyDe[0].y=100;

xyDe_anim[0].x=825;
xyDe_anim[0].y=250;

xyDe_anim[1].x=xyDe_anim[0].x+79;
xyDe_anim[1].y=xyDe_anim[0].y;

xyencadre_de.x=xyDe_anim[0].x-4;
xyencadre_de.y=xyDe_anim[0].y-4;


xyDe[2].x=l_ecran/2-TAILLE_LUDO/2;/**position du de rouge dans le menu*/
xyDe[2].y=30;

xyDe[3].x=500;/**position du de vert dans le menu*/
xyDe[3].y=500;

xyDe[4].x=700;/**position du de marron dans le menu*/
xyDe[4].y=250;

xyDe[5].x=0;/**position du de marron dans le menu*/
xyDe[5].y=0;

position[0].x=825;/**Ludo pour jeu*/
position[0].y=10;

position[1].x=xyencadre_de.x+83-texte[1]->w/2;/**JOUER pour jeu*/
position[1].y=xyDe_anim[0].y+150;

position[2].x=l_ecran/2-texte[0]->w/2;/**Ludo_MENU*/
position[2].y=30;

position[3].x=l_ecran/2-(texte[3]->w)/2;/**Nouvelle partie_MENU*/
position[3].y=170;

position[4].x=l_ecran/2-(texte[4]->w)/2;/**Charger partie_MENU*/
position[4].y=170 +ESPACE_MOTS;

position[5].x=l_ecran/2-(texte[5]->w)/2;/**Option_MENU*/
position[5].y=170+ 2*ESPACE_MOTS;

position[6].x=l_ecran/2-(texte[6]->w)/2;/**Regles_MENU*/
position[6].y=170+3*ESPACE_MOTS;

position[7].x=l_ecran/2-(texte[7]->w)/2;/**Quitter_MENU*/
position[7].y=170+4*ESPACE_MOTS;

position[8].x=xybox_quitter.x+200-texte[8]->w/2;/*etes vous sur de vouloir quitter?*/
position[8].y=xybox_quitter.y;

position[9].x=xybox_quitter.x+80+20;/**oui*/
position[9].y=xybox_quitter.y+75;

position[10].x=xybox_quitter.x+3*80+20;/**non*/
position[10].y=xybox_quitter.y+75;

position[11].x=position[8].x-50;/**Nombre de joueurs*/
position[11].y=50;

position[12].x=position[8].x-50;///2
position[12].y=200;

position[13].x=position[8].x+200;///3
position[13].y=200;

position[14].x=position[8].x+400+50;///4
position[14].y=200;

position[15].x=position[12].x-150;///joueur 1
position[15].y=250;

position[16].x=position[12].x-150;///joueur 2
position[16].y=300;

position[17].x=position[13].x-150;///joueur 3
position[17].y=350;

position[18].x=position[14].x-150;///joueur 4
position[18].y=400;

position[19].x=800;///Commencer apres le nombre de joueur
position[19].y=500;

position[20].x=xybox_jb.x +200-texte[20]->w/2;///Commencer la partie
position[20].y=xybox_jb.y+260;


position[21].x=position[15].x+150;///Name1
position[21].y=250;

position[22].x=position[16].x+150;///Name2/Computer
position[22].y=300;

position[23].x=position[17].x+150;///Name3/Computer
position[23].y=350;

position[24].x=position[18].x+150;///Name4/Computer
position[24].y=400;

position[25].x=xybox_quitter.x+50;///Name_Choix
position[25].y=xybox_quitter.y+25;

position[26].x=xybox_quitter.x+50;///Computer_choix
position[26].y=position[25].y+60;

position[27].x=xybox_quitter.x+350;///ok_choix
position[27].y=position[25].y+55;

position[28].x=xybox_champs.x;///papier
position[28].y=xybox_champs.y;

position[29].x=xybox_jb.x+25;///name_nombres de points dans joueur_begin
position[29].y=xybox_jb.y+25;

position[30].x=position[29].x;
position[30].y=position[29].y+25;

position[31].x=position[29].x;
position[31].y=position[29].y+50;

position[32].x=position[29].x;
position[32].y=position[29].y+75;

position[33].x=position[29].x;
position[33].y=position[29].y+125;

position[34].x=xyHint.x+2;
position[34].y=xyHint.y+2;

position[35].x=position[34].x;
position[35].y=position[34].y+20;

position[36].x=20;///QUIITTER JEU
position[36].y=20;

position[37].x=position[36].x;///RETOUR JEU
position[37].y=position[36].y+30;

position[38].x=xybox_quitter.x+200-texte[38]->w/2; ///voulez vous sauvegarder le jeu?
position[38].y=position[8].y;










