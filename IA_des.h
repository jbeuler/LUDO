{
                    //#include "fireworks_blue.h"
              //  if(no_game_final==1||total[2]==0)
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
                            {
                            SDL_BlitSurface(rectangle_noir,NULL,ecran,&pos0);
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



                }

