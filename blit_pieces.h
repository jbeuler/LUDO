                        for(i=0;i<nbre_pieces;i++)
                        {
                            temoin_x[i]=temoin[i];
                        }

                            temoin_y[0]=max_tableau(temoin_x,16);





                            /**on prend la plus grande etage sur le tableau*/
                           for(i=0;i<=temoin_y[0];i++)/**Blitage par etage_ les temoins 0, puis les temoins 1, 2, 3..*/
                            {
                                for(j=0;j<nbre_pieces;j++)
                                {
                                    if(temoin[j]==i)
                                    {
                                        ///conditions pour lentassement


                                        if((k[j]<6&&l[j]==6)||(k[j]>8&&l[j]==6))
                                            {xypiece[k[j]][l[j]].x=xyPetitCarre[k[j]][l[j]].x-temoin[j]*(dimCarre/4);}
                                        else if((k[j]>8&&l[j]==8)||(k[j]<6&&l[j]==8))
                                            {xypiece[k[j]][l[j]].x=xyPetitCarre[k[j]][l[j]].x+temoin[j]*(dimCarre/4);}
                                        else if((k[j]==8&&l[j]>8)||(k[j]==8&&l[j]<6))
                                            {xypiece[k[j]][l[j]].y=xyPetitCarre[k[j]][l[j]].y+temoin[j]*(dimCarre/4);}
                                        else if((k[j]==6&&l[j]<6)||(k[j]==6&&l[j]>8))
                                            {xypiece[k[j]][l[j]].y=xyPetitCarre[k[j]][l[j]].y-temoin[j]*(dimCarre/4);}
                                        else if(k[j]==7&&l[j]>=8)
                                            {xypiece[k[j]][l[j]].x=xyPetitCarre[k[j]][l[j]].x-temoin[j]*(dimCarre/4);}
                                        else if(k[j]==7&&l[j]<=6)
                                            {xypiece[k[j]][l[j]].x=xyPetitCarre[k[j]][l[j]].x+temoin[j]*(dimCarre/4);}
                                        else if(k[j]<=6&&l[j]==7)
                                            {xypiece[k[j]][l[j]].y=xyPetitCarre[k[j]][l[j]].y+temoin[j]*(dimCarre/4);}
                                        else if(k[j]>=8&&l[j]==7)
                                            {xypiece[k[j]][l[j]].y=xyPetitCarre[k[j]][l[j]].y-temoin[j]*(dimCarre/4);}

                                       /// SDL_BlitSurface(piece[j],NULL,ecran,&xypiece[k[j]][l[j]]);


                                        parcours[j][distans[j]].x=xypiece[k[j]][l[j]].x;
                                        parcours[j][distans[j]].y=xypiece[k[j]][l[j]].y;



                                      SDL_BlitSurface(piece[j],NULL,ecran,&xypiece[k[j]][l[j]]);

                                        //SDL_BlitSurface(piece[j],NULL,ecran,&parcours[j][distans[j]]);







                                    }
                                }
                            }





