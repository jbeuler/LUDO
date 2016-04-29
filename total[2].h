 if((x>=parcours[b][distans[b]+total[2]].x)&&(x<=parcours[b][distans[b]+total[2]].x+dimCarre)&&(y>=parcours[b][distans[b]+total[2]].y)&&(y<=parcours[b][distans[b]+total[2]].y+dimCarre))
                                                    {
                                                        pres_barrage=0; stop[b]=1;
                                                        if(tem_barrage==1)
                                                        {
                                                            tem_barrage=0;
                                                            barrage[k[b]][l[b]].x=0;
                                                            barrage[k[b]][l[b]].y=0;
                                                        }
                                                    printf("%d  %d\n\n",parcours[b][distans[b]+total[2]].x,parcours[b][distans[b]+total[2]].y);



                                               for(i=0;i<15;i++)
                                                {
                                                    for(j=0;j<15;j++)
                                                    {
                                                    if((x>=xypiece[i][j].x)&&(x<=xypiece[i][j].x+dimCarre)&&(y>=xypiece[i][j].y)&&(y<=xypiece[i][j].y+dimCarre))
                                                    {

                    /**A remplace par une fonction*/s=16;/**l'indice de la piece qui se trouve à lemplacement en question*/
                                                    for(a=0;a<16;a++)
                                                    {   if(a!=b)/**sauf la piece selectionnee parce quelle pt reprendre sa place*/
                                                        {
                                                            if(k[a]==i&&l[a]==j)
                                                            {
                                                            p[g]=temoin[a];/**les temoins sont les rangs des pieces dans case*/
                                                            g++;/**le nombre de pieces presentes dans la case*/

                                                            }
                                                        }
                                                    }



                                                    if(g!=0)
                                                    {
                                                      for(a=0;a<16;a++)
                                                        {   if(a!=b)/**sauf la piece selectionnee*/
                                                            {
                                                                if(k[a]==i&&l[a]==j&&temoin[a]==max_tableau(p,g))
                                                                {
                                                                s=a;
                                                                }
                                                            }
                                                        }
                                                    }

                                    if(s!=16)/**Si il y a une piece a lemplacement en question*/
                                    {
                                        for(t=0;t<4;t++)/**Recherche de compatibilite entre les intervalles*/
                                            {   if(s>=t*4&&s<4*t+4)
                                                    {
                                                        if(b<t*4||b>=t*4+4)/**si elles ne sont pas de meme groupe*/
                                                        {
                                                            if((i!=0||j!=6)&&(i!=6||j!=14)&&(i!=14||j!=8)&&(i!=8||j!=0))/**si je ne suis pas dans un point de depart*/
                                                            {
                                                            temoin[b]=0;/**les temoins pour lentassement sanullent*/
                                                            temoin[s]=0;  FMOD_System_PlaySound(system,FMOD_CHANNEL_FREE,eat,0,NULL); mang=1;
                                                            /*k[s]=i_k[s];  la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                            /*l[s]=i_l[s]; distans[s]=0;*/
                                                            for(a=0;a<16;a++)
                                                            {
                                                                if(k[a]==i&&l[a]==j)
                                                                {


                                                                k[a]=i_k[a];  /**la piece reprend son emplacement initial si elle nest pas dans un point de depart*/
                                                                l[a]=i_l[a]; distans[a]=0;

                                                                    for(jr=0;jr<59;jr++)
{
    parcours[a][jr].x=parcours_reset[a][jr].x;
    parcours[a][jr].y=parcours_reset[a][jr].y;
}
                                                                }

                                                            }
                                                            }
                                                            else/**si alors elle est dans un point de depart, le temoin de ma piece sera incrementee*/
                                                            {temoin[b]=temoin[s]+1;}/**FONDAMENTAL_Changement d'etage*/
                                                        }
                                                        else
                                                        {   temoin[b]=temoin[s]+1; stop[b]=0;

                                                            if((i!=0||j!=6)&&(i!=6||j!=14)&&(i!=14||j!=8)&&(i!=8||j!=0)&&(i!=6||j!=7)&&(i!=7||j!=6)&&(i!=7||j!=8)&&(i!=8||j!=7))
                                                            {

                                                                barrage[i][j].x=xypiece[i][j].x;
                                                                barrage[i][j].y=xypiece[i][j].y;


                                                            }

                                                        }
                                                    }



                                            }
                                    }

                                    else
                                    {temoin[b]=0;}




                                                k[b]=i;
                                                l[b]=j;
                                                }
                                                }
                                                }

                                                distans[b]=distans[b]+total[2];
                                                anim1=0; anim2=0;
                                                }


