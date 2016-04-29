        case SDL_MOUSEBUTTONUP:
        /**pointeur pour une piece*/
        x=event.button.x;
        y=event.button.y;

               #include "animation_des.h"

                /**Gestion de l'entassement*/
                g=0;
                clean(p,15);

                for(e=0;e<16;e++)
                {
                if((x>=xypiece[k[e]][l[e]].x)&&(x<=xypiece[k[e]][l[e]].x+dimCarre)&&(y>=xypiece[k[e]][l[e]].y)&&(y<=xypiece[k[e]][l[e]].y+dimCarre))
                {
                    p[g]=temoin[e];/**les temoins sont les rangs des pieces dans case*/
                    g++;/**le nombre de pieces presentes dans la case*/
                }
                }


                if(g!=0)
                {
                    for(e=0;e<g;e++)
                    {
                    printf("%d\n",p[e]);
                    }
                    printf("max=%d\n\n",max_tableau(p,g));
                }




                /**Quand je clique sur une piece du tableau*/
                    z=1;
                    e=0;
                    while(z)

                        {
                        if((x>=xypiece[k[e]][l[e]].x)&&(x<=xypiece[k[e]][l[e]].x+dimCarre)&&(y>=xypiece[k[e]][l[e]].y)&&(y<=xypiece[k[e]][l[e]].y+dimCarre))

                        {
                        if(temoin[e]==max_tableau(p,g))/**je prend la piece du haut*/
                        {
                        b=e;
                        g=0;
                        z=0;/**fermeture de la boucle*/
                        clean(p,15);
                        /** FILL*/
                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                        #include "BLIT.h"
                        SDL_BlitSurface(case_lum,NULL,ecran,&xypiece[k[b]][l[b]]);/**on la colle*/

                        #include "blit_pieces.h"




                        SDL_Flip(ecran);
                        n=1;


                                    /**Apres le choix de la piece, on a plusieur possibilites*/
                                    while(n)
                                    {
                                        /** FILL*/
                                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                                        #include "BLIT.h"
                                        SDL_BlitSurface(case_lum,NULL,ecran,&xypiece[k[e]][l[e]]);/**on la colle*/

                                        #include "blit_pieces.h"






                                    SDL_WaitEvent(&buttonup);


                                    switch(buttonup.type)
                                    {


                                    case SDL_KEYDOWN:
                                            switch(buttonup.key.keysym.sym)
                                            {
                                            case SDLK_UP:
                                            if((l[b]==8&&k[b]>9)||(l[b]==8&&k[b]<6&&k[b]>0)||(l[b]==14&&k[b]>6)||(l[b]==7&&k[b]>9))
                                            k[b]--;
                                            else if(k[b]==9&&l[b]==8)
                                            {k[b]--;
                                            l[b]++;}
                                            break;
                                            case SDLK_DOWN:
                                            if((l[b]==6&&k[b]>=9&&k[b]<14)||(l[b]==6&&k[b]<5)||(l[b]==0&&k[b]<8))
                                            k[b]++;
                                            else if(k[b]==5&&l[b]==6)
                                            {k[b]++;
                                            l[b]--;}
                                            break;
                                            case SDLK_RIGHT:
                                            if((k[b]==8&&l[b]>8&&l[b]<14)||(k[b]==8&&l[b]<5)||(k[b]==14&&l[b]<7))
                                            l[b]++;
                                            else if(k[b]==8&&l[b]==5)
                                            {k[b]++;
                                            l[b]++;}
                                            break;

                                            case SDLK_LEFT:
                                            if((k[b]==6&&l[b]>9&&l[b]<=14)||(k[b]==6&&l[b]<=5&&l[b]>0)||(k[b]==0&&l[b]>6))
                                            l[b]--;

                                            else if(k[b]==6&&l[b]==9)
                                            {k[b]--;
                                            l[b]--;}
                                            break;

                                            case SDLK_RETURN:
                                                n=0;
                                                break;
                                            default:
                                                break;
                                            }

                                    break;

                                    case SDL_MOUSEBUTTONUP:
                                            x=buttonup.button.x;
                                            y=buttonup.button.y;
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
                                                            temoin[s]=0;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s];*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==i&&l[a]==j)
                                                                {
                                                                s=a;
                                                                k[s]=i_k[s];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[s]=i_l[s];
                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {temoin[b]=temoin[s]+1;}
                                                    }


                                            }
                                    }

                                    else
                                    {temoin[b]=0;}




                                                k[b]=i;
                                                l[b]=j;
                                                }
                                                }
                                                }
                                                n = 0;


                                    break;

                                    case SDL_MOUSEMOTION:
                                    xm= buttonup.motion.x;
                                    ym= buttonup.motion.y;


                                    break;




                                    }



                                    SDL_Flip(ecran);




                            }
                    }
                }
                e++;
                    if(rchecked==4)
                    {if(e==16)
                       {
                            z=0;
                            e=0;
                       }
                    }

                    if(rchecked==3)
                    {if(e==12)
                       {
                            z=0;
                            e=0;
                       }
                    }

                    if(rchecked==2)
                    {if(e==8)
                       {
                            z=0;
                            e=0;
                       }
                    }
                }



break;

