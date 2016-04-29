                            if(j_b==0)
                            {   c=1;
                                i_anim=0;
                                compte=0;
                                t_i=0;
                                printf("rchecked=%d\n\n", rchecked);
                                clean(p,15);///tableau qui gere les max

                                /*strcpy(joueur1_nbrepts,blank);
                                strcpy(joueur2_nbrepts,blank);
                                strcpy(joueur3_nbrepts,blank);
                                strcpy(joueur4_nbrepts,blank);*/

                                clean(pts_j,5);
                                sprintf(joueur1_nbrepts,"%s",blank);
                                sprintf(joueur2_nbrepts,"%s",blank);
                                sprintf(joueur3_nbrepts,"%s",blank);
                                sprintf(joueur4_nbrepts,"%s",blank);



                                while(c)
                                {
                                    #include "IA_joueur_begin.h"

                                SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                                #include "BLIT.h"
                                #include "blit_pieces.h"





                                        SDL_BlitSurface(rectangle_noir,NULL,ecran,&pos0);

                                        SDL_BlitSurface(rectangle_jb,NULL,ecran,&xybox_jb);

                                        SDL_BlitSurface(hint, NULL, ecran, &xyHint);
                                        sprintf(message,"Cliquer sur 'JOUER' à droite pour lancer les dés.");
                                        sprintf(message1,"Celui ou celle qui marque le plus de points commence la partie.");
                                        texte[34]=TTF_RenderText_Blended(police[8],message,blue_fonce);
                                        texte[35]=TTF_RenderText_Blended(police[8],message1,blue_fonce);
                                        SDL_BlitSurface(texte[34],NULL, ecran, &position[34]);
                                        SDL_BlitSurface(texte[35],NULL, ecran, &position[35]);


                                        cercle[1]=filledCircleRGBA(ecran,xyDe_anim[0].x+79,xyDe_anim[0].y+79/2,96,33,57,88,255);
                                        cercle[0]=filledCircleRGBA(ecran,xyDe_anim[0].x+79,xyDe_anim[0].y+79/2,92,255,255,255,255);
                                        SDL_BlitSurface(De[anim1],NULL,ecran,&xyDe_anim[0]);/**Dice1 of animation*/
                                        SDL_BlitSurface(De[anim2],NULL,ecran,&xyDe_anim[1]);/**Dice2 of animation*/

                                        if(u==rchecked)
                                        {
                                            compte=0;
                                            cjb=0;



                                        printf("max=%d\n\n",max_tableau(p,u+1));

                                        g=1;

                                        do///on cherche le joueur ki a marque le plus de points
                                        {
                                            if(pts_j[g]==max_tableau(p,u))
                                                {cjb=g;
                                                compte++;}

                                            g++;
                                        }
                                        while(g!=rchecked+1);

                                        if(compte==1)///si il y a une seule valeur maximale
                                            {
                                            switch(cjb)///le joueur ki marque le plus de points
                                            {   case 1:
                                                sprintf(kikomans,"%s commence la partie",joueur1);
                                                texte[20]=TTF_RenderText_Blended(police[4],"Commencer",white);
                                                break;

                                                case 2:
                                                sprintf(kikomans,"%s commence la partie",joueur2);
                                                texte[20]=TTF_RenderText_Blended(police[4],"Commencer",white);
                                                break;

                                                case 3:
                                                sprintf(kikomans,"%s commence la partie",joueur3);
                                                texte[20]=TTF_RenderText_Blended(police[4],"Commencer",white);
                                                break;

                                                case 4:
                                                sprintf(kikomans,"%s commence la partie",joueur4);
                                                texte[20]=TTF_RenderText_Blended(police[4],"Commencer",white);
                                                break;


                                            }


                                            }
                                        else if(compte>1)///Si il y a plus dune valeur maximale
                                        {
                                        sprintf(kikomans,"Il y a egalite! On relance les dés!");
                                        texte[20]=TTF_RenderText_Blended(police[4],"Commencer",colour2);
                                        clean(p,15);



                                        }
                                        }

                                        else
                                        {texte[20]=TTF_RenderText_Blended(police[4],"Commencer",colour2);}

                                        SDL_BlitSurface(texte[1],NULL,ecran,&position[1]);
                                        SDL_BlitSurface(texte[20],NULL,ecran,&position[20]);




                                        if(u==1)
                                            {pts_j[1]=anim1+anim2;

                                            sprintf(joueur1_nbrepts,"%s     %d",joueur1, pts_j[1]);
                                            sprintf(joueur2_nbrepts,"%s",joueur2);

                                            }
                                        else if(u==2)
                                            {

                                            pts_j[2]=anim1+anim2;

                                            sprintf(joueur2_nbrepts,"%s     %d",joueur2,pts_j[2]);
                                            if(rchecked>2)
                                            {sprintf(joueur3_nbrepts,"%s",joueur3);}
                                            }
                                        else if(u==3)
                                            {pts_j[3]=anim1+anim2;

                                            sprintf(joueur3_nbrepts,"%s     %d",joueur3,pts_j[3]);
                                            if(rchecked>3)
                                            {sprintf(joueur4_nbrepts,"%s",joueur4);}
                                            }
                                        else if(u==4)
                                            {pts_j[4]=anim1+anim2;
                                            sprintf(joueur4_nbrepts,"%s     %d",joueur4,pts_j[4]);}

                                        else if(u==0&&compte==0)
                                            {sprintf(joueur1_nbrepts,"%s",joueur1);
                                            }




                                        texte[29]=TTF_RenderText_Blended(police[4],joueur1_nbrepts,colour2);
                                        texte[30]=TTF_RenderText_Blended(police[4],joueur2_nbrepts,colour2);
                                        texte[31]=TTF_RenderText_Blended(police[4],joueur3_nbrepts,colour2);
                                        texte[32]=TTF_RenderText_Blended(police[4],joueur4_nbrepts,colour2);
                                        texte[33]=TTF_RenderText_Blended(police[4],kikomans,colour2);








                                            for(i=0;i<4; i++)
                                            {
                                                SDL_BlitSurface(texte[29+i],NULL,ecran,&position[29+i]);
                                            }

                                            if(u==rchecked)
                                            {
                                                SDL_BlitSurface(texte[33],NULL,ecran,&position[33]);


                                            }










                                        SDL_Flip(ecran);

    /**INTELLIGENCE ARTIFICIELLE**/






                                        if(compte>1)
                                            {u=0;
                                            compte=0;}




                                    SDL_WaitEvent(&joueur_begin);
                                    switch(joueur_begin.type)
                                        {
                                        case SDL_KEYDOWN:
                                                    switch(joueur_begin.key.keysym.sym)
                                                    {
                                                    case SDLK_RETURN:
                                                    c=0;
                                                    j_b=1;
                                                    u++;

                                                    break;

                                                    case SDLK_ESCAPE:
                                                    c=0;
                                                    j_b=1;
                                                    u++;

                                                    break;

                                                    default:
                                                    break;
                                                    }
                                        break;

                                            case SDL_MOUSEBUTTONDOWN:
                                                x=joueur_begin.button.x;
                                                y=joueur_begin.button.y;

                                                printf("%s\n",joueur1_nbrepts);
                                                printf("%s\n",joueur2_nbrepts);
                                                printf("%s\n",joueur3_nbrepts);
                                                printf("%s\n",joueur4_nbrepts);
                                                if(u!=rchecked)
                                                {
                                                    #include "animation_des.h"

                                                    p[u]=anim1+anim2;///le tableau qui gere les max recoit les valeurs

                                                    printf("u=%d\n",u);
                                                }

                                                if(u==rchecked&&compte==1)
                                                {
                                                    if((x>position[20].x&&x<position[20].x+texte[20]->w)&&(y>position[20].y&&y<position[20].y+texte[20]->h))
                                                       {
                                                           c=0;
                                                           j_b=1;///pour eviter de reprendre joueur_begin
                                                           u++;///pour controler lanimation des des
                                                           anim1=0;
                                                           anim2=0;
                                                           printf("u final=%d\n",u);


                                                       }
                                                }




                                        break;

                                            case SDL_MOUSEMOTION:
                                            xm=joueur_begin.motion.x;
                                            ym=joueur_begin.motion.y;
                                             /**Effet sur JOUER si le curseur y est*/

                            if(u<rchecked)
                            {if((xm>=position[1].x&&xm<=position[1].x+texte[1]->w)&&(ym>=position[1].y&&ym<=position[1].y+texte[1]->h))
                                texte[1]=TTF_RenderText_Blended(police[1],"JOUER",blue);
                            else
                                texte[1]=TTF_RenderText_Blended(police[1],"JOUER",white);
                            }

                            if(u==rchecked)
                            {if((xm>position[20].x&&xm<position[20].x+texte[20]->w)&&(ym>position[20].y&&ym<position[20].y+texte[20]->h))///commencer
                                    texte[19]=TTF_RenderText_Blended(police[4],"Commencer",blue);

                            else
                                    texte[19]=TTF_RenderText_Blended(police[4],"Commencer",white);
                            }






                                        break;





                                        default:
                                            break;

                                    }






            }

        }


                                i_anim=0;
                                t_f=0;
                                t_i=0;
                                clean(jcomp,4);


