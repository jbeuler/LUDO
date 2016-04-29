
continuer=1;
while(continuer)
    {




                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                        #include "BLIT.h"



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
                            if((xm>=xyPetitCarre[i][j].x)&&(xm<=xyPetitCarre[i][j].x+dimCarre)&&(ym>=xyPetitCarre[i][j].y)&&(ym<=xyPetitCarre[i][j].y+dimCarre))
                            {
                                SDL_BlitSurface(case_pointmotion,NULL,ecran,&xyPetitCarre[i][j]);/**on la colle*/
                            }
                            }
                            }
                            }

                            /**Effet sur JOUER si le curseur y est*/
                            if((xm>=position[1].x&&xm<=position[1].x+50)&&(ym>=position[1].y&&ym<=position[1].y+15))
                                texte[1]=TTF_RenderText_Blended(police[1],"JOUER",blue);
                            else
                                texte[1]=TTF_RenderText_Blended(police[1],"JOUER",colour1);

                            break;


                            default:
                                break;



                        }

                    #include "blit_pieces.h"





                        /**for(i=0;i<4;i++)
                        {
                           piece[i+4]=filledCircleRGBA(ecran,xyPetitCarre[k[i]][l[i]].x+18,xyPetitCarre[k[i]][l[i]].y+18,100,255,255,255,255);
                        }*/



                            SDL_Flip(ecran);

                        ///  #include "joueur_begin.h"




    }



