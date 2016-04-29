        case SDL_MOUSEBUTTONUP:
        /**pointeur pour une piece*/
        x=event.button.x;
        y=event.button.y;

                                        total[0]=anim1;
                                        total[1]=anim2;
                                        total[2]=anim1+anim2;

                                        if(text==1)
                                            text=0;

                                  //  printf("socle=%d\n",socle);


                                #include "no_game.h"

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

                        if((x>=parcours[4*socle +e][distans[4*socle +e]].x)&&(x<=parcours[4*socle +e][distans[4*socle +e]].x+dimCarre)&&(y>=parcours[4*socle +e][distans[4*socle +e]].y)&&(y<=parcours[4*socle +e][distans[4*socle +e]].y+dimCarre))
                        {
                        if((x>=xypiece[k[4*socle +e]][l[4*socle +e]].x)&&(x<=xypiece[k[4*socle +e]][l[4*socle +e]].x+dimCarre)&&(y>=xypiece[k[4*socle +e]][l[4*socle +e]].y)&&(y<=xypiece[k[4*socle +e]][l[4*socle +e]].y+dimCarre))
                        {
                        if(temoin[4*socle +e]==max_tableau(p,g))/**je prend la piece du haut*/
                            {
                                FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,choose,0,NULL);
                        b=4*socle +e;

/**GESTION DE BARRAGE*/if((k[b]!=0||l[b]!=6)&&(k[b]!=6||l[b]!=14)&&(k[b]!=14||l[b]!=8)&&(k[b]!=8||l[b]!=0))/**si je ne suis pas dans une case depart*/
                            if(temoin[b]==1)
                                tem_barrage=1;/**je suis sur un barrage*/

                                        printf("k[%d]=%d et l[%d]=%d\n",b,k[b],b,l[b]);
                                        printf("i_k[%d]=%d et i_l[%d]=%d\n",b,i_k[b],b,i_l[b]);

                                        printf("distans[%d]=%d\n",b, distans[b]);

                                        for(i=0;i<4;i++)
                                        {

                                                printf("no_game[%d]=%d\n",4*socle+i,no_game[4*socle+i]);

                                        }
                        g=0;
                        z=0;/**fermeture de la boucle*/
                        clean(p,15);
                        /** FILL*/
                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                        #include "BLIT.h"
                        SDL_BlitSurface(case_lum,NULL,ecran,&xypiece[k[b]][l[b]]);/**on la colle*/

                        #include "blit_pieces.h"




                        SDL_Flip(ecran);


                    if(stop[b]==0)
                        {n=1;


                                    /**Apres le choix de la piece, on a plusieur possibilites*/
                                    while(n)
                                    {
                                        /** FILL*/
                                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                                        #include "BLIT.h"
                                        SDL_BlitSurface(case_lum,NULL,ecran,&xypiece[k[4*socle +e]][l[4*socle +e]]);/**on la colle*/

                                        total[0]=anim1;
                                        total[1]=anim2;
                                        total[2]=anim1+anim2;


           #include "pres_barrage.h"



      #include "restriction_proposition.h"




        #include "blit_pieces.h"


                                        SDL_Flip(ecran);



                                    SDL_WaitEvent(&buttonup);


                                    switch(buttonup.type)
                                    {

                                        case SDL_KEYDOWN:
                                            switch(buttonup.key.keysym.sym)
                                            {
                                            /*case SDLK_UP:
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
                                            break;*/



                                            default:
                                                break;
                                            }

                                    break;

                                    case SDL_MOUSEBUTTONUP:
                                            x=buttonup.button.x;
                                            y=buttonup.button.y;

                                                printf("%d  %d\n\n",parcours[b][distans[b]+anim1].x,parcours[b][distans[b]+anim1].y);

                                                    #include "condition_garage2_mousebutton.h"




                                                n = 0;


                                    break;

                                    case SDL_MOUSEMOTION:
                                    xm= buttonup.motion.x;
                                    ym= buttonup.motion.y;


                                    break;




                                    }








                            }

                            }
                    }
                        }
                }
                e++;
                if(e==4)
                       {
                            z=0;
                            e=0;
                       }

                    if(rchecked==4)
                    {if(e==4)
                       {
                            z=0;
                            e=0;
                       }
                    }

                    if(rchecked==3)
                    {if(e==4)
                       {
                            z=0;
                            e=0;
                       }
                    }

                    if(rchecked==2)
                    {if(e==4)
                       {
                            z=0;
                            e=0;
                       }
                    }
                }



                    #include "animation_des.h"





        if(x>=position[36].x&&x<=position[36].x+texte[36]->w&&y>=position[36].y&&y<=position[36].y+texte[36]->h)///quitter
        {
            #include "condition_quitter_partie.h"
        }
        else if(x>=position[37].x&&x<=position[37].x+texte[37]->w&&y>=position[37].y&&y<=position[37].y+texte[37]->h)///retour
        {
            continuer=0;
            tem_save=0;
        }













