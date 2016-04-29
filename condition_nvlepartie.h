                                    c=1;

                                    while(c)
                                    {
                                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));




                                        SDL_BlitSurface(rectangle_np,NULL,ecran,&pos0);

                                        if(rchecked==0)
                                        {SDL_BlitSurface(hint, NULL, ecran, &xyHint);
                                        sprintf(message,"Selectionner le nombre de joueur");
                                        texte[34]=TTF_RenderText_Blended(police[8],message,blue_fonce);
                                        SDL_BlitSurface(texte[34],NULL, ecran, &position[34]);
                                        }
                                        else
                                        {SDL_BlitSurface(hint, NULL, ecran, &xyHint);
                                        sprintf(message,"Cliquer sur 'Nom' pour changer le nom! Puis cliquer sur commencer!");
                                        texte[34]=TTF_RenderText_Blended(police[8],message,blue_fonce);
                                        SDL_BlitSurface(texte[34],NULL, ecran, &position[34]);
                                        }


                                        SDL_BlitSurface(texte[19],NULL,ecran,&position[19]);


                                        texte[21]=TTF_RenderText_Blended(police[4],joueur1,colour2);
                                        texte[22]=TTF_RenderText_Blended(police[4],joueur2,colour2);
                                        texte[23]=TTF_RenderText_Blended(police[4],joueur3,colour2);
                                        texte[24]=TTF_RenderText_Blended(police[4],joueur4,colour2);

                                        if(rchecked==2)
                                            {r2=27;
                                            g2=191;
                                            b2=216;
                                            position[15].x=position[12].x-150;///joueur 1
                                            position[16].x=position[12].x-150;///joueur 2

                                            position[21].x=position[15].x+150;///Name1
                                            position[22].x=position[16].x+150;///Name2/ Computer
                                            nbre_pieces=8;

                                            for(i=15;i<17;i++)
                                                {SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);
                                                SDL_BlitSurface(texte[i+6],NULL,ecran,&position[i+6]);}

                                            }
                                        else
                                            {r2=255;
                                            g2=255;
                                            b2=255;
                                            }

                                        if(rchecked==3)
                                            {r3=27;
                                            g3=191;
                                            b3=216;
                                            position[15].x=position[12].x-150+250;///joueur 1
                                            position[16].x=position[12].x-150+250;///joueur 2
                                            position[17].x=position[13].x-150;///joueur 3

                                            position[21].x=position[15].x+150;///Name1
                                            position[22].x=position[16].x+150;///Name2/ Computer
                                            position[23].x=position[17].x+150;///Name3/ Computer
                                            nbre_pieces=12;

                                            for(i=15;i<18;i++)
                                                {SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);
                                                SDL_BlitSurface(texte[i+6],NULL,ecran,&position[i+6]);}
                                            }
                                        else
                                            {r3=255;
                                            g3=255;
                                            b3=255;}

                                        if(rchecked==4)
                                            {r4=27;///On rempli le cercle en question
                                            g4=191;
                                            b4=216;
                                            position[15].x=position[12].x-150+250+250;///joueur 1
                                            position[16].x=position[12].x-150+250+250;///joueur 2
                                            position[17].x=position[13].x-150+250;///joueur 3

                                            position[21].x=position[15].x+150;///Name1
                                            position[22].x=position[16].x+150;///Name2/ Computer
                                            position[23].x=position[17].x+150;///Name3/ Computer
                                            nbre_pieces=16;

                                            for(i=15;i<19;i++)
                                                {SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);
                                                SDL_BlitSurface(texte[i+6],NULL,ecran,&position[i+6]);}
                                            }
                                        else
                                            {r4=255;/// le cercle prend la couleur blanche
                                            g4=255;
                                            b4=255;}



                                        cercle[12]=filledCircleRGBA(ecran,position[8].x-50-50,200,30,150,150,150,255);
                                        cercle[13]=filledCircleRGBA(ecran,position[8].x+150,200,30,150,150,150,255);
                                        cercle[14]=filledCircleRGBA(ecran,position[8].x+350+50,200,30,150,150,150,255);

                                        cercle[2]=filledCircleRGBA(ecran,position[8].x-50-50,200,25,r2,g2,b2,255);
                                        cercle[3]=filledCircleRGBA(ecran,position[8].x+150,200,25,r3,g3,b3,255);
                                        cercle[4]=filledCircleRGBA(ecran,position[8].x+350+50,200,25,r4,g4,b4,255);


                                        for(i=11;i<15;i++)
                                            {
                                            SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);
                                            }



                                        SDL_Flip(ecran);



                                        SDL_WaitEvent(&nvlepartie);

                                        switch(nvlepartie.type)
                                        {
                                        case SDL_MOUSEBUTTONDOWN:
                                            x=nvlepartie.button.x;
                                            y=nvlepartie.button.y;

                                            #include "condition_nvlepartie_mousebutton.h"

                                        break;

                                        case SDL_MOUSEMOTION:
                                            xm=nvlepartie.motion.x;
                                            ym=nvlepartie.motion.y;

                                            if((xm>position[19].x&&xm<position[19].x+texte[19]->w)&&(ym>position[19].y&&ym<position[19].y+texte[19]->h))///commencer
                                                   texte[19]=TTF_RenderText_Blended(police[4],"Commencer",blue);

                                            else
                                                    texte[19]=TTF_RenderText_Blended(police[4],"Commencer",white);



                                            break;

                                        case SDL_KEYDOWN:
                                                    switch(nvlepartie.key.keysym.sym)
                                                    {
                                                    case SDLK_RETURN:
                                                    c=0;

                                                    break;

                                                    case SDLK_ESCAPE:
                                                    c=0;

                                                    break;

                                                    default:
                                                    break;
                                                    }
                                        break;

                                        default:
                                            break;
                                        }

                                    }
                                c=1;
