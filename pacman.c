# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int x=12, y=12;
int grid[22][23] = {
	
	{201,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,187},
	{186,000,000,000,000,000,000,000,000,000,000,186,000,000,000,000,000,000,000,000,000,000,186},
	{186,000,201,205,187,000,201,205,205,187,000,186,000,201,205,205,187,000,201,205,187,000,186},
	{186,000,200,205,188,000,200,205,205,188,000,186,000,200,205,205,188,000,200,205,188,000,186},
	{186,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,186},
	{186,000,205,205,205,000,186,000,205,205,205,203,205,205,205,000,186,000,205,205,205,000,186},
	{186,000,000,000,000,000,186,000,000,000,000,186,000,000,000,000,186,000,000,000,000,000,186},
	{200,205,205,205,187,000,204,205,205,205,000,186,000,205,205,205,185,000,201,205,205,205,188},
	{000,000,000,000,186,000,186,000,000,000,000,000,000,000,000,000,186,000,186,000,000,000,000},
	{205,205,205,205,188,000,186,000,201,205,205,205,205,205,187,000,186,000,200,205,205,205,205},
	{000,000,000,000,000,000,000,000,186,000,000,000,000,000,186,000,000,000,000,000,000,000,000},
	{205,205,205,205,187,000,186,000,200,205,205,205,205,205,188,000,186,000,201,205,205,205,205},
	{000,000,000,000,186,000,186,000,000,000,000,000,000,000,000,000,186,000,186,000,000,000,000},
	{201,205,205,205,188,000,186,000,205,205,205,203,205,205,205,000,186,000,200,205,205,205,187},
	{186,000,000,000,000,000,000,000,000,000,000,186,000,000,000,000,000,000,000,000,000,000,186},
	{186,000,205,205,187,000,205,205,205,205,000,186,000,205,205,205,205,000,201,205,205,000,186},
	{186,000,000,000,186,000,000,000,000,000,000,000,000,000,000,000,000,000,186,000,000,000,186},
	{204,205,205,000,186,000,186,000,205,205,205,203,205,205,205,000,186,000,186,000,205,205,185},
	{186,000,000,000,000,000,186,000,000,000,000,186,000,000,000,000,186,000,000,000,000,000,186},
	{186,000,205,205,205,205,202,205,205,205,000,186,000,205,205,205,202,205,205,205,205,000,186},
	{186,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,000,186},
	{200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188}
};

void dumpChr(int chr)
{
	printf("%c", chr);
}

void drawPlayer(int x, int y)
{
	int i,k;

	for(i=0;i<22;i++)
	{
		for(k=0;k<23;k++)
		{
			if(y == i && x == k) {
			    dumpChr(2);
			} else {
			    dumpChr(grid[i][k]);
			}
		}
		printf("\n");
	}
}

void movePlayer(int x2, int y2)
{
	x += x2;
	y += y2;

	system("cls");
	drawPlayer(x,y);
}

main()
{
	int key;

	while(1)
	{
		system("cls");
		drawPlayer(x,y);
		key = getch();

        switch(key)
        {
            case 113:
            case  81: //quit on "q"
                exit(0);
                break;
            case 119:
                movePlayer(0,-1);
                break;
            case 115:
                movePlayer(0,1);
                break;
            case  97:
                movePlayer(-1,0);
                break;
            case 100:
                movePlayer(1,0);
                break;
        }
	}
}
