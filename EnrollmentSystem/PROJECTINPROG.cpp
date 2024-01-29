#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
int main()
{


	printf("   ___   ___  ______  _____ ______  ______  _____  _   _ \n");
    printf("  |_  | / _ \\ | ___ \\|  ___||  _  \\ |  _  \\|  ___|| | | |\n");
    printf("    | |/ /_\\ \\| |_/ /| |__  | | | | | | | || |__  | | | |\n");
    printf("    | ||  _  ||    / |  __| | | | | | | | ||  __| | | | |\n");
    printf("/\\__/ /| | | || |\\ \\ | |___ | |/ /_ | |/ / | |___ \\ \\_/ /\n");
    printf("\\____/ \\_| |_/\\_| \\_|\\____/ |___/(_)|___/  \\____/  \\___/ \n");
    printf("(___Jared_San_Fernando__>__Enrollment_System___________>>\n\n");




	char ask,ln[20],fn[20],mn[10],adress[30],y,Y,resp,occu,pay,done;
	char sure,tryy;
	int i,i2,type1,type2,age,yl,course,paid,total,bday;  
	beggining:
	system("color 01");
	printf("             \t\t\t\t   _____________________________\t\n");
    printf("\t\t\t\t\t   �- - - - - WELCOME - - - - -�\n");
    printf("\t\t\t\t           �___________________________�\t\n");
    printf("\n\t\t\t\t     -+-+-+ Do you want to Enroll now? +-+-+-");
    printf("\n\t\t\t\t                  (Y) or (N):");
    scanf("%s",&resp);
    
    system("color F4"); 
    if (resp=='y' || resp=='Y'){
    	system("CLS");
    	printf("\t\t\t\t\t_______________________\n");
		printf("\t\t\t\t\t REGULAR   |  IRREGULAR\n");
		printf("\t\t\t\t\t=======================\n");
		printf("\t\t\t\t\t   (1)     |     (2)   \n");
		printf("\t\t\t\t\t_______________________\n");
    	printf("\n\n\t\t\t\t\tYou are Enrolling as: ");
    	scanf("%s",&occu);
	} 
		else {
		goto ending;
	}
	if (occu=='2'){
		goto irreg;
	}
	system("color F0");
	if (occu=='1'){
		start:
		system("CLS");
		printf("\t\t\t==============================================");
		printf("\n\t\t\tPROCESSING: REGULAR STUDENT ENROLLMENT");
		printf("\t\n\t\t\t_________________________________________________________________________________");
		printf("\n\t\t\tCredentials ------------> Register -------------> Payment -----------> Enrolled");
		printf("\t\n\t\t\t_________________________________________________________________________________");
		printf("\n\t\t\tPlease be Honest with your credentials!");
		printf("\n\t\t\tEnter Your Name! ");
		printf("\n\t\t\tLast Name: ");
		scanf("%s",&ln);
		system("CLS");
		printf("\t\t\t================================================================");
		printf("\n\t\t\tPROCESSING: REGULAR STUDENT ENROLLMENT");
		printf("\t\n\t\t\t_________________________________________________________________________________");
		printf("\n\t\t\tCredentials ------------> Register -------------> Payment -----------> Enrolled");
		printf("\t\n\t\t\t_________________________________________________________________________________");
		printf("\n\t\t\tPlease be Honest with your credentials!");
		printf("\n\t\t\tEnter Your Name! ");
		printf("\n\t\t\tEnter Your First Name: ");
		scanf("%s",&fn);
		system("CLS");
		printf("\t\t\t================================================================");
		printf("\n\t\t\t� PROCESSING: REGULAR STUDENT ENROLLMENT �");
		printf("\t\n\t\t\t_________________________________________________________________________________");
		printf("\n\t\t\t� Credentials ------------> Register -------------> Payment -----------> Enrolled�");
		printf("\t\n\t\t\t_________________________________________________________________________________");
		printf("\n\t\t\tPlease be Honest with your credentials!");
		printf("\n\t\t\tEnter Your Name! ");
		printf("\n\t\t\tEnter Your Middle Name: ");
		scanf("%s",&mn);
		system("CLS");
		printf("\t\t\t================================================================");
		printf("\n\t\t\t� PROCESSING: REGULAR STUDENT ENROLLMENT �");
		printf("\t\n\t\t\t_________________________________________________________________________________");
		printf("\n\t\t\t� Credentials ------------> Register -------------> Payment -----------> Enrolled�");
		printf("\t\n\t\t\t_________________________________________________________________________________");
		printf("\n\t\t\tPlease be Honest with your credentials!");
		printf("\n\t\t\tEX. (18)! ");
		printf("\n\t\t\tEnter Your Age: ");
		scanf("%d",&age);
		system("CLS");
		printf("\t\t\t����������������������������������������ͻ");
		printf("\n\t\t\t� PROCESSING: REGULAR STUDENT ENROLLMENT �");
		printf("\t\n\t\t\t��������������������������������������������������������������������������������ͻ");
		printf("\n\t\t\t� Credentials ------------> Register -------------> Payment -----------> Enrolled�");
		printf("\t\n\t\t\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t\t\tPlease be Honest with your credentials!");
		printf("\n\t\t\tEX. (PUT'_' EVERY SPACES)! ");
		printf("\n\t\t\tEnter Your Adress: ");
		scanf("%s",&adress);
		system("CLS");
		printf("\t\t\t����������������������������������������ͻ");
		printf("\n\t\t\t� PROCESSING: REGULAR STUDENT ENROLLMENT �");
		printf("\t\n\t\t\t��������������������������������������������������������������������������������ͻ");
		printf("\n\t\t\t� Credentials ------------> Register -------------> Payment -----------> Enrolled�");
		printf("\t\n\t\t\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t\t\tPlease be Honest with your credentials!");
		printf("\n\t\t\tEX. (11/14/2001) ");
		printf("\n\t\t\tEnter Your birthday: ");
		scanf("%d",&bday);
		system("CLS");
		
		printf("\t\t\t����������������������������������������ͻ");
		printf("\n\t\t\t� PROCESSING: REGULAR STUDENT ENROLLMENT �");
		printf("\t\n\t\t\t��������������������������������������������������������������������������������ͻ");
		printf("\n\t\t\t� Credentials ------------> Register -------------> Payment -----------> Enrolled�");
		printf("\t\n\t\t\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t\t\tARE YOU SURE WITH THESE INFORMATIONS?: "); //111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
		scanf("%s",&sure);  
		  	system("CLS");
		if (sure=='y' || sure=='Y')
		{
		goto courses;	
		}
		else {
			goto start;
		}
		
	} 
	  courses:
		system("CLS");
		printf("\t\t\t����������������������������������������ͻ");
		printf("\n\t\t\t� PROCESSING: REGULAR STUDENT ENROLLMENT �");
		printf("\t\n\t\t\t��������������������������������������������������������������������������������ͻ");
		printf("\n\t\t\t� Credentials ------------> Register -------------> Payment -----------> Enrolled�");
		printf("\t\n\t\t\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t\t\t�������������������������ͻ");
		printf("\n\t\t\t�����Available courses���͹");
		printf("\n\t\t\t�������������������������ͼ");
		printf("\n\t\t\tnotice:");
		printf("Please choose wisely!");
		system("color 70"); 
		printf("  \t\t\t\t\t\t\t\t\t\t\t\t\t���������ͻ\n");
		printf("\t\t\t[1]BSIT   �\n");
		printf(" \t\t\t���������͹\n");
		printf("\t\t\t[2]BSCE   �\n");
		printf(" \t\t\t���������͹\n");
		printf("\t\t\t[3])BSED  �\n");
		printf(" \t\t\t���������͹\n");
		printf("\t\t\t[4]COMSCI �\n");
		printf("\t\t\t���������ͼ\n");
	
		printf("\n\t\tEnter the course you want to take: ");
		scanf("%d",&course);
		system("CLS");
		
		printf("\t\t\t����������������������������������������ͻ");
		printf("\n\t\t\t� PROCESSING: REGULAR STUDENT ENROLLMENT �");
		printf("\t\n\t\t\t��������������������������������������������������������������������������������ͻ");
		printf("\n\t\t\t� Credentials ------------> Register -------------> Payment -----------> Enrolled�");
		printf("\t\n\t\t\t��������������������������������������������������������������������������������ͼ");
		//COURSE 1111111111111111111111111111111111111111111111111111111111111111111111111111
		if (course==1){
		
		printf("  \t\t\t\t\t\t�������������ͻ\n");
		printf("\t\t\t[1]FIRST YEAR �\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[2]SECOND YEAR�\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[3])THIRD YEAR�\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[4]4TH YEAR   �\n");
		printf("\t\t\t�������������ͼ\n");
		printf("\t\t\t��������������������������");
		printf("\n\t\t\tChoose your Year level : ");
		scanf("%d",&yl);
		system("CLS");
		if (yl<=4 && yl>=1){
			switch(yl)
			{
			case 1: 
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSIT    |    AY 2021-2022         |          1ST         | 1STYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		payment:
		printf("\t����������������������������ͻ\n");
		printf("\t� Tuition Fee     | 1,725.00 �\n");
		printf("\t� Admission Fee   | 100.00   �\n");
		printf("\t� Athletic Fee    | 50.00    �\n");
		printf("\t� Computer Fee    | 400.00   �\n");
		printf("\t� Cultural Fee    | 75.00    �\n");
		printf("\t� Development Fee | 300.00   �\n");
		printf("\t� Guidance Fee    | 100.00   �\n");
		printf("\t� Handbook Fee    | 100.00   �\n");
		printf("\t� Laboratory Fee  | 0.00     �\n");
		printf("\t� Library Fee     | 500.00   �\n");
		printf("\t� Med&Dental Fee  | 75.00    �\n");
		printf("\t� Registration Fee| 75.00    �\n");
		printf("\t� School ID Fee   | 100.00   �\n");
		printf("\t� ______________________     �");
		printf("\t\n\t� TOTAL FEE  =     3,600.00  �\n");
		printf("\t�             \t\t     �\n");
		printf("\t����������������������������ͼ\n");
		if (pay == 'Y' || pay == 'y')
		{
		printf("\t PAY NOW: ");
		scanf("%d",&paid);
	}
	
	if (paid>=3600){
		system("CLS");
		total=paid-3600;
		printf("\t +++++++++++++++++++++++");
		printf("\n\t\t�RECEIPT�\n");
		printf("\t +++++++++++++++++++++++");
		printf("\n");
		printf("\t����������������������������ͻ\n");
		printf("\t� Tuition Fee     | 1,725.00 �\n");
		printf("\t� Admission Fee   | 100.00   �\n");
		printf("\t� Athletic Fee    | 50.00    �\n");
		printf("\t� Computer Fee    | 400.00   �\n");
		printf("\t� Cultural Fee    | 75.00    �\n");
		printf("\t� Development Fee | 300.00   �\n");
		printf("\t� Guidance Fee    | 100.00   �\n");
		printf("\t� Handbook Fee    | 100.00   �\n");
		printf("\t� Laboratory Fee  | 0.00     �\n");
		printf("\t� Library Fee     | 500.00   �\n");
		printf("\t� Med&Dental Fee  | 75.00    �\n");
		printf("\t� Registration Fee| 75.00    �\n");
		printf("\t� School ID Fee   | 100.00   �\n");
		printf("\t� ______________________     �");
		printf("\t\n\t� TOTAL FEE  =     3,600.00  �\n");
		printf("\t�             \t\t     �\n");
		printf("\t����������������������������ͼ\n");
		printf("\t�����������������������ͻ\n");
		printf("\t YOU PAID: %d           \n",paid);
		printf("\t�����������������������ͼ\n");
		printf("\t Your Change is: %d      \n",total);
		printf("\t�����������������������ͼ\n");
} 

	else if (paid<3600){
		printf("\nInvalid Payment!!");
		goto cancelled;
	}	
		printf("\nFinish transaction? (Y) or (N): ");
		scanf("%s",&done);	
	if (done=='Y' || done=='y'){
		system("CLS");
		goto congrats;
	}
	else {
		goto beggining;
	}

       	break;
		
			case 2: 
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSIT    |    AY 2021-2022         |          1ST         | 2NDYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    107   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PEH  1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    108   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    109   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    110   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	}
		break;

			case 3: 
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSIT    |    AY 2021-2022         |          1ST         | 3RDYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    111   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    112   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    113   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    114   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	}
			break;
			
			case 4:
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSIT    |    AY 2021-2022         |          1ST         | 4THYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    115   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    116   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    117   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    118   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	}
			break;
			}
		}
	}		
	//COURSE 2222222222222222222222222222222222222222222222222222222222222222222222222222222222
		else if (course==2){
		printf("  \t\t\t\t\t\t�������������ͻ\n");
		printf("\t\t\t[1]FIRST YEAR �\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[2]SECOND YEAR�\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[3])THIRD YEAR�\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[4]4TH YEAR   �\n");
		printf("\t\t\t�������������ͼ\n");
		printf("\t\t\t��������������������������");
		printf("\n\t\t\tChoose your Year level : ");
		scanf("%d",&yl);
		system("CLS");
		if (yl<=4 && yl>=1){
			switch(yl)
			{
				case 1:
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSCE    |    AY 2021-2022         |          1ST         | 1STYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	} 
			break;
	
			case 2:
				system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSCE    |    AY 2021-2022         |          1ST         | 2NDYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	} 
	break;
	
	case 3: 
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSCE    |    AY 2021-2022         |          1ST         | 3RDYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	}
			break;
			case 4:
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSCE    |    AY 2021-2022         |          1ST         | 4THYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	}
			break;
}
}
}     
  		//COURSE 333333333333333333333333333333333333333333333333333333333333
			else if (course==3){
		printf("  \t\t\t\t\t\t�������������ͻ\n");
		printf("\t\t\t[1]FIRST YEAR �\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[2]SECOND YEAR�\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[3])THIRD YEAR�\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[4]4TH YEAR   �\n");
		printf("\t\t\t�������������ͼ\n");
		printf("\t\t\t��������������������������");
		printf("\n\t\t\tChoose your Year level : ");
		scanf("%d",&yl);
		system("CLS");
		if (yl<=4 && yl>=1){
			switch(yl)
			{
				case 1:
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSED    |    AY 2021-2022         |          1ST         | 1STYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	} 
			break;
	
			case 2:
				system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSED    |    AY 2021-2022         |          1ST         | 2NDYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	} 
	break;
	
	case 3: 
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSED    |    AY 2021-2022         |          1ST         | 3RDYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	}
			break;
			case 4:
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�      BSED    |    AY 2021-2022         |          1ST         | 4THYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	}
			break;
}
}
}
//COURSE 44444444444444444444444444444444444444444444444444444444444
else if (course==4){
		printf("  \t\t\t\t\t\t�������������ͻ\n");
		printf("\t\t\t[1]FIRST YEAR �\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[2]SECOND YEAR�\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[3])THIRD YEAR�\n");
		printf(" \t\t\t�������������͹\n");
		printf("\t\t\t[4]4TH YEAR   �\n");
		printf("\t\t\t�������������ͼ\n");
		printf("\t\t\t��������������������������");
		printf("\n\t\t\tChoose your Year level : ");
		scanf("%d",&yl);
		system("CLS");
		if (yl<=4 && yl>=1){
			switch(yl)
			{
				case 1:
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�    COMSCI    |    AY 2021-2022         |          1ST         | 1STYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	} 
			break;
	
			case 2:
				system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�    COMSCI    |    AY 2021-2022         |          1ST         | 2NDYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	} 
	break;
	
	case 3: 
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�    COMSCI    |    AY 2021-2022         |          1ST         | 3RDYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	else {
	system("CLS");
	for(i2=0; i2<5; i++)
    {
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	}
			break;
			case 4:
			system("color F0");
		printf("\t�����������������������������������������������������������������������������������������������������������ͻ");
		printf("\n\t�REGISTRATION FORM | <-----------------------REGISTRAR'S COPY --------------------> | SEMESTRAL FEES 	    �");
		printf("\t\n\t�����������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t�LAST NAME     |     FIRST NAME     |     MIDDLE NAME                            �   Tuition Fee  | 1,725.00�");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Admission Fee| 100.00  �");
		printf("\n\t�%s,  |   %s,      |     %s                                 �   Athletic Fee | 50.00   �",ln,fn,mn);
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Computer Fee | 400.00  �");
		printf("\n                                                                                             Cultural Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͻDevelopment Fee | 300.00  �");
		printf("\n\t�COURSE        |     ACADEMIC YEAR       |       SEMESTER       | YEAR LEVEL     �   Guidance Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ   Handbook Fee | 100.00  �");
		printf("\n\t�    COMSCI    |    AY 2021-2022         |          1ST         | 4THYEAR-REGULAR� Laboratory Fee | 0.00    �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ    Library Fee | 500.00  �");
		printf("\n\t�  SUBJECT DESCRIPTION | YEAR-SECTION | UNITS |  DAYS       | TIME    |    ROOM  � Med&Dental Fee | 75.00   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼRegistration Fee| 75.00   �");
		printf("\n\t�      ITCOMP          |     BSIT-1F  |   3   |  MON/FRIDAY |  8-10AM |    102   �  School ID Fee | 100.00  �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ _________________________");
		printf("\n\t�      PROG 1          |     BSIT-1F  |   3   |  TUES/THURS |  11-2PM |    103   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ  TOTAL    =    3,600.00");
		printf("\n\t�      NSTP 1          |     BSIT-1F  |   3   |  MON/WEDNES |  11-2PM |    104   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t�      MATH 1          |     BSIT-1F  |   3   |  TUES/FRIDAY|  3-5PM  |    105   �");
		printf("\t\n\t��������������������������������������������������������������������������������ͼ");
		printf("\n\t                                       _______");
		printf("\t\n\t                         Total Units  =  12");
		printf("\t\n\t�������������������������������������������������������������������������������������������������������������ͼ");
		printf("\n\t\tProceed To Payment?: ");
		printf("\t�     (Y)   �     (N)   �");
		scanf("\t\n%s",&pay);
		system("CLS");
		system("color F4");
		if (pay == 'Y' || pay == 'y')
		{
		goto payment;
	}
	
	else {
		cancelled:
	system("CLS");
	for(i2=0; i2<5; i++)
    {
    	
	  printf("ENROLLMENT CANCELED");
	  Sleep(500);
      system("cls");
      Sleep(500);
      goto ending;
    }
	}
			break;
}
}
} 
irreg:
	system("CLS");
	//IRREGULAR STUDENTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT
		printf("\t\t\t����������������������������������������ͻ");
		printf("\n\t\t\t� PROCESSING: IRREGULAR STUDENT ENROLLMENT �");
		printf("\t\n\t\t\t����������������������������������������������������������������������������������ͻ");
		printf("\n\t\t\t� Credentials ------------> Register -------------> Payment -----------> Enrolled�");
		printf("\t\n\t\t\t����������������������������������������������������������������������������������ͼ");
		printf("\n\t\t\tPlease be Honest with your credentials!");
		printf("\n\t\t\tEnter Your Name! ");
		printf("\n\t\t\tLast Name: ");
		scanf("%s",&ln);	
		  
			congrats:
		
		for(i=0; i<5; i++)
    {
    	system("color 9");
     	printf("� � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � �");
		printf("\nCONGRATULATIONS!!\n");
		printf("\nYOU ARE SUCCESSFULY ENROLLED!!\n");
		printf("� � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � �");
      Sleep(500);
      system("cls");
      Sleep(500);
    }
			
		ending:
				system("CLS");
			printf("Thankyou for using this program ^_^");
    return 0;
}



