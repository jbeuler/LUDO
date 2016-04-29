for(i=0;i<16;i++)
    {for(j=0;j<59;j++)
{
    parcours[i][j].x=0;
    parcours[i][j].y=0;
}
    }


for(i=4;i<8;i++)///Premier bloc en bas
{   for(j=1;j<59;j++)
    {

    if(j<7)
        {parcours[i][j].x=xypiece[15-j][8].x;
        parcours[i][j].y=xypiece[15-j][8].y;
              //  printf("x=%d y=%d\n",parcours[i][j].x,parcours[i][j].y);

        }
    else if(j<12)
    {
        parcours[i][j].x=xypiece[8][j+2].x;
        parcours[i][j].y=xypiece[8][j+2].y;
              //  printf("x=%d y=%d\n",parcours[i][j].x,parcours[i][j].y);

    }
    else if(j<15)
    {
        parcours[i][j].x=xypiece[20-j][14].x;
        parcours[i][j].y=xypiece[20-j][14].y;
          //  printf("x=%d y=%d\n",parcours[i][j].x,parcours[i][j].y);


    }
    else if(j<20)
    {
        parcours[i][j].x=xypiece[6][28-j].x;
        parcours[i][j].y=xypiece[6][28-j].y;
       // printf("x=%d y=%d\n",parcours[i][j].x,parcours[i][j].y);


    }
    else if(j<25)
    {
        parcours[i][j].x=xypiece[25-j][8].x;
        parcours[i][j].y=xypiece[25-j][8].y;
       // printf("x=%d y=%d\n",parcours[i][j].x,parcours[i][j].y);


    }

    else if(j<27)
    {
        parcours[i][j].x=xypiece[0][33-j].x;
        parcours[i][j].y=xypiece[0][33-j].y;
        printf("x=%d y=%d\n",parcours[i][j].x,parcours[i][j].y);


    }

    else if(j<33)
    {
        parcours[i][j].x=xypiece[j-27][6].x;
        parcours[i][j].y=xypiece[j-27][6].y;
        printf("x=%d y=%d\n",parcours[i][j].x,parcours[i][j].y);


    }
    else if(j<39)

    {
        parcours[i][j].x=xypiece[6][38-j].x;
        parcours[i][j].y=xypiece[6][38-j].y;
        printf("x=%d y=%d\n",parcours[i][j].x,parcours[i][j].y);


    }

    else if(j<41)

    {
        parcours[i][j].x=xypiece[j-32][0].x;
        parcours[i][j].y=xypiece[j-32][0].y;


    }
    else if(j<46)

    {
        parcours[i][j].x=xypiece[8][j-40].x;
        parcours[i][j].y=xypiece[8][j-40].y;


    }
    else if(j<52)

    {
        parcours[i][j].x=xypiece[j-37][6].x;
        parcours[i][j].y=xypiece[j-37][6].y;

    }

    else if(j<59)

    {
        parcours[i][j].x=xypiece[66-j][7].x;
        parcours[i][j].y=xypiece[66-j][7].y;


    }


    }
}

for(i=0;i<16;i++)
{
    parcours[i][0].x=xypiece[i_k[i]][i_l[i]].x;
    parcours[i][0].y=xypiece[i_k[i]][i_l[i]].y;
}

for(i=12;i<16;i++)///quatrieme bloc qui vaut le deuxieme
{
    for(j=1;j<40;j++)
    {parcours[i][j].x=parcours[4][j+13].x;
    parcours[i][j].y=parcours[4][j+13].y;}

    for(j=1;j<14;j++)
    {parcours[i][j+39].x=parcours[4][j].x;
    parcours[i][j+39].y=parcours[4][j].y;}

    for(j=1;j<7;j++)
    {parcours[i][j+52].x=xypiece[7][14-j].x;
    parcours[i][j+52].y=xypiece[7][14-j].y;
    }

}


for(i=0;i<4;i++)///Deuxieme bloc
{
    for(j=1;j<40;j++)
    {parcours[i][j].x=parcours[12][j+13].x;
    parcours[i][j].y=parcours[12][j+13].y;}

    for(j=1;j<14;j++)
    {parcours[i][j+39].x=parcours[12][j].x;
    parcours[i][j+39].y=parcours[12][j].y;}

    for(j=1;j<7;j++)
    {parcours[i][j+52].x=xypiece[j][7].x;
    parcours[i][j+52].y=xypiece[j][7].y;
    }

}

for(i=8;i<12;i++)///troisieme bloc
{
    for(j=1;j<40;j++)
    {parcours[i][j].x=parcours[0][j+13].x;
    parcours[i][j].y=parcours[0][j+13].y;}

    for(j=1;j<14;j++)
    {parcours[i][j+39].x=parcours[0][j].x;
    parcours[i][j+39].y=parcours[0][j].y;}

    for(j=1;j<7;j++)
    {parcours[i][j+52].x=xypiece[7][j].x;
    parcours[i][j+52].y=xypiece[7][j].y;
    }

}


for(i=0;i<16;i++)
    {for(j=0;j<59;j++)
{
    parcours_reset[i][j].x=parcours[i][j].x;
    parcours_reset[i][j].y=parcours[i][j].y;
}
    }



