                if((xm>=l_ecran/2-TAILLE_LUDO/2 -80&&xm<=(l_ecran/2-TAILLE_LUDO/2)+220)&&(ym>=170&&ym<=200))
                                texte[3]=TTF_RenderText_Blended(police[3],"Nouvelle Partie",black);
                                else
                                texte[3]=TTF_RenderText_Blended(police[2],"Nouvelle Partie",black);

                if(tem_save==1)
                {if((xm>=l_ecran/2-TAILLE_LUDO/2 -80&&xm<=(l_ecran/2-TAILLE_LUDO/2)+220)&&(ym>=170+ESPACE_MOTS&&ym<=200+ESPACE_MOTS))
                                texte[4]=TTF_RenderText_Blended(police[3],"Charger Partie",black);
                                else
                                texte[4]=TTF_RenderText_Blended(police[2],"Charger Partie",black);}
                else if(tem_save==0)
                {if((xm>=l_ecran/2-TAILLE_LUDO/2 -80&&xm<=(l_ecran/2-TAILLE_LUDO/2)+220)&&(ym>=170+ESPACE_MOTS&&ym<=200+ESPACE_MOTS))
                                texte[4]=TTF_RenderText_Blended(police[3],"Reprendre Partie",black);
                                else
                                texte[4]=TTF_RenderText_Blended(police[2],"Reprendre Partie",black);}


                if((xm>=l_ecran/2-TAILLE_LUDO/2 -80&&xm<=(l_ecran/2-TAILLE_LUDO/2)+220)&&(ym>=170+2*ESPACE_MOTS&&ym<=200+2*ESPACE_MOTS))
                                texte[5]=TTF_RenderText_Blended(police[3],"Instructions",black);
                                else
                                texte[5]=TTF_RenderText_Blended(police[2],"Instructions",black);

                if((xm>=l_ecran/2-TAILLE_LUDO/2 -80&&xm<=(l_ecran/2-TAILLE_LUDO/2)+220)&&(ym>=170+3*ESPACE_MOTS&&ym<=200+3*ESPACE_MOTS))
                                texte[6]=TTF_RenderText_Blended(police[3],"Options",black);
                                else
                                texte[6]=TTF_RenderText_Blended(police[2],"Options",black);

                if((xm>=l_ecran/2-TAILLE_LUDO/2 -80&&xm<=(l_ecran/2-TAILLE_LUDO/2)+220)&&(ym>=170+4*ESPACE_MOTS&&ym<=200+4*ESPACE_MOTS))
                                texte[7]=TTF_RenderText_Blended(police[3],"Quitter",black);
                                else
                                texte[7]=TTF_RenderText_Blended(police[2],"Quitter",black);

