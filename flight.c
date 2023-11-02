#include<stdio.h>
#include<string.h>

struct flight
{
    char start[5];
    int s_time;
    int e_time;
    int seats;
    char end[5];
};

void input(struct flight *f_in)
{
    for(int i=0;i<3;i++)
    {
        printf("Enter source code: (UPPERCASE)\n");
        scanf("%s",f_in[i].start);
        printf("Enter destination code: (UPPERCASE)\n");
        scanf("%s",f_in[i].end);
        printf("Enter start time: (1-2400)\n");
        scanf("%d",&f_in[i].s_time);
        printf("Enter end time: (1-2400)\n");
        scanf("%d",&f_in[i].e_time);
        printf("Enter number of seats remaining:\n");
        scanf("%d",&f_in[i].seats);
    }
}

void display(struct flight *f2)
{
    printf("\n\nAvailable Flights:\n");
    for(int i=0;i<3;i++)
    {
        printf("Source: %s\tDestination: %s \tStart Time: %d\tEnd Time: %d\t\tRemaining Seats: %d\n",f2[i].start,f2[i].end,f2[i].s_time,f2[i].e_time,f2[i].seats);
    }
}

int main()
{
    struct flight f[3];
    input(f);
    int ch=0;
    char dest[5];
    char src[5];
    display(f);
    while(ch==0)
    {
        printf("Booking Process:\nEnter source code: (UPPERCASE)\n");
        scanf("%s",src);
        printf("Enter destination code: (UPPERCASE)\n");
        scanf("%s",dest);
        int fl=0;
        for(int i=0;i<3;i++)
        {
            int a=strcmp(src,f[i].start);
            int b=strcmp(dest,f[i].end);
            if(strcmp(src,f[i].start)==0 && strcmp(dest,f[i].end)==0)
            {
                printf("\nFlight no. %d\tStart Time: %d\tEnd Time: %d",(i+1),f[i].s_time,f[i].e_time);
                fl=1;
            }
        }
        printf("\nFlights Available:");
        if(fl==0)
        {
            printf("\nSorry, No flights are available.");
        }
        else
        {
            printf("\nEnter flight number to choose flight.");
            int f_no;
            scanf("%d",&f_no);
            if(f[f_no].seats>0)
            {
                f[f_no].seats--;
                printf("\nSuccessfully booked.");
            }
            else
            {
                printf("\nSorry, no seats are available on this flight.");
            }
        }
        display(f);
        printf("\n\nEnter 0 to book another flight and any other number to stop:\n");
        scanf("%d", &ch);
    }
    return 0;
}