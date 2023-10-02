#include<stdio.h>
int main()
 {
    char ms;
    printf("Enter marital status(i.e y or n):");
    scanf("%c",&ms);
    char sex;
    printf("\nEnter your sex(i.e m or f):");
    scanf(" %c",&sex);
    int pd,pm,py;
    printf("\nEnter Today's date,month,year:");
    scanf("%d%d%d",&pd,&pm,&py);
    int bd,bm,by;
    printf("\nEnter your birth date:");
    scanf("%d%d%d",&bd,&bm,&by);
    int age;
    age=py-by;
    int mp;
    printf("\nEnter the medical premium you want to take in lakhs(i.e 1,2,3...etc):");
    scanf("%d",&mp);
    int ttl,bg;
    if (sex=='m')
    {
        if (ms=='y')
        {
            if (age<=30)
            {
                bg=mp*1000;
                ttl=bg+0.18*bg;
                printf("You have to pay $%d",ttl);
            }
        }
    }
      else if (age>30 && age<=40)
      {
        bg=mp*1500;
        ttl=bg+0.18*bg;
        printf("You have to pay $%d",ttl);
      }
      else if (age>40 && age<=50)
      {
        bg=mp*2000;
        ttl=bg+0.18*bg;
        printf("You have to pay $%d",ttl);
      }
      else if (age>50 && age<=60)
      {
        bg=mp*2500;
        ttl=bg+0.18*bg;
        printf("You have to pay $%d",ttl);
      }
      else if (age>60 && age<=70)
      {
        bg=mp*3000;
        ttl=bg+0.18*bg;
        printf("You have to pay $%d",ttl);
      }
      else if (age>70)
      {
        printf("Not applicable!");
      }
    } 
    else
    {
      if (age<=30)
      {
        bg=mp*1000-0.1*(mp*1000);
         ttl=bg+0.18*bg;
       printf("You have to pay $%d",ttl);
      }
      else if (age>30 && age<=40)
    {
       bg=mp*1500-0.1*(mp*1500);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>40 && age<=50)
//     {
//       bg=mp*2000-0.1*(mp*2000);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>50 && age<=60)
//     {
//       bg=mp*2500-0.1*(mp*2500);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>60 && age<=70)
//     {
//       bg=mp*3000-0.1*(mp*3000);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>70)
//     {
//       printf("Not applicable!!");
//     }
//   }
  
//  }
//  else if (sex=='f')
//  {
//   if (ms=='y')
//   {
//     if (age<=30)
//     {
//       bg=mp*1000-0.2*(mp*1000);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>30 && age<=40)
//     {
//       bg=mp*1500-0.2*(mp*1500);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>40 && age<=50)
//     {
//       bg=mp*2000-0.2*(mp*2000);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>50 && age<=60)
//     {
//       bg=mp*2500-0.2*(mp*2500);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>60 && age<=70)
//     {
//       bg=mp*3000-0.2*(mp*3000);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>70)
//     {
//       printf("Not applicable!!");
//     }
//   }
//   else
//   {
//     if (age<=30)
//     {
//       bg=mp*1000-0.3*(mp*1000);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>30 && age<=40)
//     {
//       bg=mp*1500-0.3*(mp*1500);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>40 && age<=50)
//     {
//       bg=mp*2000-0.3*(mp*2000);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>50 && age<=60)
//     {
//       bg=mp*2500-0.3*(mp*2500);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>60 && age<=70)
//     {
//       bg=mp*3000-0.3*(mp*3000);
//       ttl=bg+0.18*bg;
//       printf("You have to pay $%d",ttl);
//     }
//     else if (age>70)
//     {
//       printf("Not applicable!!");
//     }
//   }
//  }
// }
