#include<stdio.h>
int main (){
    //No. of available seats
    int available=50, book;
    //Entered by user
    printf("Enter Number of seats to be booked-");
    scanf("%d",&book);
    if (available>book){
        printf("No. of times available for Delhi to Chennai\n");
        printf("1)1230 HRS\n2)1530 HRS\n3)1720 HRS\n4)2000 HRS\n\n");
        int time;
        printf("Select Option for Required Time-");
        scanf("%d",&time);
        int timing;
        if (time==1){
            timing= 1230;
        }else if (time==2){
            timing= 1530;
        }else if (time==3){
            timing= 1730;
        }else if (time==4){
            timing= 1230;}
        char name[500];
        printf("Enter Your Name-");
        scanf("%s",&name);
        int price=250;
        printf("\nTHE BILL\nName-%s\nTiming-%dHRS\nPrice-%dRS",name,timing,price*book);
    }
    else{
        printf("SORRY\nSeats Not Availible");
    }    
    return 0;    
}