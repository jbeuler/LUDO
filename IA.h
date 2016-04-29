
                        if(machine==1 && u>rchecked && jcomp[socle]==1)
                        {
                            stp1=1;

                            if(jcomp[socle]==1)
                                while(stp1)
                                {
                               // printf("jcomp[%d]=%d, jcomp[%d]=%d, jcomp[%d]=%d, jcomp[%d]=%d\n\n",0, jcomp[0], 1, jcomp[1],2, jcomp[2], 3, jcomp[3]);


                                stp=1;


                                while(stp)
                                {

                                        SDL_PollEvent(&IA);


                                    #include "IA_des.h"
                                    #include "no_game.h"




                                        total[0]=anim1;
                                        total[1]=anim2;
                                        total[2]=anim1+anim2;

                                       // printf("no_game_final=%d\n", no_game_final);

                                        if(no_game_final==0)
                                        {
                                            ia_blit=1;/**Pour MR Delay :-)*/

                                        }
                                        else if(no_game_final==1)
                                        {
                                            ia_blit=2;/**MR Delay prend moins de temps*/
                                        }

                                    if(total[1]==6)/**LES PIONS DE LA BASE*/
                                    {

                                            for(i=0;i<4;i++)
                                            {   b=4*socle+i;

                                            if(anim2==6)
                                                if(distans[b]==0)
                                                {
                                                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);
                                                SDL_Delay(500);

                                                distans[b]=1;

                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]]);
                                                SDL_Delay(500);



                                                    for(e=0;e<15;e++)
                                                    {
                                                    for(j=0;j<15;j++)
                                                        {

                                                        if(parcours[b][distans[b]].x==xyPetitCarre[e][j].x &&  parcours[b][distans[b]].y==xyPetitCarre[e][j].y)
                                                            {

                                                                pres_barrage=0; stop[b]=1;
/**A remplace par une fonction*/s=16;/**l'indice de la piece qui se trouve à lemplacement en question*/
                                                    for(a=0;a<16;a++)
                                                    {   if(a!=b)/**sauf la piece selectionnee parce quelle pt reprendre sa place*/
                                                        {
                                                            if(k[a]==e&&l[a]==j)
                                                            {
                                                            p[g]=temoin[a];/**les temoins sont les rangs des pieces dans case*/
                                                            g++;/**le nombre de pieces presentes dans la case*/

                                                            }
                                                        }
                                                    }



                                                    if(g!=0)
                                                    {
                                                      for(a=0;a<16;a++)
                                                        {   if(a!=b)/**sauf la piece selectionnee*/
                                                            {
                                                                if(k[a]==e&&l[a]==j&&temoin[a]==max_tableau(p,g))
                                                                {
                                                                s=a;
                                                                }
                                                            }
                                                        }
                                                    }

                                    if(s!=16)/**Si il y a une piece a lemplacement en question*/
                                    {
                                        for(t=0;t<4;t++)/**Recherche de compatibilite entre les intervalles*/
                                            {   if(s>=t*4&&s<4*t+4)
                                                    {
                                                        if(b<t*4||b>=t*4+4)/**si elles ne sont pas de meme groupe*/
                                                        {
                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0))/**si je ne suis pas dans un point de depart*/
                                                            {
                                                            temoin[b]=0;/**les temoins pour lentassement sanullent*/
                                                            temoin[s]=0;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s]; distans[s]=0;*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==e&&l[a]==j)
                                                                {

                                                                k[a]=i_k[a];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[a]=i_l[a]; distans[a]=0;

                                                                    for(jr=0;jr<59;jr++)
{
    parcours[a][jr].x=parcours_reset[a][jr].x;
    parcours[a][jr].y=parcours_reset[a][jr].y;
}


                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {temoin[b]=temoin[s]+1; stop[b]=0;

                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0)&&(e!=6||j!=7)&&(e!=7||j!=6)&&(e!=7||j!=8)&&(e!=8||j!=7))
                                                            {



                                                                barrage[e][j].x=xypiece[e][j].x;
                                                                barrage[e][j].y=xypiece[e][j].y;



                                                            }}
                                                    }


                                            }
                                    }

                                    else
                                    {temoin[b]=0;}


                                                k[b]=e; stop[b]=0;
                                                l[b]=j;

                                                            }
                                                            }
                                                        }


                                            anim2=0;

                                            if(anim1==6)
                                            {
                                                anim2=6;
                                                anim1=0;
                                            }

                                                }


                                            }

                                    }


                                clean(p,15);

                                clean(ptemoin,16);

                                g=0;
                              for(i=0;i<4;i++)
                               {
                                   p[i]=temoin[4*socle+i];
                                   ptemoin[4*socle+i]=temoin[4*socle+i];
                               }

                               max_tableau(p,15);




                            for(i=0;i<4;i++)
                               {    ia=0;
                                   for(j=0;j<4;j++)
                                    {
                                        jr=4*socle+j;

                                        if(p[i]==ptemoin[jr] && ia==0)
                                            {
                                            jejoue[i]=jr;
                                            ptemoin[jr]=50;
                                            ia=1;
                                            }
                                    }}



                            for(i=0;i<4;i++)
                                printf("jejoue[%d]=%d\n",i,jejoue[i]);





                                if(no_game_final==0)
                                    {
                                    for(ia=0;ia<4;ia++)/**UN PiON SUR LE TERRAIN*/
                                    {
                                         clean(p,15);

                                        total[0]=anim1;
                                        total[1]=anim2;
                                        total[2]=anim1+anim2;

                                            b=jejoue[ia];/**RESPECT DE LORDRE DES PIONS SUIVANT LEUR TEMOINS*/

                                            if((k[b]!=0||l[b]!=6)&&(k[b]!=6||l[b]!=14)&&(k[b]!=14||l[b]!=8)&&(k[b]!=8||l[b]!=0))/**si je ne suis pas dans une case depart*/
                                                if(temoin[b]==1)
                                                    tem_barrage=1;

                                            #include "no_game.h"

                                            if(distans[b]!=0 && no_game[b]==0 && total[2]!=0)
                                            {
                                                 B=0; A=0; C=0; t_a=0;

                                        for(t=0;t<4;t++)
                                            {

                                                if(b>=t*4&&b<4*t+4)/**Recherche de compatibilite entre les intervalles pour connaitre la possibilite de jeu des autres joueurs*/
                                                    {   t_a=t;
                                                        for(a_b=t_a*4;a_b<(4*t_a)+4;a_b++)
                                                            {


                                                            if(a_b!=b && no_game[a_b]==0&& distans[a_b]!=0)/**Si un autre pion dans la course est en mesure de jouer*/
                                                            {
                                                                    B=b;
                                                                    b=a_b;
                                                                     #include "pres_barrage.h"



                                                                if(distans[b]<14)
                                                                    {if(pres_barrage==0)
                                                                    {ind_barrage=15;}}

                                                                else if(distans[b]<27)
                                                                    {if(pres_barrage==0)
                                                                    {ind_barrage=28;}}

                                                                else if(distans[b]<40)
                                                                    {if(pres_barrage==0)
                                                                    {ind_barrage=41;}}

                                                                else if(distans[b]<58)
                                                                    {if(pres_barrage==0)
                                                                    {ind_barrage=59;}}


                                                                if(total[1]+distans[b]<ind_barrage)/**Plus grande valeur*/
                                                                    A=1;
                                                                if(total[0]+distans[b]<ind_barrage)/**Plus petite valeur*/
                                                                    C=1;


                                                                    b=B;
                                                            }

                                                            }

                                                    }
                                            }

                                          //  printf("A=%d et C=%d\n",A,C);

                                        B=A+C;

                                        #include "pres_barrage.h"
                                        printf("pres_barrage=%d\n",pres_barrage);

                                        if(distans[b]<14)
                                            {if(pres_barrage==0)
                                                {ind_barrage=15;}}

                                        else if(distans[b]<27)
                                            {if(pres_barrage==0)
                                                {ind_barrage=28;}}

                                        else if(distans[b]<40)
                                            {if(pres_barrage==0)
                                                {ind_barrage=41;}}

                                        else if(distans[b]<58)
                                            {if(pres_barrage==0)
                                                {ind_barrage=59;}}

                                              //  printf("ind_barrage= %d\n",ind_barrage);
                                               // printf("b=%d\n",b);






                            /**IMPORTANT*/

                                            if(total[1]+distans[b]<ind_barrage && total[0]+distans[b]<ind_barrage)
                                                {
                                                    if(total[2]+distans[b]<ind_barrage)
                                                    {
                                                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);
                                                SDL_Delay(500);

                                                SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[2]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);

                                                SDL_Delay(500);



                                                    distans[b]=distans[b]+total[2];

                                                    pres_barrage=0; stop[b]=1;
                                                        if(tem_barrage==1)
                                                        {
                                                            tem_barrage=0;
                                                            barrage[k[b]][l[b]].x=0;
                                                            barrage[k[b]][l[b]].y=0;
                                                        }


                                                    for(e=0;e<15;e++)
                                                    {
                                                    for(j=0;j<15;j++)
                                                        {

                                                        if(parcours[b][distans[b]].x==xyPetitCarre[e][j].x &&  parcours[b][distans[b]].y==xyPetitCarre[e][j].y)
                                                            {

                                                                pres_barrage=0; stop[b]=1;
/**A remplace par une fonction*/s=16;/**l'indice de la piece qui se trouve à lemplacement en question*/
                                                    for(a=0;a<16;a++)
                                                    {   if(a!=b)/**sauf la piece selectionnee parce quelle pt reprendre sa place*/
                                                        {
                                                            if(k[a]==e&&l[a]==j)
                                                            {
                                                            p[g]=temoin[a];/**les temoins sont les rangs des pieces dans case*/
                                                            g++;/**le nombre de pieces presentes dans la case*/

                                                            }
                                                        }
                                                    }



                                                    if(g!=0)
                                                    {
                                                      for(a=0;a<16;a++)
                                                        {   if(a!=b)/**sauf la piece selectionnee*/
                                                            {
                                                                if(k[a]==e&&l[a]==j&&temoin[a]==max_tableau(p,g))
                                                                {
                                                                s=a;
                                                                }
                                                            }
                                                        }
                                                    }

                                    if(s!=16)/**Si il y a une piece a lemplacement en question*/
                                    {
                                        for(t=0;t<4;t++)/**Recherche de compatibilite entre les intervalles*/
                                            {   if(s>=t*4&&s<4*t+4)
                                                    {
                                                        if(b<t*4||b>=t*4+4)/**si elles ne sont pas de meme groupe*/
                                                        {
                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0))/**si je ne suis pas dans un point de depart*/
                                                            {
                                                            temoin[b]=0;/**les temoins pour lentassement sanullent*/
                                                            temoin[s]=0;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s]; distans[s]=0;*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==e&&l[a]==j)
                                                                {

                                                                k[a]=i_k[a];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[a]=i_l[a]; distans[a]=0;

                                                                    for(jr=0;jr<59;jr++)
{
    parcours[a][jr].x=parcours_reset[a][jr].x;
    parcours[a][jr].y=parcours_reset[a][jr].y;
}


                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {temoin[b]=temoin[s]+1; stop[b]=0;

                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0)&&(e!=6||j!=7)&&(e!=7||j!=6)&&(e!=7||j!=8)&&(e!=8||j!=7))
                                                            {



                                                                barrage[e][j].x=xypiece[e][j].x;
                                                                barrage[e][j].y=xypiece[e][j].y;



                                                            }}
                                                    }


                                            }
                                    }

                                    else
                                    {temoin[b]=0;}


                                                k[b]=e; stop[b]=1;
                                                l[b]=j;

                                                            }
                                                            }
                                                        }


                                                    anim2=0;
                                                    anim1=0;



                                                    //    if(B==0&&deyo==1)/**A CONSIDERER APRES POUR LES REPAS*/
                                                        //SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[0]]);
                                                    //    else if(B==1)
                                                        //SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[1]]);
                                                     //   else if(B==2)
                                                          //{//SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[1]]);
                                                           //SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[0]]);}


                                                SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]-total[2]]);
                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);

                                                SDL_Delay(500);

                                                    }

                                                    else/**Si li paka jwe somme nan*/
                                                    {
                                                        //if(B==0&&deyo==1)/**SI T GEN DEYO, YAP GENTAN RANTRE*/
                                                        //SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[0]]);
                                                /*else */if(B==2 && total[1]!=0)/**La plus grande valeur est jouable par une autre piece*/
                                                           {//SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[0]]);

                                                         SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);
                                                SDL_Delay(500);

                                                SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[1]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);

                                                SDL_Delay(500);

                                                    distans[b]=distans[b]+total[1];

                                                    pres_barrage=0; stop[b]=1;
                                                        if(tem_barrage==1)
                                                        {
                                                            tem_barrage=0;
                                                            barrage[k[b]][l[b]].x=0;
                                                            barrage[k[b]][l[b]].y=0;
                                                        }


                                                    for(e=0;e<15;e++)
                                                    {
                                                    for(j=0;j<15;j++)
                                                        {

                                                        if(parcours[b][distans[b]].x==xyPetitCarre[e][j].x &&  parcours[b][distans[b]].y==xyPetitCarre[e][j].y)
                                                            {

                                                                pres_barrage=0; stop[b]=1;
/**A remplace par une fonction*/s=16;/**l'indice de la piece qui se trouve à lemplacement en question*/
                                                    for(a=0;a<16;a++)
                                                    {   if(a!=b)/**sauf la piece selectionnee parce quelle pt reprendre sa place*/
                                                        {
                                                            if(k[a]==e&&l[a]==j)
                                                            {
                                                            p[g]=temoin[a];/**les temoins sont les rangs des pieces dans case*/
                                                            g++;/**le nombre de pieces presentes dans la case*/

                                                            }
                                                        }
                                                    }



                                                    if(g!=0)
                                                    {
                                                      for(a=0;a<16;a++)
                                                        {   if(a!=b)/**sauf la piece selectionnee*/
                                                            {
                                                                if(k[a]==e&&l[a]==j&&temoin[a]==max_tableau(p,g))
                                                                {
                                                                s=a;
                                                                }
                                                            }
                                                        }
                                                    }

                                    if(s!=16)/**Si il y a une piece a lemplacement en question*/
                                    {
                                        for(t=0;t<4;t++)/**Recherche de compatibilite entre les intervalles*/
                                            {   if(s>=t*4&&s<4*t+4)
                                                    {
                                                        if(b<t*4||b>=t*4+4)/**si elles ne sont pas de meme groupe*/
                                                        {
                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0))/**si je ne suis pas dans un point de depart*/
                                                            {
                                                            temoin[b]=0;/**les temoins pour lentassement sanullent*/
                                                            temoin[s]=0;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s]; distans[s]=0;*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==e&&l[a]==j)
                                                                {

                                                                k[a]=i_k[a];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[a]=i_l[a]; distans[a]=0;

                                                                    for(jr=0;jr<59;jr++)
{
    parcours[a][jr].x=parcours_reset[a][jr].x;
    parcours[a][jr].y=parcours_reset[a][jr].y;
}


                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {temoin[b]=temoin[s]+1; stop[b]=0;

                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0)&&(e!=6||j!=7)&&(e!=7||j!=6)&&(e!=7||j!=8)&&(e!=8||j!=7))
                                                            {



                                                                barrage[e][j].x=xypiece[e][j].x;
                                                                barrage[e][j].y=xypiece[e][j].y;



                                                            }}
                                                    }


                                            }
                                    }

                                    else
                                    {temoin[b]=0;}


                                                k[b]=e; stop[b]=1;
                                                l[b]=j;

                                                            }
                                                            }
                                                        }


                                                    anim2=0;

                                                     SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]-total[1]]);
                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);

                                                SDL_Delay(500);


                                                           }

                                                    else if(total[1]!=0)/**Si pi gran pas jouable okunn lot kote*/
                                                    {

                                                SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);
                                                SDL_Delay(500);

                                                SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[1]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);

                                                SDL_Delay(500);
                                                        distans[b]=distans[b]+total[1];

                                                        pres_barrage=0; stop[b]=1;
                                                        if(tem_barrage==1)
                                                        {
                                                            tem_barrage=0;
                                                            barrage[k[b]][l[b]].x=0;
                                                            barrage[k[b]][l[b]].y=0;
                                                        }


                                                    for(e=0;e<15;e++)
                                                    {
                                                    for(j=0;j<15;j++)
                                                        {

                                                        if(parcours[b][distans[b]].x==xyPetitCarre[e][j].x &&  parcours[b][distans[b]].y==xyPetitCarre[e][j].y)
                                                            {

                                                                pres_barrage=0; stop[b]=1;
/**A remplace par une fonction*/s=16;/**l'indice de la piece qui se trouve à lemplacement en question*/
                                                    for(a=0;a<16;a++)
                                                    {   if(a!=b)/**sauf la piece selectionnee parce quelle pt reprendre sa place*/
                                                        {
                                                            if(k[a]==e&&l[a]==j)
                                                            {
                                                            p[g]=temoin[a];/**les temoins sont les rangs des pieces dans case*/
                                                            g++;/**le nombre de pieces presentes dans la case*/

                                                            }
                                                        }
                                                    }



                                                    if(g!=0)
                                                    {
                                                      for(a=0;a<16;a++)
                                                        {   if(a!=b)/**sauf la piece selectionnee*/
                                                            {
                                                                if(k[a]==e&&l[a]==j&&temoin[a]==max_tableau(p,g))
                                                                {
                                                                s=a;
                                                                }
                                                            }
                                                        }
                                                    }

                                    if(s!=16)/**Si il y a une piece a lemplacement en question*/
                                    {
                                        for(t=0;t<4;t++)/**Recherche de compatibilite entre les intervalles*/
                                            {   if(s>=t*4&&s<4*t+4)
                                                    {
                                                        if(b<t*4||b>=t*4+4)/**si elles ne sont pas de meme groupe*/
                                                        {
                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0))/**si je ne suis pas dans un point de depart*/
                                                            {
                                                            temoin[b]=0;/**les temoins pour lentassement sanullent*/
                                                            temoin[s]=0;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s]; distans[s]=0;*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==e&&l[a]==j)
                                                                {

                                                                k[a]=i_k[a];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[a]=i_l[a]; distans[a]=0;

                                                                    for(jr=0;jr<59;jr++)
{
    parcours[a][jr].x=parcours_reset[a][jr].x;
    parcours[a][jr].y=parcours_reset[a][jr].y;
}


                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {temoin[b]=temoin[s]+1; stop[b]=0;

                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0)&&(e!=6||j!=7)&&(e!=7||j!=6)&&(e!=7||j!=8)&&(e!=8||j!=7))
                                                            {



                                                                barrage[e][j].x=xypiece[e][j].x;
                                                                barrage[e][j].y=xypiece[e][j].y;



                                                            }}
                                                    }


                                            }
                                    }

                                    else
                                    {temoin[b]=0;}


                                                k[b]=e; stop[b]=1;
                                                l[b]=j;

                                                            }
                                                            }
                                                        }


                                                    anim2=0;

                                                     SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]-total[1]]);
                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);

                                                SDL_Delay(500);


                                                    }


                                                    }

                                                }

                                            else if(total[1]+distans[b]<ind_barrage ||total[0]+distans[b]<ind_barrage)
                                            {
                                                if(total[1]+distans[b]<ind_barrage && total[1]!=0)
                                                    {
                                                         SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);
                                                SDL_Delay(500);

                                                SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[1]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);

                                                SDL_Delay(500);
                                                        distans[b]=distans[b]+total[1];

                                                        pres_barrage=0; stop[b]=1;
                                                        if(tem_barrage==1)
                                                        {
                                                            tem_barrage=0;
                                                            barrage[k[b]][l[b]].x=0;
                                                            barrage[k[b]][l[b]].y=0;
                                                        }


                                                    for(e=0;e<15;e++)
                                                    {
                                                    for(j=0;j<15;j++)
                                                        {

                                                        if(parcours[b][distans[b]].x==xyPetitCarre[e][j].x &&  parcours[b][distans[b]].y==xyPetitCarre[e][j].y)
                                                            {

                                                                pres_barrage=0; stop[b]=1;
/**A remplace par une fonction*/s=16;/**l'indice de la piece qui se trouve à lemplacement en question*/
                                                    for(a=0;a<16;a++)
                                                    {   if(a!=b)/**sauf la piece selectionnee parce quelle pt reprendre sa place*/
                                                        {
                                                            if(k[a]==e&&l[a]==j)
                                                            {
                                                            p[g]=temoin[a];/**les temoins sont les rangs des pieces dans case*/
                                                            g++;/**le nombre de pieces presentes dans la case*/

                                                            }
                                                        }
                                                    }



                                                    if(g!=0)
                                                    {
                                                      for(a=0;a<16;a++)
                                                        {   if(a!=b)/**sauf la piece selectionnee*/
                                                            {
                                                                if(k[a]==e&&l[a]==j&&temoin[a]==max_tableau(p,g))
                                                                {
                                                                s=a;
                                                                }
                                                            }
                                                        }
                                                    }

                                    if(s!=16)/**Si il y a une piece a lemplacement en question*/
                                    {
                                        for(t=0;t<4;t++)/**Recherche de compatibilite entre les intervalles*/
                                            {   if(s>=t*4&&s<4*t+4)
                                                    {
                                                        if(b<t*4||b>=t*4+4)/**si elles ne sont pas de meme groupe*/
                                                        {
                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0))/**si je ne suis pas dans un point de depart*/
                                                            {
                                                            temoin[b]=0;/**les temoins pour lentassement sanullent*/
                                                            temoin[s]=0;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s]; distans[s]=0;*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==e&&l[a]==j)
                                                                {

                                                                k[a]=i_k[a];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[a]=i_l[a]; distans[a]=0;

                                                                    for(jr=0;jr<59;jr++)
{
    parcours[a][jr].x=parcours_reset[a][jr].x;
    parcours[a][jr].y=parcours_reset[a][jr].y;
}


                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {temoin[b]=temoin[s]+1; stop[b]=0;

                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0)&&(e!=6||j!=7)&&(e!=7||j!=6)&&(e!=7||j!=8)&&(e!=8||j!=7))
                                                            {



                                                                barrage[e][j].x=xypiece[e][j].x;
                                                                barrage[e][j].y=xypiece[e][j].y;



                                                            }}
                                                    }


                                            }
                                    }

                                    else
                                    {temoin[b]=0;}


                                                k[b]=e; stop[b]=1;
                                                l[b]=j;

                                                            }
                                                            }
                                                        }


                                                    anim2=0;

                                                     SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]-total[1]]);
                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);

                                                SDL_Delay(500);


                                                    }

                                                if(total[0]+distans[b]<ind_barrage && total[0]!=0)
                                                    {
                                                         SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);
                                                SDL_Delay(500);

                                                SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]]);
                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[0]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);

                                                SDL_Delay(500);

                                                        distans[b]=distans[b]+total[0];

                                                        pres_barrage=0; stop[b]=1;
                                                        if(tem_barrage==1)
                                                        {
                                                            tem_barrage=0;
                                                            barrage[k[b]][l[b]].x=0;
                                                            barrage[k[b]][l[b]].y=0;
                                                        }


                                                    for(e=0;e<15;e++)
                                                    {
                                                    for(j=0;j<15;j++)
                                                        {

                                                        if(parcours[b][distans[b]].x==xyPetitCarre[e][j].x &&  parcours[b][distans[b]].y==xyPetitCarre[e][j].y)
                                                            {

                                                                pres_barrage=0; stop[b]=1;
/**A remplace par une fonction*/s=16;/**l'indice de la piece qui se trouve à lemplacement en question*/
                                                    for(a=0;a<16;a++)
                                                    {   if(a!=b)/**sauf la piece selectionnee parce quelle pt reprendre sa place*/
                                                        {
                                                            if(k[a]==e&&l[a]==j)
                                                            {
                                                            p[g]=temoin[a];/**les temoins sont les rangs des pieces dans case*/
                                                            g++;/**le nombre de pieces presentes dans la case*/

                                                            }
                                                        }
                                                    }



                                                    if(g!=0)
                                                    {
                                                      for(a=0;a<16;a++)
                                                        {   if(a!=b)/**sauf la piece selectionnee*/
                                                            {
                                                                if(k[a]==e&&l[a]==j&&temoin[a]==max_tableau(p,g))
                                                                {
                                                                s=a;
                                                                }
                                                            }
                                                        }
                                                    }

                                    if(s!=16)/**Si il y a une piece a lemplacement en question*/
                                    {
                                        for(t=0;t<4;t++)/**Recherche de compatibilite entre les intervalles*/
                                            {   if(s>=t*4&&s<4*t+4)
                                                    {
                                                        if(b<t*4||b>=t*4+4)/**si elles ne sont pas de meme groupe*/
                                                        {
                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0))/**si je ne suis pas dans un point de depart*/
                                                            {
                                                            temoin[b]=0;/**les temoins pour lentassement sanullent*/
                                                            temoin[s]=0;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s]; distans[s]=0;*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==e&&l[a]==j)
                                                                {

                                                                k[a]=i_k[a];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[a]=i_l[a]; distans[a]=0;

                                                                    for(jr=0;jr<59;jr++)
{
    parcours[a][jr].x=parcours_reset[a][jr].x;
    parcours[a][jr].y=parcours_reset[a][jr].y;
}


                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {temoin[b]=temoin[s]+1; stop[b]=0;

                                                            if((e!=0||j!=6)&&(e!=6||j!=14)&&(e!=14||j!=8)&&(e!=8||j!=0)&&(e!=6||j!=7)&&(e!=7||j!=6)&&(e!=7||j!=8)&&(e!=8||j!=7))
                                                            {



                                                                barrage[e][j].x=xypiece[e][j].x;
                                                                barrage[e][j].y=xypiece[e][j].y;



                                                            }}
                                                    }


                                            }
                                    }

                                    else
                                    {temoin[b]=0;}


                                                k[b]=e; stop[b]=1;
                                                l[b]=j;

                                                            }
                                                            }
                                                        }


                                                    anim1=0;

                                                     SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                                    #include "BLIT.h"

                                                SDL_BlitSurface(case_lum,NULL,ecran,&parcours[b][distans[b]-total[0]]);
                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]]);
                                                #include "blit_pieces.h"

                                                SDL_Flip(ecran);

                                                SDL_Delay(500);


                                                    }

                                            }


                                            }






                                }}

stp=0;

                                }



                            anim1=0;
                            anim2=0;


                    if(rchecked==4)
                    {
                        if(socle_begin==1)
                        if(reste1!=6&&reste2!=6)
                        {{if(socle==1)/**CONDITIONS DE CHANGEMENT DE JOUEURS*/
                        socle=3;
                        else if(socle==3)
                        socle=0;
                        else if(socle==0)
                        socle=2;
                        else if(socle==2)
                        socle=1;


                        }
                        }
                    }

                    if(rchecked==3)
                    {

                        if(socle_begin==1)
                        if(reste1!=6&&reste2!=6)
                        {{if(socle==1)/**CONDITIONS DE CHANGEMENT DE JOUEURS*/
                        socle=0;
                        else if(socle==0)
                        socle=2;
                        else if(socle==2)
                        socle=1;


                        }
                        }
                    }

                    if(rchecked==2)
                    {
                        if(reste1!=6&&reste2!=6)
                        {if(socle_begin==1)
                        {if(socle==1)/**CONDITIONS DE CHANGEMENT DE JOUEURS*/
                        socle=0;
                        else if(socle==0)
                        socle=1;


                        }
                        }
                    }


                                    SDL_Delay(500);



 //FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,turn,0,NULL);
SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                                            #include "BLIT.h"
                                            #include "blit_pieces.h"

                                            SDL_Flip(ecran);




                    if(jcomp[socle]==1)
                        stp1=1;
                    else if(jcomp[socle]==0)
                        stp1=0;

                        }


                        }

