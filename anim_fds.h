                n_anim=1;///loading
                i=0;

                while(n_anim)/**Boucle correspondant à FDS animation*/
                {

                        SDL_PollEvent(&event);


                        t_f=SDL_GetTicks();




                        if(t_f-t_i>100)/**A chaque 200milisecondes*/
                        {

                            t_i=t_f;/**Le temps initial devient le temps final*/

                            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));/**On efface*/

                            if(i_anim<=31)
                            {SDL_BlitSurface(anim_fds[i_anim],NULL,ecran,&xyDe[1]);}/**On cole le de en question*/

                            SDL_Flip(ecran);/**On affiche tout*/
                            i_anim++;/**Incrementation de i_anim*/

                        }







                        if(i_anim==32)/**On s'arrete si i_amin est egal a la valeur aleatoire prealablement choisie*/
                        {   n_anim=0;
                            i=0;
                            i_anim=0;
                            t_f=0;
                            t_i=0;
                            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));/**On efface*/
                        }


                        }
