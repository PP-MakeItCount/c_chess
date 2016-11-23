#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void food()
{
     int difrencex = 10 - 630;
     int difrencey = 30 - 470;
     int salma = 0;
     int foodx;
     int foody;
     time_t t;
     srand((unsigned) time(&t));
     for(int i=0;i<salma;i++)
     rand();
     foodx = (rand() % difrencex);
     foody = (rand() % difrencey);
     for(int i=0; 630>foodx>10 && 470>foody>30;i++)
     {
     foodx = (rand() % difrencex);
     foody = (rand() % difrencey);
     }
     putpixel(foodx,foody,15);
     salma++;
     static int foodcount = 0;
     score = 0;
     int nextx;
     int nexty;
     nextx = snake.head_x;
     nexty = snake.head_y;
     if(snake.head_dir == RIGHT)
     {
		       nextx++;
     }
     if(snake.head_dir == LEFT)
     {
		       nextx--;
     }
     if(snake.head_dir == UP)
     {
		       nexty--;
     }
     if(snake.head_dir == DOWN)
     {
		       nexty++;
     }
     int nextpixel;
     nextpixel = getpixel(nextx,nexty);
     if(nextpixel==15)
     {

     if (snake.tail_dir == UP)
	   {
	     for ( int i = 0; i<101;i++)
	     putpixel (snake.tail_x,snake.tail_y+i,15);
	     snake.tail_y +=100;
	   }
	if (snake.tail_dir == DOWN)
	  {
	    for (int i = 0; i<101;i++)
	    putpixel (snake.tail_x,snake.tail_y-i,15);
	    snake.tail_y -=100;
	  }
	if (snake.tail_dir == LEFT)
	  {
	    for (int i = 0; i<101;i++)
	    putpixel (snake.tail_x+i,snake.tail_y,15);
	    snake.tail_x +=100;
	    //printf ("LEFT");
	  }
	if (snake.tail_dir == RIGHT)
	  {
	     for ( int i = 0; i<101;i++)
	     putpixel (snake.tail_x-i,snake.tail_y,15);
	     snake.tail_x -=100;
	     //printf ("RIGHT");
	  }


		  foodcount--;
		  score+=10;
		  settextstyle(3,0,2);
		  sprintf(scorestring,"score : %d ",score);
		  outtextxy(1,0,scorestring);
     }
}

//start function bouns
/*void bouns()
{
     int difrencex = 620 - 20;
     int difrencey = 460 - 40;
     int salma = 0;
     int bounsx;
     int bounsy;
     time_t t;
     srand((unsigned) time(&t));
     for(int i=0;i<salma;i++)
     rand();
     bounsx = (rand() % difrencex);
     bounsy = (rand() % difrencey);
     int j = 20;
     setcolor(LIGHTBLUE);
     circle(bounsx+j,bounsy+j,1);
     salma++;
}*/

//Game Over
void GameOver()
{
     if(snake.head_x <= 10 || snake.head_x >= 630 || snake.head_y <= 30 || snake.head_y >= 470)
     {
		     settextstyle(3,0,2);
		     outtextxy(290,220,"Game Over");
		     delay(3000);
		     exit(1);
     }
     int nextx;
     int nexty;
     nextx = snake.head_x;
     nexty = snake.head_y;
     if(snake.head_dir == RIGHT)
     {
		       nextx++;
     }
     if(snake.head_dir == LEFT)
     {
		       nextx--;
     }
     if(snake.head_dir == UP)
     {
		       nexty--;
     }
     if(snake.head_dir == DOWN)
     {
		       nexty++;
     }
     int nextpixel;
     nextpixel = getpixel(nextx,nexty);
     if(nextpixel == LIGHTGREEN)
     {
		 settextstyle(3,0,2);
		 outtextxy(290,220,"Game Over");
		 delay(3000);
		 exit(1);
     }
}

//start function Game
void Game()
{
     food();
     //bouns();
     while(1)
     {
	     move();
	     GameOver();
     }
}