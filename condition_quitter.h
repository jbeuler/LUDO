                                    c_quitter=1;
                                    i_anim=0;
                                    t_f=0;
                                    t_i=0;
                                    while(c_quitter)
                                    {
                                        SDL_PollEvent(&quitter);

                                        switch(quitter.type)
                                        {
                                        case SDL_KEYDOWN:
                                                    switch(quitter.key.keysym.sym)
                                                    {
                                                    case SDLK_RETURN:
                                                    continuer=0;
                                                    c_quitter=0;

                                                    break;

                                                    case SDLK_ESCAPE:
                                                    continuer=0;
                                                    c_quitter=0;

                                                    break;

                                                    default:
                                                    break;
                                                    }
                                        break;

                                        case SDL_MOUSEBUTTONDOWN:
                                                x=quitter.button.x;
                                                y=quitter.button.y;

                                                if((x>position[9].x && x<position[9].x+texte[9]->w)&&(y>position[9].y&&y<position[9].y+texte[9]->h))
                                                   {c=0;
                                                   c_quitter=0;}
                                                else if((x>position[10].x && x<position[10].x+texte[10]->w)&&(y > position[10].y&&y<position[10].y+texte[10]->h))
                                                    c_quitter=0;
                                        break;

                                        case SDL_MOUSEMOTION:
                                            xm=quitter.motion.x;
                                            ym=quitter.motion.y;

                                            if((xm>position[9].x && xm<position[9].x+texte[9]->w)&&(ym>position[9].y&&ym<position[9].y+texte[9]->h))
                                                {
                                                       texte[9]=TTF_RenderText_Blended(police[10],"oui", white);
                                                }
                                            else
                                                {
                                                        texte[9]=TTF_RenderText_Blended(police[6],"oui",white);
                                                }


                                            if((xm>position[10].x && xm<position[10].x+texte[10]->w)&&(ym > position[10].y&&ym<position[10].y+texte[10]->h))
                                                    {
                                                        texte[10]=TTF_RenderText_Blended(police[10],"non",white);
                                                    }
                                            else
                                                    {
                                                        texte[10]=TTF_RenderText_Blended(police[6],"non",white);
                                                    }

                                        break;





                                        default:
                                            break;

                                    }

                                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                        SDL_BlitSurface(GDe,NULL,ecran,&xyDe[5]);/**Grand de de fond*/
                                        for(i=2;i<8;i++)
                                            {
                                            SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);
                                            }


                                        t_f=SDL_GetTicks();
                                        if(i_anim<150 && t_f-t_i>1)
                                            {i_anim+=30;
                                            t_i=t_f;
                                            }
                                        SDL_SetAlpha(rectangle_noir, SDL_SRCALPHA ,i_anim);
                                        ///SDL_FillRect(rectangle_quitter,NULL,SDL_MapRGB(ecran->format,33,57,88));

                                        SDL_BlitSurface(rectangle_noir,NULL,ecran,&pos0);
                                        SDL_BlitSurface(rectangle_quitter,NULL,ecran,&xybox_quitter);

                                        for(i=8;i<11;i++)
                                        {
                                            SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);
                                        }



                                        SDL_Flip(ecran);

                                    }
