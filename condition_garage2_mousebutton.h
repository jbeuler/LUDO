                            if(distans[b]<14)
                                        {

                                                if(pres_barrage==0)/**si il y a pas barrage, on joue normalement*/
                                                {ind_barrage=15;}/**mais si il y en a, ind_barrage garde la valeur prise dans la verification*/
                                        }
                            else if(distans[b]<27)
                                        {

                                                if(pres_barrage==0)/**si il y a pas barrage, on joue normalement*/
                                                {ind_barrage=28;}/**mais si il y en a, ind_barrage garde la valeur prise dans la verification*/
                                        }
                            else if(distans[b]<40)
                                        {

                                                if(pres_barrage==0)/**si il y a pas barrage, on joue normalement*/
                                                {ind_barrage=41;}/**mais si il y en a, ind_barrage garde la valeur prise dans la verification*/
                                        }
                            else if(distans[b]<58)
                                        {

                                                if(pres_barrage==0)/**si il y a pas barrage, on joue normalement*/
                                                {ind_barrage=59;}/**mais si il y en a, ind_barrage garde la valeur prise dans la verification*/
                                        }


policier=distans[b];
mang=0;


                                        if((distans[b]==0 &&anim1==6)||(distans[b]==0&&anim2==6))
                                        {


                                            if((x>=parcours[b][distans[b]+1].x)&&(x<=parcours[b][distans[b]+1].x+dimCarre)&&(y>=parcours[b][distans[b]+1].y)&&(y<=parcours[b][distans[b]+1].y+dimCarre))
                                                    {
                                                            stop[b]=1;

                                                    printf("%d  %d\n\n",parcours[b][distans[b]+1].x,parcours[b][distans[b]+1].y);

                                                if(anim1==6)
                                                anim1=0;
                                                else if(anim2==6)
                                                anim2=0;

                                               for(i=0;i<15;i++)
                                                {
                                                    for(j=0;j<15;j++)
                                                    {
                                                    if((x>=xypiece[i][j].x)&&(x<=xypiece[i][j].x+dimCarre)&&(y>=xypiece[i][j].y)&&(y<=xypiece[i][j].y+dimCarre))
                                                    {

                    /**A remplace par une fonction*/s=16;/**l'indice de la piece qui se trouve à lemplacement en question*/
                                                    for(a=0;a<16;a++)
                                                    {   if(a!=b)/**sauf la piece selectionnee parce quelle pt reprendre sa place*/
                                                        {
                                                            if(k[a]==i&&l[a]==j)
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
                                                                if(k[a]==i&&l[a]==j&&temoin[a]==max_tableau(p,g))
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
                                                            if((i!=0||j!=6)&&(i!=6||j!=14)&&(i!=14||j!=8)&&(i!=8||j!=0))/**si je ne suis pas dans un point de depart*/
                                                            {
                                                            temoin[b]=0;/**les temoins pour lentassement sanullent*/
                                                            temoin[s]=0;  FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,eat,0,NULL); mang=1;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s]; distans[s]=0;*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==i&&l[a]==j)
                                                                {

                                                                k[a]=i_k[a];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[a]=i_l[a]; distans[a]=0;

                                                                for(j=0;j<59;j++)
    {
    parcours[a][j].x=parcours_reset[n][j].x;
    parcours[a][j].y=parcours_reset[n][j].y;
    }


                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {temoin[b]=temoin[s]+1; stop[b]=0;}
                                                    }


                                            }
                                    }

                                    else
                                    {temoin[b]=0;}




                                                k[b]=i;  stop[b]=0;
                                                l[b]=j;
                                                }
                                                }
                                                }

                                                distans[b]=distans[b]+1;
                                                }

                                if(anim1==6 && anim2!=0)
                                                {

                                            {if(distans[b]+1+anim2<ind_barrage)
                                                if((x>=parcours[b][distans[b]+1+anim2].x)&&(x<=parcours[b][distans[b]+1+anim2].x+dimCarre)&&(y>=parcours[b][distans[b]+1+anim2].y)&&(y<=parcours[b][distans[b]+1+anim2].y+dimCarre))
                                                    {
                                                    printf("%d  %d\n\n",parcours[b][distans[b]+1].x,parcours[b][distans[b]+1].y);
                                                pres_barrage=0; stop[b]=1;





                                               for(i=0;i<15;i++)
                                                {
                                                    for(j=0;j<15;j++)
                                                    {
                                                    if((x>=xypiece[i][j].x)&&(x<=xypiece[i][j].x+dimCarre)&&(y>=xypiece[i][j].y)&&(y<=xypiece[i][j].y+dimCarre))
                                                    {

                    /**A remplace par une fonction*/s=16;/**l'indice de la piece qui se trouve à lemplacement en question*/
                                                    for(a=0;a<16;a++)
                                                    {   if(a!=b)/**sauf la piece selectionnee parce quelle pt reprendre sa place*/
                                                        {
                                                            if(k[a]==i&&l[a]==j)
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
                                                                if(k[a]==i&&l[a]==j&&temoin[a]==max_tableau(p,g))
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
                                                            if((i!=0||j!=6)&&(i!=6||j!=14)&&(i!=14||j!=8)&&(i!=8||j!=0))/**si je ne suis pas dans un point de depart*/
                                                            {
                                                            temoin[b]=0;/**les temoins pour lentassement sanullent*/
                                                            temoin[s]=0;  FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,eat,0,NULL); mang=1;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s]; distans[s]=0;*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==i&&l[a]==j)
                                                                {

                                                                k[a]=i_k[a];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[a]=i_l[a]; distans[a]=0;


                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {temoin[b]=temoin[s]+1; stop[b]=0;

                                                            if((i!=0||j!=6)&&(i!=6||j!=14)&&(i!=14||j!=8)&&(i!=8||j!=0)&&(i!=6||j!=7)&&(i!=7||j!=6)&&(i!=7||j!=8)&&(i!=8||j!=7))
                                                            {



                                                                barrage[i][j].x=xypiece[i][j].x;
                                                                barrage[i][j].y=xypiece[i][j].y;



                                                            }}
                                                    }


                                            }
                                    }

                                    else
                                    {temoin[b]=0;}




                                                k[b]=i;stop[b]=0;
                                                l[b]=j;
                                                }
                                                }
                                                }

                                                distans[b]=distans[b]+1+anim2;
                                                 anim1=0;

                                                anim2=0;
                                                }
                                            }

                                            }
                                else if(anim2==6 && anim1!=0)
                                                    {

                                                    {if(distans[b]+1+anim1<ind_barrage)
                                                        if((x>=parcours[b][distans[b]+1+anim1].x)&&(x<=parcours[b][distans[b]+1+anim1].x+dimCarre)&&(y>=parcours[b][distans[b]+1+anim1].y)&&(y<=parcours[b][distans[b]+1+anim1].y+dimCarre))
                                                        {

                                                    printf("%d  %d\n\n",parcours[b][distans[b]+1].x,parcours[b][distans[b]+1].y);

                                                    pres_barrage=0; stop[b]=1;




                                               for(i=0;i<15;i++)
                                                {
                                                    for(j=0;j<15;j++)
                                                    {
                                                    if((x>=xypiece[i][j].x)&&(x<=xypiece[i][j].x+dimCarre)&&(y>=xypiece[i][j].y)&&(y<=xypiece[i][j].y+dimCarre))
                                                    {

                    /**A remplace par une fonction*/s=16;/**l'indice de la piece qui se trouve à lemplacement en question*/
                                                    for(a=0;a<16;a++)
                                                    {   if(a!=b)/**sauf la piece selectionnee parce quelle pt reprendre sa place*/
                                                        {
                                                            if(k[a]==i&&l[a]==j)
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
                                                                if(k[a]==i&&l[a]==j&&temoin[a]==max_tableau(p,g))
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
                                                            if((i!=0||j!=6)&&(i!=6||j!=14)&&(i!=14||j!=8)&&(i!=8||j!=0))/**si je ne suis pas dans un point de depart*/
                                                            {
                                                            temoin[b]=0;/**les temoins pour lentassement sanullent*/
                                                            temoin[s]=0;  FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,eat,0,NULL); mang=1;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s]; distans[s]=0;*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==i&&l[a]==j)
                                                                {

                                                                k[a]=i_k[a];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[a]=i_l[a]; distans[a]=0;


                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {temoin[b]=temoin[s]+1; stop[b]=0;

                                                            if((i!=0||j!=6)&&(i!=6||j!=14)&&(i!=14||j!=8)&&(i!=8||j!=0)&&(i!=6||j!=7)&&(i!=7||j!=6)&&(i!=7||j!=8)&&(i!=8||j!=7))
                                                            {



                                                                barrage[i][j].x=xypiece[i][j].x;
                                                                barrage[i][j].y=xypiece[i][j].y;



                                                            }}
                                                    }


                                            }
                                    }

                                    else
                                    {temoin[b]=0;}




                                                k[b]=i; stop[b]=0;
                                                l[b]=j;
                                                }
                                                }
                                                }

                                                distans[b]=distans[b]+1+anim1;
                                                  anim1=0;

                                                anim2=0;
                                                }
                                                    }
                                                    }

                                    }




                                        else if(distans[b]!=0)
                                        {

                                        B=0; A=0; C=0; t_a=0; deyo=0;

                                        for(t=0;t<4;t++)
                                            {

                                                if(b>=t*4&&b<4*t+4)/**Recherche de compatibilite entre les intervalles pour connaitre la possibilite de jeu des autres joueurs*/
                                                    {   t_a=t;
                                                        for(a_b=t_a*4;a_b<(4*t_a)+4;a_b++)
                                                            {
                                                                if((distans[a_b]==0&&total[1]==6)||(distans[a_b]==0&&total[0]==6))
                                                                    deyo=1;

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
                                      //  printf("pres_barrage=%d\n",pres_barrage);

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
                                                       #include "total[2].h"

                                                        if(B==0&&deyo==1)
                                                         {
                                                        #include "total[0].h"

                                                         }
                                                        else if(B==1)
                                                        {
                                                           #include "total[1].h"
                                                        }
                                                        else if(B==2)
                                                          {
                                                            #include "total[1].h"
                                                            #include "total[0].h"

                                                            }


                                                    }
                                                    else/**Si li paka jwe somme nan*/
                                                    {
                                                        if(B==0&&deyo==1)
                                                         {
                                                    #include "total[0].h"

                                                         }
                                                        else if(B==2)/**La plus grande valeur est jouable par une autre piece*/
                                                           {
                                                              #include "total[0].h"
                                                              #include "total[1].h"

                                                            }

                                                        else/**Si pi gran pas jouable okunn lot kote*/
                                                         {
                                                             #include "total[1].h"
                                                        }


                                                    }

                                                }

                                            else if(total[1]+distans[b]<ind_barrage ||total[0]+distans[b]<ind_barrage)
                                            {
                                                if(total[1]+distans[b]<ind_barrage)
                                                    {
                                                    #include "total[1].h"
                                                    }

                                                if(total[0]+distans[b]<ind_barrage)
                                                    {
                                                       #include "total[0].h"
                                                    }

                                            }

                                        }


if(policier!=distans[b]&&mang==0)
{
    FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,deplace,0,NULL);
}
