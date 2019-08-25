#include<stdio.h>
#include<time.h>
#define DELAY 128000
struct my_time{
	int hrs;
	int min;
	int sec;
};
void display(struct my_time *t);
void update(struct my_time *t);
void delay(int sec);
int main()
{
        struct my_time systime;
	int i;
	
	systime.hrs=0;
	systime.min=0;
	systime.sec=0;
        for(i=0;i<DELAY;i++)
        {       delay(1000);             
		 update(&systime);
                display(&systime);

        }
	return(0);
}
void update(struct my_time *t)
{
	t->sec++;
	if(t->sec==60){
		t->sec=0;
		t->min++;
	}
	if(t->min==60){
		t->min=0;
		t->hrs++;
	}
	if(t->hrs==24)
	{
		t->hrs=0;
		delay(t->sec);
	}
}
void display(struct my_time *t)
{
	printf("%02d:",t->hrs);
	printf("%02d:",t->min);
	printf("%02d\n",t->sec);
}
void delay(int sec)
{
	int mil_sec=1000*sec;
	clock_t start_time=clock();
	while(clock()<start_time+mil_sec)
		;
}
