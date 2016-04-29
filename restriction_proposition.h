
                                        if((distans[b]==0 &&anim1==6)||(distans[b]==0&&anim2==6))
                                        {
                                            SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+1]);

                                                if(anim1==6 && anim2!=0)
                                                    {
                                                    if(pres_barrage==1)
                                                        {if(distans[4*socle + i]+1+total[1]<ind_barrage)
                                                            SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+1+anim2]);}
                                                    else
                                                    SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+1+anim2]);

                                                    }

                                                else if(anim2==6 && anim1!=0)

                                                    {
                                                        if(pres_barrage==1)
                                                            {if(distans[4*socle + i]+1+total[0]<ind_barrage)
                                                                SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+1+anim1]);}
                                                        else
                                                            SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+1+anim1]);
                                                    }
                                        }

                                        else if(distans[b]!=0)

                                        {

                                        B=0; A=0; C=0; t_a=0; deyo=0;

                                        for(t=0;t<4;t++)
                                            {

                                                if(b>=t*4&&b<4*t+4)/**Recherche de compatibilite entre les intervalles pour connaitre la possibilite de jeu des autres joueurs*/
                                                    {   t_a=t;
                                                        for(a_b=t_a*4;a_b<(4*t_a)+4;a_b++)
                                                            {
                                                                if((distans[a_b]==0&&total[1]==6)||(distans[a_b]==0&&total[0]==6))
                                                                    deyo=1;

                                                            if(a_b!=b && no_game[a_b]==0&& distans[a_b]!=0)/**Si un autre pion dans la course est en mesure de jouer*/
                                                            {
                                                                    B=b;
                                                                    b=a_b;
                                                                     #include "pres_barrage.h"



                                                                if(distans[b]<14)
                                                                    {if(pres_barrage==0)
                                                                    {ind_barrage=15;}}

                                                                else if(distans[b]<27)
                                                                    {if(pres_barrage==0)
                                                                    {ind_barrage=28;}}

                                                                else if(distans[b]<40)
                                                                    {if(pres_barrage==0)
                                                                    {ind_barrage=41;}}

                                                                else if(distans[b]<58)
                                                                    {if(pres_barrage==0)
                                                                    {ind_barrage=59;}}


                                                                if(total[1]+distans[b]<ind_barrage)/**Plus grande valeur*/
                                                                    A=1;
                                                                if(total[0]+distans[b]<ind_barrage)/**Plus petite valeur*/
                                                                    C=1;


                                                                    b=B;
                                                            }

                                                            }

                                                    }
                                            }

                                          //  printf("A=%d et C=%d\n",A,C);

                                        B=A+C;

                                        #include "pres_barrage.h"
                                      //  printf("pres_barrage=%d\n",pres_barrage);

                                        if(distans[b]<14)
                                            {if(pres_barrage==0)
                                                {ind_barrage=15;}}

                                        else if(distans[b]<27)
                                            {if(pres_barrage==0)
                                                {ind_barrage=28;}}

                                        else if(distans[b]<40)
                                            {if(pres_barrage==0)
                                                {ind_barrage=41;}}

                                        else if(distans[b]<58)
                                            {if(pres_barrage==0)
                                                {ind_barrage=59;}}

                                              //  printf("ind_barrage= %d\n",ind_barrage);
                                               // printf("b=%d\n",b);






                            /**IMPORTANT*/

                                            if(total[1]+distans[b]<ind_barrage && total[0]+distans[b]<ind_barrage)
                                                {
                                                    if(total[2]+distans[b]<ind_barrage)
                                                    {
                                                        SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[2]]);

                                                        if(B==0&&deyo==1)
                                                        SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[0]]);
                                                        else if(B==1)
                                                        SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[1]]);
                                                        else if(B==2)
                                                          {SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[1]]);
                                                           SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[0]]);}


                                                    }
                                                    else/**Si li paka jwe somme nan*/
                                                    {
                                                        if(B==0&&deyo==1)
                                                        SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[0]]);
                                                        else if(B==2)/**La plus grande valeur est jouable par une autre piece*/
                                                           {SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[0]]);
                                                           SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[1]]);}
                                                        else/**Si pi gran pas jouable okunn lot kote*/
                                                         SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[1]]);


                                                    }

                                                }

                                            else if(total[1]+distans[b]<ind_barrage ||total[0]+distans[b]<ind_barrage)
                                            {
                                                if(total[1]+distans[b]<ind_barrage)
                                                    SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[1]]);

                                                if(total[0]+distans[b]<ind_barrage)
                                                    SDL_BlitSurface(case_point,NULL,ecran,&parcours[b][distans[b]+total[0]]);

                                            }

                                        }
