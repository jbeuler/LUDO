                                                    d=1;

                                                     if(strcmp(papier,"Ordinateur1")==0 || strcmp(papier,"Ordinateur2")==0 || strcmp(papier,"Ordinateur3")==0)
                                                            {i_ecrire=strlen(papier);
                                                            stp=1;
                                                            while(stp)
                                                            {i_ecrire--;
                                                            papier[i_ecrire] = ' ';

                                                                if(i_ecrire==0)
                                                                    {stp=0;
                                                                    papier[i_ecrire]= '\0';}
                                                            }
                                                            }


                                                    i_ecrire=strlen(papier);///longueur de la chaine

                                                    while(d)
                                                    {
                                                        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                                                        SDL_BlitSurface(rectangle_np,NULL,ecran,&pos0);
                                                        SDL_BlitSurface(texte[19],NULL,ecran,&position[19]);


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

                                                    for(i=15;i<17;i++)
                                                    {SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);
                                                    SDL_BlitSurface(texte[i+6],NULL,ecran,&position[i+6]);}


                                        SDL_BlitSurface(rectangle_noir,NULL,ecran,&pos0);
                                        SDL_BlitSurface(rectangle_quitter,NULL,ecran,&xybox_quitter);
                                        SDL_BlitSurface(rectangle_quitter,NULL,ecran,&xyClavier);

                                        for(i=0;i<3;i++)
                                            for(j=0;j<10;j++)
                                            {
                                            SDL_BlitSurface(boutton_clavier[i][j],NULL,ecran,&xyboutton_clavier[i][j]);
                                            SDL_BlitSurface(touche[i][j],NULL,ecran,&xyboutton_clavier[i][j]);

                                            }


                                        if(schecked==1)
                                            b5=0;

                                        else
                                            b5=255;
                                        if(computer==1)
                                        {if(schecked==2)
                                            b6=0;
                                        else
                                            b6=255;
                                        }

                                        cercle[5]=filledCircleRGBA(ecran,position[25].x-20,position[25].y+15,15,r5,b5,g5,255);

                                        if(computer==1)
                                        {cercle[6]=filledCircleRGBA(ecran,position[25].x-20,position[25].y+75,15,r6,b6,g6,255);}



                                        SDL_BlitSurface(champs,NULL,ecran,&xybox_champs);///Champs de texte

                                        texte[28]=TTF_RenderText_Blended(police[4],papier,colour2);

                                        if(computer==1)
                                         for(i=25;i<29;i++)///Name et Computer et ok
                                        {SDL_BlitSurface(texte[i],NULL,ecran,&position[i]);}
                                        else
                                        {SDL_BlitSurface(texte[25],NULL,ecran,&position[25]);
                                        SDL_BlitSurface(texte[27],NULL,ecran,&position[27]);
                                        SDL_BlitSurface(texte[28],NULL,ecran,&position[28]);}





                                        SDL_Flip(ecran);
                                        SDL_WaitEvent(&ecrire);

                                        switch(ecrire.type)
                                        {
                                        case SDL_MOUSEBUTTONDOWN:
                                            x=ecrire.button.x;
                                            y=ecrire.button.y;

                                            if((x>position[25].x-20-15)&&(x<position[25].x-20+15)&&(y>position[25].y+15-15)&&(y<position[25].y+15+15))
                                                schecked=1;
                                            if(computer==1)
                                            {if((x>position[25].x-20-15)&&(x<position[25].x-20+15)&&(y>position[25].y+75-15)&&(y<position[25].y+75+15))
                                                schecked=2;}

                                            if(x>position[27].x&&x<position[27].x+texte[27]->w&&y>position[27].y&&y<position[27].y+texte[27]->h)
                                            {
                                                if(schecked==1)
                                                {
                                                    if(i_ecrire>2)
                                                        {d=0;
                                                        papier[i_ecrire]= '\0';}



                                                }
                                            if(computer==1)
                                                {if(schecked==2)
                                                    {


                                                        if(check==1)
                                                        {sprintf(papier,"Ordinateur1");
                                                        d=0;}
                                                        else if(check==2)
                                                        {sprintf(papier,"Ordinateur2");
                                                        d=0;}
                                                        else if(check==3)
                                                        {sprintf(papier,"Ordinateur3");
                                                        d=0;}





                                                    }
                                                }

                                            }

                                            c_write=1;
                                            i=0;
                                            j=0;

                                        if(schecked==1)
                                            {while(c_write)
                                            {
                                                if(x>xyboutton_clavier[i][j].x&&x<xyboutton_clavier[i][j].x+30&&y>xyboutton_clavier[i][j].y&&y<xyboutton_clavier[i][j].y+30)
                                                {

                                                    c_write=0;
                                                    if(j<=6||i!=2)
                                                    {if(i_ecrire<15)
                                                    {
                                                    papier[i_ecrire] = car_touche[i_kont[i][j]][0];
                                                    i_ecrire++;
                                                    }
                                                    }
                                                    else if(j==9&&i==2)
                                                    {
                                                        if(i_ecrire>0)
                                                        {i_ecrire--;
                                                        papier[i_ecrire] = ' ';


                                                        }

                                                    }

                                                }

                                                j++;

                                                if(j==10)
                                                {
                                                    i++;
                                                    j=0;
                                                }

                                                if(i==3)
                                                {
                                                    c_write=0;
                                                }

                                            }
                                            }




                                        break;

                                        case SDL_MOUSEMOTION:
                                            xm=ecrire.motion.x;
                                            ym=ecrire.motion.y;

                                           /* c_write=1;
                                            while(c_write)
                                            {
                                            if(xm>xyboutton_clavier[i][j].x&&xm<xyboutton_clavier[i][j].x+30&&ym>xyboutton_clavier[i][j].y&&ym<xyboutton_clavier[i][j].y+30)
                                                {SDL_FillRect(boutton_clavier[i][j],NULL,SDL_MapRGB(ecran->format,200,200,200));
                                                c=0;
                                                }

                                            else
                                                {SDL_FillRect(boutton_clavier[i][j],NULL,SDL_MapRGB(ecran->format,255,255,255));
                                                c_write=0;
                                                }

                                            j++;

                                                if(j==10)
                                                {
                                                    i++;
                                                    j=0;
                                                }

                                                if(i==3)
                                                {
                                                    c_write=0;
                                                }
                                            }*/

                                            break;

                                        case SDL_KEYDOWN:

                                                    if(schecked==1)
                                                    {if (SDLK_a <= ecrire.key.keysym.sym && ecrire.key.keysym.sym <= SDLK_z)
                                                        {
                                                            if(i_ecrire<15)
                                                        {papier[i_ecrire] = 'a' +  ecrire.key.keysym.sym - SDLK_a;
                                                        i_ecrire++;}


                                                        }
                                                    }
                                                    if(ecrire.key.keysym.sym==SDLK_BACKSPACE)
                                                    {    if(i_ecrire>0)
                                                        {i_ecrire--;
                                                        papier[i_ecrire] = ' ';


                                                        }

                                                    }

                                                    if (ecrire.key.keysym.sym== SDLK_RETURN)
                                                            {if(schecked==1)
                                                                {if(i_ecrire>2)
                                                                {
                                                                    d=0;
                                                                    papier[i_ecrire]= '\0';

                                                                }
                                                                }

                                                            if(schecked==2)
                                                            {
                                                                  if(check==1)
                                                        {sprintf(papier,"Ordinateur1");
                                                        d=0;}
                                                        else if(check==2)
                                                        {sprintf(papier,"Ordinateur2");
                                                        d=0;}
                                                        else if(check==3)
                                                        {sprintf(papier,"Ordinateur3");
                                                        d=0;}
                                                            }
                                                            }



                                                   if(ecrire.key.keysym.sym==SDLK_ESCAPE)
                                                            {if(schecked==1)
                                                                {if(i_ecrire>2)
                                                                {
                                                                    d=0;
                                                                    papier[i_ecrire]='\0';


                                                                }
                                                                }
                                                            if(computer==1)
                                                            {if(schecked==2)
                                                            {
                                                                  if(check==1)
                                                        {sprintf(papier,"Ordinateur1");
                                                        d=0;}
                                                        else if(check==2)
                                                        {sprintf(papier,"Ordinateur2");
                                                        d=0;}
                                                        else if(check==3)
                                                        {sprintf(papier,"Ordinateur3");
                                                        d=0;}
                                                            }
                                                            }
                                                            }




                                        break;

                                        default:
                                            break;
                                        }
                                                    }

