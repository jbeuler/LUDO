
                                       for(i=0;i<4;i++)/**au debut, nap supoze ke okunn moun pa gen jwet*/
                                        no_game[4*socle+i]=1;


                                        i_2=1;
                                        i_barr=0;


                                        while(i_2)/**Gestion de no_game*/
                                        {

            /**VERIFICATION DE PRESENCE DE BARRAGE POUR CHAQUE PIECE*/

            pres_barrage=0;

        if(distans[4*socle + i_barr]==0)
                {
                c_barr=1;
                a=2;
        while(c_barr)
        {


            for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {
                    if(barrage[i][j].x==parcours[4*socle + i_barr][a].x&& barrage[i][j].y==parcours[4*socle + i_barr][a].y)
                    {pres_barrage=1;
                    ind_barrage=a;

                    }
                }
                }

            a++;

            if(a==7||pres_barrage==1)
                c_barr=0;
        }

                }

           else if(distans[4*socle + i_barr]!=0)
            {
            if(distans[4*socle + i_barr]<13)
            {c_barr=1;
            a=distans[4*socle + i_barr]+1;
        while(c_barr)
        {


            for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {
                    if(barrage[i][j].x==parcours[4*socle + i_barr][a].x&& barrage[i][j].y==parcours[4*socle + i_barr][a].y)
                    {pres_barrage=1;
                    ind_barrage=a;

                    }
                }}

            a++;

            if(a==14||pres_barrage==1)
                c_barr=0;
        }
    }

            else if(distans[4*socle + i_barr]>13&&distans[4*socle + i_barr]<26)
            {c_barr=1;
            a=distans[4*socle + i_barr]+1;
        while(c_barr)
        {


            for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {
                    if(barrage[i][j].x==parcours[4*socle + i_barr][a].x&& barrage[i][j].y==parcours[4*socle + i_barr][a].y)
                    {pres_barrage=1;
                    ind_barrage=a;

                    }
                }}

            a++;

            if(a==27||pres_barrage==1)
                c_barr=0;
        }
    }

            else if(distans[4*socle + i_barr]>26&&distans[4*socle + i_barr]<39)
            {c_barr=1;
            a=distans[4*socle + i_barr]+1;
        while(c_barr)
        {


            for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {
                    if(barrage[i][j].x==parcours[4*socle + i_barr][a].x&& barrage[i][j].y==parcours[4*socle + i_barr][a].y)
                    {pres_barrage=1;
                    ind_barrage=a;

                    }
                }}

            a++;

            if(a==40||pres_barrage==1)
                c_barr=0;
        }
    }
            else if(distans[4*socle + i_barr]>39&&distans[4*socle + i_barr]<57)
            {c_barr=1;
            a=distans[4*socle + i_barr]+1;
        while(c_barr)
        {


            for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {
                    if(barrage[i][j].x==parcours[4*socle + i_barr][a].x&& barrage[i][j].y==parcours[4*socle + i_barr][a].y)
                    {pres_barrage=1;
                    ind_barrage=a;

                    }
                }}

            a++;

            if(a==58||pres_barrage==1)
                c_barr=0;
        }
    }

            }




                                        if((distans[4*socle + i_barr]==0 &&anim1==6)||(distans[4*socle + i_barr]==0&&anim2==6))
                                            {
                                            no_game[4*socle + i_barr]=0;

                                            }


                                        else if(distans[4*socle + i_barr]!=0)

                                        {

                                             if(distans[4*socle + i_barr]<14)
                                            {
                                                 if(pres_barrage==0)
                                                    {ind_barrage=15;}

                                            if(total[2]+distans[4*socle + i_barr]<ind_barrage)
                                               no_game[4*socle + i_barr]=0;

                                            if(total[1]!=0)
                                                if(total[1]+distans[4*socle + i_barr]<ind_barrage)
                                                    no_game[4*socle + i_barr]=0;

                                            if(total[0]!=0)
                                                if(total[0]+distans[4*socle + i_barr]<ind_barrage)
                                                    no_game[4*socle + i_barr]=0;

                                            }


                                        else if(distans[4*socle + i_barr]<27)
                                        {
                                                if(pres_barrage==0)
                                                    {ind_barrage=28;}

                                            if(total[2]+distans[4*socle + i_barr]<ind_barrage)
                                                no_game[4*socle + i_barr]=0;

                                            if(total[1]!=0)
                                                if(total[1]+distans[4*socle + i_barr]<ind_barrage)
                                                    no_game[4*socle + i_barr]=0;

                                            if(total[0]!=0)
                                                if(total[0]+distans[4*socle + i_barr]<ind_barrage)
                                                    no_game[4*socle + i_barr]=0;
                                        }
                                        else if(distans[4*socle + i_barr]<40)
                                        {
                                            if(pres_barrage==0)
                                                    {ind_barrage=41;}

                                            if(total[2]+distans[4*socle + i_barr]<ind_barrage)
                                                no_game[4*socle + i_barr]=0;

                                            if(total[1]!=0)
                                                if(total[1]+distans[4*socle + i_barr]<ind_barrage)
                                                    no_game[4*socle + i_barr]=0;

                                            if(total[0]!=0)
                                                if(total[0]+distans[4*socle + i_barr]<ind_barrage)
                                                    no_game[4*socle + i_barr]=0;

                                        }

                                        else if(distans[4*socle + i_barr]<58)
                                        {
                                            if(pres_barrage==0)
                                                    {ind_barrage=59;}

                                            if(total[2]+distans[4*socle + i_barr]<ind_barrage)
                                                no_game[4*socle + i_barr]=0;

                                            if(total[1]!=0)
                                                if(total[1]+distans[4*socle + i_barr]<ind_barrage)
                                                    no_game[4*socle + i_barr]=0;

                                            if(total[0]!=0)
                                                if(total[0]+distans[4*socle + i_barr]<ind_barrage)
                                                    no_game[4*socle + i_barr]=0;

                                        }


                                        }



                                        i_barr++;

                                        if(i_barr==4)///On ferme la boucle si on a parcouru toutes les pieces
                                            i_2=0;

                                        }

                                        /**Gestion de no_game dans les piles*/

                                        clean(p,15);

                                        for(i=0;i<4;i++)
                                        {
                                        p[1]=4*socle+i;
                                        p[0]=temoin[p[1]];
                                        g=0;

                                        for(j=0;j<16;j++)
                                        {
                                            if(j<4*socle||j>4*socle+3)/**COMMENTED CUZ depuis mwen pa anwo, mwen pa gen jwet*/
                                                if(k[j]==k[p[1]]&&l[j]==l[p[1]])
                                                    if(p[0]<temoin[j])
                                                        no_game[p[1]]=1;

                                            else if(j>=4*socle&&j<=4*socle+3)
                                                if(k[j]==k[p[1]]&&l[j]==l[p[1]])
                                                    if(p[0]<temoin[j])
                                                        g++;


                                        }

                                        if(g==2)
                                            no_game[p[1]]=1;

                                        }


                                        for(i=0;i<4;i++)
                                        {
                                            p[2]=4*socle+i;
                                            if(stop[p[2]]==1)
                                                {
                                                no_game[p[2]]=1;
                                                printf("no_game[%d]=%d\n",p[2],no_game[p[2]]);
                                                }
                                        }


                                        no_game_final=1;

                                        for(i=0;i<4;i++)
                                        {
                                            if(no_game[4*socle+i]==0)
                                                no_game_final=0;
                                        }





