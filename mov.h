
continuer=1;


while(continuer)
    {







                                        #include "no_game.h"

                                        total[0]=anim1;
                                        total[1]=anim2;
                                        total[2]=anim1+anim2;

                                        if((no_game_final==1&&dg==1)||(total[2]==0&&dg==1))
                                        {
                                            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                                            #include "BLIT.h"
                                            #include "blit_pieces.h"

                                            SDL_Flip(ecran);

                                            SDL_Delay(500);
                                        }

                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                    if((no_game_final==1&&dg==1)||(total[2]==0&&dg==1))/**CHANGEMENT DE SOCLE AUTOMATIQUE**/
                    {

                    if(no_game_final==1)
                            {anim1=0;
                            anim2=0;}

                        dg=0;

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

                      //  FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,turn,0,NULL);
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

                        //FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,turn,0,NULL);
                        }
                    }

                    if(rchecked==2)
                    {   if(reste1!=6&&reste2!=6)
                        {if(socle_begin==1)
                        {if(socle==1)/**CONDITIONS DE CHANGEMENT DE JOUEURS*/
                        socle=0;
                        else if(socle==0)
                        socle=1;
                        }

                       // FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,turn,0,NULL);
                        }
                    }}




#include "BLIT.h"




  #include "blit_pieces.h"


                            if(text==1)
                            {
                                        SDL_BlitSurface(hint, NULL, ecran, &xyHint);
                                        if(text_ver==1)
                                        {FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,info,0,NULL);
                                        text_ver=0;
                                        }
                                        sprintf(message,"Verifier que vous n'avez plus de jeu!");
                                        sprintf(message1,"Cliquer sur vos pions pour les possibilités de jeu.");

                                        texte[34]=TTF_RenderText_Blended(police[8],message,blue_fonce);
                                        texte[35]=TTF_RenderText_Blended(police[8],message1,blue_fonce);
                                        SDL_BlitSurface(texte[34],NULL, ecran, &position[34]);
                                        SDL_BlitSurface(texte[35],NULL, ecran, &position[35]);
                            }




                                SDL_Flip(ecran);




#include "IA.h" /**INTELLIGENCE ARTIFICIELLE*/

                        SDL_WaitEvent(&event);

                        switch(event.type)
                        {
                            case SDL_QUIT:
                                continuer = 0;

                                break;
                            case SDL_KEYDOWN:
                                switch(event.key.keysym.sym)
                                    {
                                    case SDLK_ESCAPE:
                                        continuer=0;

                                        break;

                                    case SDLK_SPACE:


               if(no_game_final==1||total[2]==0)
                {

                    for(i=0;i<16;i++)
                        stop[i]=0;

                anim1 = ( rand () % ( MAX - MIN + 1)) + MIN;/**Valeur aleatoire en 0 et 6*/
                anim2 = ( rand () % ( MAX - MIN + 1)) + MIN;/**Valeur aleatoire en 0 et 6*/

                  if(anim2<anim1)/**On fait en sorte que la plus petite valeur soit dans total[0]*/
                                        {
                                            B=anim2;
                                            anim2=anim1;
                                            anim1=B;
                                        }






                n_anim=1;

                FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,diice,0,NULL);

                while(n_anim)/**Boucle correspondant à animation des dices*/
                {
                        t_f=SDL_GetTicks();

                        if(t_f-t_i>50)/**A chaque 30milisecondes*/
                        {

                            t_i=t_f;/**Le temps initial devient le temps final*/
                            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));/**On efface*/
                            #include "BLIT.h"/**On recolle*/
                            #include "blit_pieces.h"


                            if(u<=rchecked)///si on est dans joueur_begin
                            {SDL_BlitSurface(rectangle_noir,NULL,ecran,&pos0);
                            SDL_BlitSurface(rectangle_jb,NULL,ecran,&xybox_jb);
                            SDL_BlitSurface(texte[20],NULL,ecran,&position[20]);
                             for(i=0;i<4; i++)
                                {
                                    SDL_BlitSurface(texte[29+i],NULL,ecran,&position[29+i]);
                                }
                                        SDL_BlitSurface(hint, NULL, ecran, &xyHint);
                                        sprintf(message,"Cliquer sur 'JOUER' à droite pour lancer les dés.");
                                        sprintf(message1,"Celui ou celle qui marque le plus de points commence la partie.");
                                        texte[34]=TTF_RenderText_Blended(police[8],message,blue_fonce);
                                        texte[35]=TTF_RenderText_Blended(police[8],message1,blue_fonce);
                                        SDL_BlitSurface(texte[34],NULL, ecran, &position[34]);
                                        SDL_BlitSurface(texte[35],NULL, ecran, &position[35]);
                            }

                            else if(u>rchecked)
                                {socle_begin=1;
                                dg=1;
                                reste1=anim1;
                                reste2=anim2;}



                            if(i_anim1==7)
                                i_anim1=1;

                            if(i_anim2==7)
                                i_anim2=1;

                            ///SDL_BlitSurface(encadre_de,NULL,ecran,&xyencadre_de);/**Enadrement*/
                            cercle[1]=filledCircleRGBA(ecran,xyDe_anim[0].x+79,xyDe_anim[0].y+79/2,96,33,57,88,255);
                            cercle[0]=filledCircleRGBA(ecran,xyDe_anim[0].x+79,xyDe_anim[0].y+79/2,92,255,255,255,255);
                            SDL_BlitSurface(De[i_anim1],NULL,ecran,&xyDe_anim[0]);/**On cole le de en question*/
                            SDL_BlitSurface(De[i_anim2],NULL,ecran,&xyDe_anim[1]);

                            SDL_Flip(ecran);/**On affiche tout*/
                            i_anim1++;
                            i_1++;
                            i_anim2++;/**Incrementation de i_anim*/

                        }


                        if(i_1>12)/**On s'arrete si i_amin est egal a la valeur aleatoire prealablement choisie*/
                        {   n_anim=0;
                        printf("anim1=%d\n",anim1);
                        printf("anim2=%d\n\n",anim2);


                            SDL_BlitSurface(De[anim1],NULL,ecran,&xyDe_anim[0]);/**On cole le de en question*/
                            SDL_BlitSurface(De[anim2],NULL,ecran,&xyDe_anim[1]);
                            SDL_Flip(ecran);

                            t_f=0;
                            t_i=0;
                            i_1=0;

                        }
                }

                u++;
                }
                else
                {
                    text=1;
                    text_ver=1;

                }

                                                printf("SPACE\n");

                                    break;

                                    default:
                                        break;

                                    }
                                break;

                            #include "garage2.h"

                            case SDL_MOUSEMOTION:
                            xm= event.motion.x;
                            ym= event.motion.y;

                            for(i=0;i<15;i++)/**effet Si le curseur est sur une case*/
                            {
                            for(j=0;j<15;j++)
                            {
                            if((i>=6&&i<9)||(j>=6&&j<9))
                            {
                            if((xm>=xypiece[i][j].x)&&(xm<=xypiece[i][j].x+dimCarre)&&(ym>=xypiece[i][j].y)&&(ym<=xypiece[i][j].y+dimCarre))
                            {
                                SDL_BlitSurface(case_pointmotion,NULL,ecran,&xypiece[i][j]);/**on la colle*/
                            }
                            }
                            }
                            }

                            /**Effet sur JOUER, Quitter et retour si le curseur y est*/
                            if((xm>=position[1].x&&xm<=position[1].x+texte[1]->w)&&(ym>=position[1].y&&ym<=position[1].y+texte[1]->h))
                                texte[1]=TTF_RenderText_Blended(police[1],"JOUER",blue);
                            else
                                texte[1]=TTF_RenderText_Blended(police[1],"JOUER",colour1);

                            if((xm>=position[36].x&&xm<=position[36].x+texte[36]->w)&&(ym>=position[36].y&&ym<=position[36].y+texte[36]->h))
                                texte[36]=TTF_RenderText_Blended(police[9],"Quitter",blue);
                            else
                                texte[36]=TTF_RenderText_Blended(police[9],"Quitter",white);

                            if((xm>=position[37].x&&xm<=position[37].x+texte[37]->w)&&(ym>=position[37].y&&ym<=position[37].y+texte[37]->h))
                                texte[37]=TTF_RenderText_Blended(police[9],"Retour",blue);
                            else
                                texte[37]=TTF_RenderText_Blended(police[9],"Retour",white);



                            break;


                            default:
                                break;



                        }



                     #include "fin.h"

                     #include "joueur_begin.h"




    }


