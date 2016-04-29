 /**VERIFICATION DE PRESENCE DE BARRAGE*/

            pres_barrage=0;

            if(distans[b]==0)
                {
                    c_barr=1;
                    a=2;
                    while(c_barr)
                    {


            for(i=0;i<15;i++)
                for(j=0;j<15;j++)
                {
                    if(barrage[i][j].x==parcours[b][a].x&& barrage[i][j].y==parcours[b][a].y)
                    {pres_barrage=1;
                    ind_barrage=a;

                    }
                }

            a++;

            if(a==7||pres_barrage==1)
                c_barr=0;
                    }
                }

            else if(distans[b]!=0)
            {
            if(distans[b]<13)
            {c_barr=1;
            a=distans[b]+1;
        while(c_barr)
        {


            for(i=0;i<15;i++)
                for(j=0;j<15;j++)
                {
                    if(barrage[i][j].x==parcours[b][a].x&& barrage[i][j].y==parcours[b][a].y)
                    {pres_barrage=1;
                    ind_barrage=a;

                    }
                }

            a++;

            if(a==14||pres_barrage==1)
                c_barr=0;
        }
            }

            else if(distans[b]>13&&distans[b]<26)
            {c_barr=1;
            a=distans[b]+1;
        while(c_barr)
        {


            for(i=0;i<15;i++)
                for(j=0;j<15;j++)
                {
                    if(barrage[i][j].x==parcours[b][a].x&& barrage[i][j].y==parcours[b][a].y)
                    {pres_barrage=1;
                    ind_barrage=a;

                    }
                }

            a++;

            if(a==27||pres_barrage==1)
                c_barr=0;
        }
    }

            else if(distans[b]>26&&distans[b]<39)
            {c_barr=1;
            a=distans[b]+1;
        while(c_barr)
        {


            for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {
                    if(barrage[i][j].x==parcours[b][a].x&& barrage[i][j].y==parcours[b][a].y)
                    {pres_barrage=1;
                    ind_barrage=a;

                    }
                }}

            a++;

            if(a==40||pres_barrage==1)
                c_barr=0;
        }
    }
            else if(distans[b]>39&&distans[b]<57)
            {c_barr=1;
            a=distans[b]+1;
        while(c_barr)
        {


            for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {
                    if(barrage[i][j].x==parcours[b][a].x&& barrage[i][j].y==parcours[b][a].y)
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


         /**Y A PAS BARRAGE EN FAMILLE_GESTION REUSSIE**/

         if(pres_barrage==1)
         {
            for(i=0;i<16;i++)
            {
            if(i!=b)
             {

            if(xyPetitCarre[k[i]][l[i]].x==parcours[b][ind_barrage].x&& xyPetitCarre[k[i]][l[i]].y==parcours[b][ind_barrage].y)
             {
                 a=i;
                 ///printf("CHECK! %d",a);
             }
             }

            }


         for(t=0;t<4;t++)/**Recherche de compatibilite entre les intervalles*/
            if(a>=t*4&&a<4*t+4)
                {if(b>=t*4&&b<t*4+4)
                    pres_barrage=0;
                }

         }



      ///  printf("\npres_barrage=%d\n\n",pres_barrage);
