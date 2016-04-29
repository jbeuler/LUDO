
                    if(x>position[8].x-50-50-25&&x<position[8].x-50-50+25&&y>200-25&&y<200+25)
                                                rchecked=2;
                    if((x>position[8].x+150-25&&x<position[8].x+150+25&&y>200-25&&y<200+25))
                                                rchecked=3;
                    if(((x>position[8].x+350+50-25&&x<position[8].x+350+50+25&&y>200-25&&y<200+25)))
                                                rchecked=4;

                                if(rchecked!=0)///on commence la partie si la personne choisit le nombre de joueurs
                                        {
                                            if((x>position[19].x&&x<position[19].x+texte[19]->w)&&(y>position[19].y&&y<position[19].y+texte[19]->h))///commencer
                                               {

                                                        if(strcmp(joueur2,"Ordinateur1")==0 || strcmp(joueur3,"Ordinateur2")==0 || strcmp(joueur4,"Ordinateur3")==0)
                                                            machine=1;
                                                        else
                                                            machine=0;


                                                        if(machine==1)
                                                        {
                                                            if(strcmp(joueur2,"Ordinateur1")==0)
                                                                jcomp[1]=1;
                                                            else if(strcmp(joueur2,"Ordinateur1")!=0)
                                                                jcomp[1]=0;

                                                            if(strcmp(joueur3,"Ordinateur2")==0)
                                                                jcomp[2]=1;
                                                            else if(strcmp(joueur3,"Ordinateur2")!=0)
                                                                jcomp[2]=0;

                                                            if(strcmp(joueur4,"Ordinateur3")==0)
                                                                jcomp[3]=1;
                                                            else if(strcmp(joueur4,"Ordinateur3")!=0)
                                                                jcomp[3]=0;


                                                        }

                                                        printf("machine=%d, jcomp[1]=%d, jcomp[2]=%d, jcomp[3=%d\n",machine,jcomp[1],jcomp[2],jcomp[3]);


                                                        #include "BLIT.h"
                                                        #include "mov.h"
                                                        c=0;
                                               }
                                        }



                                if(rchecked==2)///ecrire le nom ou choisir l'ordi
                                        {
                                            if((x>position[21].x&&x<position[21].x+texte[21]->w)&&(y>position[21].y&&y<position[21].y+texte[21]->h))
                                                {
                                                    computer=0;

                                                   #include "ecrire_nom.h"

                                                 strcpy(joueur1,papier);


                                                }

                                            else if((x>position[22].x&&x<position[22].x+texte[22]->w)&&(y>position[22].y&&y<position[22].y+texte[22]->h))
                                            {
                                                check=1;

                                                computer=1;
                                                #include "ecrire_nom.h"
                                                strcpy(joueur2,papier);

                                            }
                                        }
                                else if(rchecked==3)
                                    {
                                            if((x>position[21].x&&x<position[21].x+texte[21]->w)&&(y>position[21].y&&y<position[21].y+texte[21]->h))
                                                {
                                                    computer=0;
                                                   #include "ecrire_nom.h"

                                                    strcpy(joueur1,papier);


                                                    }

                                            else if((x>position[22].x&&x<position[22].x+texte[22]->w)&&(y>position[22].y&&y<position[22].y+texte[22]->h))
                                            {
                                             check=1;
                                                computer=1;
                                                #include "ecrire_nom.h"

                                                  strcpy(joueur2,papier);


                                            }

                                            else if((x>position[23].x&&x<position[23].x+texte[23]->w)&&(y>position[23].y&&y<position[23].y+texte[23]->h))
                                            {
                                                check=2;

                                                computer=1;
                                                #include "ecrire_nom.h"

                                                   strcpy(joueur3,papier);


                                            }
                                        }

                                else if(rchecked==4)
                                     {
                                            if((x>position[21].x&&x<position[21].x+texte[21]->w)&&(y>position[21].y&&y<position[21].y+texte[21]->h))
                                                {
                                                    computer=0;
                                                   #include "ecrire_nom.h"

                                                    strcpy(joueur1,papier);


                                                    }

                                            else if((x>position[22].x&&x<position[22].x+texte[22]->w)&&(y>position[22].y&&y<position[22].y+texte[22]->h))
                                            {
                                                check=1;
                                                computer=1;
                                                #include "ecrire_nom.h"

                                                   strcpy(joueur2,papier);


                                            }

                                            else if((x>position[23].x&&x<position[23].x+texte[23]->w)&&(y>position[23].y&&y<position[23].y+texte[23]->h))
                                            {
                                                check=2;

                                                computer=1;
                                                #include "ecrire_nom.h"
                                                   strcpy(joueur3,papier);


                                            }

                                            else if((x>position[24].x&&x<position[24].x+texte[24]->w)&&(y>position[24].y&&y<position[24].y+texte[24]->h))
                                            {
                                                check=3;
                                                computer=1;
                                                #include "ecrire_nom.h"

                                                strcpy(joueur4,papier);


                                            }


                                        }

