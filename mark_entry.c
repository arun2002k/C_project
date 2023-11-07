#include<stdio.h>

struct student{
    char name[50];
    int roll_no;
    int sub[5];
};

void main(){
    int i,j,max,count,total,n,a[50],ni;
    struct student st[50];

    printf("Enter how many students: ");

    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("\nEnter name and roll number for student %d :",i);
        scanf("%s",st[i].name);
        scanf("%d",&st[i].roll_no);
    }

    for(i=0; i<n; i++){
        for(j=0; j<=5; j++){
            printf("\nEnter marks of student %d for subject %d :",i,j);
            scanf("%d",&st[i].sub[j]);
        }
    }

    for(i=0; i<n; i++){
        total =0;
        for(j=0; j<5; j++){
            total = total + st[i].sub[j];
        }
        printf("\nTotal marks obtained by the student Roll number : %d are %d\n",st[i].roll_no,total);
        a[i]= total;
    }

    for(j=0; j<5; j++){
        max = 0;
        for(i=0; i<n; i++){
            if(max < st[i].sub[j]){
                max = st[i].sub[j];
                ni = i;
            }
        }

        printf("\nStudent of roll number : %d ,got maximum marks = %d in Subject: %d\n",st[i].roll_no,max,j);


    }

    max = 0;
    for(i=0; i<n; i++){
        if(max < a[i]){
            max = a[i];
            ni = i;
        }
    }

    printf("\nRoll number : %d obtained the total highest marks.\n",st[ni].roll_no);

}