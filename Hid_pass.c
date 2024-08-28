

  
 
    #include<stdio.h>
    #include<conio.h>
    
    int main()
    {
     int ind=0;
     char pass[20],ch;
     
     printf("Enter Password: ");
      
     //Initiate While Loop To Start Filling Our String
     // To avoid that user has pressed Enter Key make ch!=10(ASCII value of ENTER)
      
     while(ch!=10)
     {
       ch = getch();
       pass[ind] = ch;
       ind++;
       //Print * Every Time You Type A Letter
       printf("*");
     }
      
     pass[ind] ='\0';
      
     //Print The String (pass)
     printf("\nPassword Is: %s",pass);
     
     getch();
     
     
    }     
     
