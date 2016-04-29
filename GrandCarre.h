for(j=0; j<2; j++)
{

for(i=0; i<2; i++)
    {
    xyGrandCarre[i][j].x=(l_ecran-688)/2 +(139+273)*j+ 4*j;
    xyGrandCarre[i][j].y=(L_ecran-688)/2 +416*i;

    GrandCarre[i][j]= SDL_CreateRGBSurface(SDL_HWSURFACE,273,273,32,0,0,0,0);

    SDL_FillRect(GrandCarre[i][j],NULL,SDL_MapRGB(ecran->format,1,61,63));
    SDL_BlitSurface(GrandCarre[i][j],NULL,ecran,&xyGrandCarre[i][j]);

    }
}
