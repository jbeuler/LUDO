g=0;
                    fini=1;

                    for(i=0;i<4;i++)
                    {
                        if(distans[4*socle+i]==58)
                            g++;
                    }

                    if(g==4)
                    {
                        while(fini)
                        {


                            SDL_PollEvent(&fin);

                            switch(fin.type)
                            {
                            case SDL_QUIT:

                                fini = 0;

                                break;
                            case SDL_KEYDOWN:
                                switch(fin.key.keysym.sym)
                                    {
                                    case SDLK_ESCAPE:
                                        fini=0;
                                        continuer=0;

                                        break;

                                        default:
                                        break;

                                    }
                            break;

                            case SDL_MOUSEBUTTONDOWN:
                                x=fin.button.x;
                                y=fin.button.y;

                                if(x>position[27].x&&x<position[27].x+texte[27]->w&&y>position[27].y&&y<position[27].y+texte[27]->h)
                                {
                                    continuer=0;
                                    fini=0;
                                }

                                break;
                            }



                                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));



                                        t_f=SDL_GetTicks();
                                        if(i_anim<150 && t_f-t_i>1)
                                            {i_anim+=30;
                                            t_i=t_f;
                                            }
                                        SDL_SetAlpha(rectangle_noir, SDL_SRCALPHA ,i_anim);
                                        ///SDL_FillRect(rectangle_quitter,NULL,SDL_MapRGB(ecran->format,33,57,88));

                                        SDL_BlitSurface(rectangle_noir,NULL,ecran,&pos0);
                                        SDL_BlitSurface(rectangle_quitter,NULL,ecran,&xybox_quitter);

                                       SDL_BlitSurface(texte[27],NULL,ecran,&position[27]);
                                       sprintf(message,"Vous avez gagné!!");
                                       texte[35]=TTF_RenderText_Blended(police[8],message,white);
                                       SDL_BlitSurface(texte[35],NULL,ecran,&position[35]);



                                        SDL_Flip(ecran);


                        }
                    }

