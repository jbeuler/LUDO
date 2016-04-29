n_anim=1;///loading
m=0;
i_anim=0;
idn=0;




                while(n_anim)/**Boucle correspondant à animation des dices*/
                {


                        SDL_PollEvent(&feuDartifice);
                        t_f=SDL_GetTicks();




                        if(t_f-t_i>100)/**A chaque 200milisecondes*/
                        {

                            t_i=t_f;/**Le temps initial devient le temps final*/



                                if(i_anim<=18)
                                {

                                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));/**On efface*/
                                    #include "BLIT.h"
                                    #include "blit_pieces.h"

                                   SDL_BlitSurface(fireworks[i_anim],NULL,ecran,&pos0);/**On cole le de en question*/
                                   SDL_BlitSurface(fireworks[i_anim],NULL,ecran,&xyClavier);
                                   SDL_BlitSurface(fireworks[i_anim],NULL,ecran,&xyCarreJaune);
                                   SDL_BlitSurface(fireworks[i_anim],NULL,ecran,&xyCarreMilieu);
                                   SDL_BlitSurface(fireworks[i_anim],NULL,ecran,&xyCroix);
                                   SDL_BlitSurface(fireworks[i_anim],NULL,ecran,&position[7]);
                                   SDL_BlitSurface(fireworks[i_anim],NULL,ecran,&position[19]);
                                   SDL_BlitSurface(fireworks[i_anim],NULL,ecran,&xyHint);

                                   if(i_anim==9)
                                        {idn=1;}

                                    if(idn==1)
                                   {
                                    SDL_BlitSurface(fireworks2[i_animf],NULL,ecran,&pos0);/**On cole le de en question*/
                                   SDL_BlitSurface(fireworks2[i_anim],NULL,ecran,&xyClavier);
                                   SDL_BlitSurface(fireworks2[i_anim],NULL,ecran,&xyCarreJaune);
                                   SDL_BlitSurface(fireworks2[i_animf],NULL,ecran,&xyCarreMilieu);
                                   SDL_BlitSurface(fireworks2[i_animf],NULL,ecran,&xyCroix);
                                   SDL_BlitSurface(fireworks2[i_animf],NULL,ecran,&position[7]);
                                   SDL_BlitSurface(fireworks2[i_animf],NULL,ecran,&position[19]);
                                   SDL_BlitSurface(fireworks2[i_animf],NULL,ecran,&xyHint);

                                   i_animf++;

                                   if(i_animf==18)
                                    {i_animf=0;
                                    idn=0;}

                                   }



                                   if(i_anim<=15)
                                    {
                                        SDL_BlitSurface(fireworks1[i_anim],NULL,ecran,&xyCarreBlanc);
                                        SDL_BlitSurface(fireworks1[i_anim],NULL,ecran,&xyDe[0]);
                                        SDL_BlitSurface(fireworks1[i_anim],NULL,ecran,&xyDe_anim[0]);
                                        SDL_BlitSurface(fireworks1[i_anim],NULL,ecran,&xyCarreMilieu);
                                        SDL_BlitSurface(fireworks1[i_anim],NULL,ecran,&xyDe[3]);
                                        SDL_BlitSurface(fireworks1[i_anim],NULL,ecran,&position[0]);
                                        SDL_BlitSurface(fireworks1[i_anim],NULL,ecran,&position[7]);
                                        SDL_BlitSurface(fireworks1[i_anim],NULL,ecran,&position[19]);
                                        SDL_BlitSurface(fireworks1[i_anim],NULL,ecran,&position[12]);
                                        SDL_BlitSurface(fireworks1[i_anim],NULL,ecran,&xyHint);
                                    }


                                    i_anim++;/**Incrementation de i_anim*/
                                    m++;
                                }

                            SDL_Flip(ecran);/**On affiche tout*/

                            if(m==19||m==38||m==57)/***nombre de repetitions de l'animation en question*/
                                i_anim=0;


                        }







                        if(i_anim==19)/**On s'arrete si i_amin est egal a la valeur aleatoire prealablement choisie*/
                        {
                            n_anim=0;
                            m=0;
                            i_anim=0;
                            t_f=0;
                            t_i=0;
                            i_animf=0;
                        }


            }








