n_anim=1;///loading
i=0;



                while(n_anim)/**Boucle correspondant à animation des dices*/
                {


                        SDL_PollEvent(&event);
                        t_f=SDL_GetTicks();




                        if(t_f-t_i>50)/**A chaque 200milisecondes*/
                        {

                            t_i=t_f;/**Le temps initial devient le temps final*/
                            SDL_BlitSurface(image_menu[1],NULL,ecran,&xyDe[1]);


                            if(t_i>3000)
                            {
                                if(i_anim<=23)
                                {

                                   SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));/**On efface*/
                                   SDL_BlitSurface(image_menu[1],NULL,ecran,&xyDe[1]);
                                   SDL_BlitSurface(loading[i_anim],NULL,ecran,&xyDe[3]);/**On cole le de en question*/

                                    i_anim++;/**Incrementation de i_anim*/
                                    i++;
                                }
                            }
                            SDL_Flip(ecran);/**On affiche tout*/

                            if(i==12||i==23||i==34)
                                i_anim=0;


                        }







                        if(i_anim==12)/**On s'arrete si i_amin est egal a la valeur aleatoire prealablement choisie*/
                        {   n_anim=0;
                            i=0;
                            i_anim=0;
                            t_f=0;
                            t_i=0;
                        }


            }







