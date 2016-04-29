                                    c_partie=1;
                                    i_anim=0;
                                    t_f=0;
                                    t_i=0;

                                    while(c_partie)
                                    {

                                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

                                        #include "BLIT.h"
                                        #include "blit_pieces.h"


                                        SDL_BlitSurface(rectangle_noir,NULL,ecran,&pos0);
                                        SDL_BlitSurface(rectangle_quitter,NULL,ecran,&xybox_quitter);

                                        for(i=9;i<11;i++)
                                        {
                                            SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);
                                        }

                                        SDL_BlitSurface(texte[38],NULL,ecran,&position[38]);
                                        SDL_BlitSurface(croix,NULL,ecran,&xyCroix);


                                        SDL_Flip(ecran);

                                        SDL_WaitEvent(&quitter_partie);

                                        switch(quitter_partie.type)
                                        {
                                        case SDL_KEYDOWN:
                                                    switch(quitter_partie.key.keysym.sym)
                                                    {
                                                    case SDLK_RETURN:


                                                    break;

                                                    case SDLK_ESCAPE:
                                                    c_partie=0;

                                                    break;

                                                    default:
                                                    break;
                                                    }
                                        break;

                                        case SDL_MOUSEBUTTONDOWN:
                                                x=quitter_partie.button.x;
                                                y=quitter_partie.button.y;

                                                if((x>=position[9].x && x<=position[9].x+texte[9]->w)&&(y>=position[9].y&&y<=position[9].y+texte[9]->h))
                                                   {c_partie=0;
                                                   continuer=0;
                                                   tem_save=1;
                                                printf("COOL");

                                                    fseek(fichier1,0,SEEK_SET);
                                                   for(i=0;i<16;i++)
                                                    fprintf(fichier1,"%d %d %d %d %d %d %d %d %d %d %d %d %d %s %s %s %s\n",cjb, nbre_pieces,u,k[i],l[i],distans[i],temoin[i],stop[i], anim1, anim2,rchecked, socle, machine, joueur1, joueur2, joueur3, joueur4);

                                                    for(i=0;i<4;i++)
                                                    {
                                                    fprintf(fichier1, "%d\n",jcomp[i]);
                                                    }

                                                   for(i=0;i<15;i++)
                                                        {for(j=0;j<15;j++)
                                                            fprintf(fichier1,"%d %d\n",barrage[i][j].x, barrage[i][j].y);}
                                                   }

                                                else if((x>=position[10].x && x<=position[10].x+texte[10]->w)&&(y >= position[10].y&&y<=position[10].y+texte[10]->h))
                                                    {c_partie=0;
                                                    continuer=0;
                                                    tem_save=1;

                                                    }
                                                else if((x>=xyCroix.x && x<=xyCroix.x+croix->w)&&(y >= xyCroix.y&&y<=xyCroix.y+croix->h))
                                                {
                                                        c_partie=0;

                                                }
                                        break;

                                        case SDL_MOUSEMOTION:
                                            xm=quitter_partie.motion.x;
                                            ym=quitter_partie.motion.y;

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

                                    }

