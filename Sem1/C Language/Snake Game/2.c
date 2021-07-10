#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal=mseconds+clock();
    while(goal>clock());
}

int width=30,height=30,score=0,gameOver,flag;
int x,y,fruitx,fruity;
void setup()
{
   gameOver=0;
   score=0;
   x=width/2;
   y=height/2;
   label1:
   fruitx=rand()%30;
   if(fruitx==0)
   {
       goto label1;
   }
   label2:
   fruity=rand()%30;
   if(fruity==0)
   {
       goto label2;
   }
}
void draw()
{
    system("cls");

    int i,j;
    for(i=0;i<=height;i++)
    {
        for(j=0;j<=width;j++)
        {
            if(j==0 || j==width || i==0 || i==height)
            {
                printf("#");
            }
            else
            {
                if(i==x && j==y)
                {
                    printf("@");
                }
                else if(i==fruitx && j==fruity)
                {
                    printf("$");
                }
                else
                {
                    printf(" ");

                }

            }

        }
        printf("\n");
    }
}
void input()
{
    if(kbhit())
    {
        switch(getch())
        {
        case 'a':
            flag=1;
            break;
        case 's':
            flag=2;
            break;
        case 'w':
            flag=3;
            break;
        case 'd':
            flag=4;
            break;
        case 'x':
            gameOver=1;
            break;
        }
    }
}
void logic()
{
    switch(flag)
    {
        case 1:
        y--;
        break;
        case 2:
            x++;
            break;
        case 3:
            x--;
            break;
        case 4:
            y++;
            break;
        default:
            break;
    }
    if(x<0 || x==width || y<0 || y==width)
    {
        gameOver=1;
    }

}
void main()
{
    setup();

    while(1)
    {
        draw();
        input();
        logic();
        delay(50);
        if(gameOver==1)
        {
            printf("Game over ");
            break;
        }
    }




}

