#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<windows.h>
//#include<time.h>
/*void delay(unsigned int mseconds)
{
    clock_t goal=mseconds+clock();
    while(goal>clock());
}*/

int width=40,height=30,score=0,gameOver,flag;
int x,y,fruitx,fruity,tailx[100],taily[100],countTail=0;
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

    int i,j,k;
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
                    printf("O");
                }
                else if(i==fruitx && j==fruity)
                {
                    printf("$");
                }
                else
                {
                    int w=0;
                    for(k=0;k<countTail;k++)
                    {
                        if(i==tailx[k] && j==taily[k])
                        {
                            printf("o");
                            w=1;
                        }

                    }
                    if(w==0)
                    {
                       printf(" ");
                    }


                }

            }

        }
        printf("\n");
    }
    printf("\nScore = %d",score);
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

    int i;
    int prevx=tailx[0];
    int prevy=taily[0];
    int prev2x,prev2y;
    tailx[0]=x;
    taily[0]=y;
    for(i=1;i<countTail;i++)
    {
        prev2x=tailx[i];
        tailx[i]=prevx;
        prevx=prev2x;

        prev2y=taily[i];
        taily[i]=prevy;
        prevy=prev2y;
    }
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
    for(i=0;i<countTail;i++)
    {
        if(x==tailx[i] && y==taily[i])
        {
            gameOver=1;
        }
    }
    if(x==fruitx && y==fruity)
    {
        label3:
   fruitx=rand()%30;
   if(fruitx==0)
   {
       goto label3;
   }
   label4:
   fruity=rand()%30;
   if(fruity==0)
   {
       goto label4;
   }
   score=score+10;
   countTail++;
    }

}
void main()
{

    int m,n;
    char z;

    setup();

    while(1)
    {
        draw();
        input();
        logic();
        //delay(50);
        for(m=0;m<=1000;m++)
        {
            for(n=0;n<=75000;n++)
            {

            }
        }
        if(gameOver==1)
        {
            printf("\nGame over ");
            break;
        }

    }

}

