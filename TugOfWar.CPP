#include<iostream.h>
#include<conio.h>
#include<malloc.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
# define INT_MAX 10000
class TugOfWar
{
	int diff;
  public:
	int TowC ( int a[], int n, int curr[],int select, int soln[],int sum, int total, int pos )
	{
	  if (pos == n)
	    return 0;
	  if ((n / 2 - select) > (n - pos))
	    return 0;
	  TowC(a, n, curr,select, soln, sum, total, pos+1);
	  select++;
	  total = total + a[pos];
	  curr[pos] = 1;
	  if (select == n / 2)
	  {
	    if (abs(sum / 2 - total) < diff)
	    {
	      diff = abs(sum / 2 - total);
	      for (int i = 0; i < n; i++)
	      {
		soln[i] = curr[i];
	      }
	    }
	  }
	  else
	  {
	    TowC(a, n, curr,select,soln, sum, total, pos+1 );
	  }
	  curr[pos] = 0;
	  return 0;
	}
	void tugOfWar(int a[],int n)
	{
	  int curr[100],soln[100];
	  diff=INT_MAX;
	  int i=0,t1,t2,sum;
	  t1=t2=sum=0;
	  for ( i = 0; i < n; i++)
	  {
	    sum += a[i];
				curr[i] = soln[i] = 0;
	  }
	  TowC(a, n, curr, 0, soln, sum, 0, 0);
	  cout<<"\nFirst Team Players : ";
	  for (i = 0; i < n; i++)
	  {
	    if (soln[i] == 1)
	    {
	      t1+=a[i];
	      cout<<(i+1)<<" ";
	    }
	  }
	  cout<<"\nTotal Strength= "<<t1;
	  cout<<"\n\nSecond Team Players: ";
	  for ( i = 0; i < n; i++)
	  {
	    if (soln[i] == 0)
	    {
	      t2+=a[i];
	      cout<<(i+1)<<" ";
	    }
	  }
	  cout<<"\nTotal Strength= "<<t2;
	  getch();
	  if(t1<t2)
	  {
		for(i=0;i<100;i++)
		{
			line(0,310,800,310) ;
			setcolor(14);
			line(25,255,600,255);
			setcolor(4);
			//second man
			circle(90+i,225,15);
			line(90+i,240,90+i,280);
			line(90+i,255,105+i,255);
			line(90+i,280,70+i,310);
			line(90+i,280,110+i,310);
			//third man
			circle(130+i,225,15);
			line(130+i,240,130+i,280);
			line(130+i,255,145+i,255);
			line(130+i,280,110+i,310);
			line(130+i,280,150+i,310);
			//fourth man
			circle(170+i,225,15);
			line(170+i,240,170+i,280);
			line(170+i,255,185+i,255);
			line(170+i,280,150+i,310);
			line(170+i,280,190+i,310);
			circle(210+i,225,15);
			line(210+i,240,210+i,280);
			line(210+i,255,225+i,255);
			line(210+i,280,190+i,310);
			line(210+i,280,230+i,310);
			//fifth man
			circle(400+i,225,15);
			line(400+i,240,400+i,280);
			line(385+i,255,400+i,255);
			line(400+i,280,380+i,310);
			line(400+i,280,420+i,310);
			//sixth man
			circle(440+i,225,15);
			line(440+i,240,440+i,280);
			line(425+i,255,440+i,255);
			line(440+i,280,420+i,310);
			line(440+i,280,460+i,310);
			//seventh man
			circle(480+i,225,15);
			line(480+i,240,480+i,280);
			line(465+i,255,480+i,255);
			line(480+i,280,460+i,310);
			line(480+i,280,500+i,310);
			//Eigth man
			circle(520+i,225,15);
			line(520+i,240,520+i,280);
			line(505+i,255,520+i,255);
			line(520+i,280,500+i,310);
			line(520+i,280,540+i,310);
			setcolor(BLUE);
			line(305,240,305,270);
			outtextxy(100,100,"Team 2 is Winning!");
			delay(70);
			cleardevice();
		}
		cout<<"TEAM 2 WINS !!";
	}
	else if(t1>=t2)
	{
			for(i=0;i>(-100);i--)
			{
				line(0,310,800,310) ;
				setcolor(14);
				line(25,255,600,255);
				setcolor(4);
				//second man
				circle(90+i,225,15);
				line(90+i,240,90+i,280);
				line(90+i,255,105+i,255);
				line(90+i,280,70+i,310);
				line(90+i,280,110+i,310);
				//third man
				circle(130+i,225,15);
				line(130+i,240,130+i,280);
				line(130+i,255,145+i,255);
				line(130+i,280,110+i,310);
				line(130+i,280,150+i,310);
				//fourth man
				circle(170+i,225,15);
				line(170+i,240,170+i,280);
				line(170+i,255,185+i,255);
				line(170+i,280,150+i,310);
				line(170+i,280,190+i,310);
				circle(210+i,225,15);
				line(210+i,240,210+i,280);
				line(210+i,255,225+i,255);
				line(210+i,280,190+i,310);
				line(210+i,280,230+i,310);
				

                      //fifth man
				circle(400+i,225,15);
				line(400+i,240,400+i,280);
				line(385+i,255,400+i,255);
				line(400+i,280,380+i,310);
				line(400+i,280,420+i,310);
				//sixth man
				circle(440+i,225,15);
				line(440+i,240,440+i,280);
				line(425+i,255,440+i,255);
				line(440+i,280,420+i,310);
				line(440+i,280,460+i,310);
				//seventh man
				circle(480+i,225,15);
				line(480+i,240,480+i,280);
				line(465+i,255,480+i,255);
				line(480+i,280,460+i,310);
				line(480+i,280,500+i,310);
				//Eigth man
				circle(520+i,225,15);
				line(520+i,240,520+i,280);
				line(505+i,255,520+i,255);
				line(520+i,280,500+i,310);
				line(520+i,280,540+i,310);
				setcolor(BLUE);
				line(305,240,305,270);
				outtextxy(100,100,"Team 1 is Winning!");
				delay(100);
				cleardevice();
			}
			cout<<"TEAM 1 WINS !!";
	}
	}
};

void main()
{
    clrscr();
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    int n;
    TugOfWar t;
    cout<<"Enter the number of players: ";
    cin>>n;
    int *a = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
	cout<<"Enter the strength of player "<<(i+1)<<": ";
	cin>>a[i];
    }
    t.tugOfWar(a,n);
    getch();
}
