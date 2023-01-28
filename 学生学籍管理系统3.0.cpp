#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define  STUDENT_COUNT  3 //宏定义学生人数 便于修改
#define  TEACHER_COUNT  3//宏定义教师人数 

int numbers[STUDENT_COUNT];//存储学号的一维数组
char names[STUDENT_COUNT][50];//存储学生姓名的二维数组
double maths[STUDENT_COUNT];//存储学生数学成绩的一维数组
double english[STUDENT_COUNT];//存储学生英语成绩的一维数组
double computer[STUDENT_COUNT];//存储学生计算机成绩的一维数组
double sums[STUDENT_COUNT];//存储学生总成绩的一维数组
char Gender[STUDENT_COUNT][50];//存储性别的二维数组 
char Birthday[STUDENT_COUNT][50];//存储出生日期的二维数组
char ID_Number[STUDENT_COUNT][50];//存储身份证号的二维数组 
char Time_Enrolment[STUDENT_COUNT][50];//存储入学日期的二维数组 
char  politics_Status[STUDENT_COUNT][50];//存储政治面貌的二维数组
char Home_Add[STUDENT_COUNT][50];//存储家庭住址的二维数组
char Native_Place[STUDENT_COUNT][50];//存储籍贯的二维数组 
char Postal_Code[STUDENT_COUNT][50];//存储邮政编码的二维数组 
char Ethnic[STUDENT_COUNT][50];//存储民族的二维数组 

int Teacher_Number[TEACHER_COUNT];//存储教工号的一维数组
char TName[TEACHER_COUNT][50];//存储名字的二维数组
char TGender[TEACHER_COUNT][50];//存储性别的二维数组 
char TProfessional_Title[TEACHER_COUNT][50];//存储职称的二维数组
char TSubordinate_Departments[TEACHER_COUNT][50];//存储所属院系的二维数组
char Phone_Number[TEACHER_COUNT][50];//存储电话的二维数组

int main(void)
{
	int a, j, c, d, e, f,u,p;//声明的6个被使用的变量
	int geshu = STUDENT_COUNT;//删除功能处的变量
	int Tgeshu = TEACHER_COUNT; 
	char b[20];//充当临时姓名容器的字符数组

	int choice;//定义了用户输入的菜单选项
	int i;//定义了用于控制for循环的初始值

		
	while (1)//显示菜单，直到用户输入0为止
	{
		printf("|---------欢迎使用学生学籍管理系统----------|\n");
		printf("|---------（1 —9）学生板块-----------------|\n");
		printf("|--------1输入所有学生信息------------------|\n");
		printf("|--------2输出所有学生信息------------------|\n");	
		printf("|--------3按学号查找某个学生信息------------|\n");
		printf("|--------4按姓名查找某个学生信息------------|\n");
		printf("|--------5按总成绩对学生排序----------------|\n");
		printf("|--------6按学号修改某个学生信息------------|\n");
		printf("|--------7按姓名修改某个学生信息------------|\n");
		printf("|--------8按学号删除某个学生信息------------|\n");
		printf("|--------9按姓名删除某个学生信息------------|\n");
		printf("|-------------------------------------------|\n");
		printf("|---------（10 —17）教师板块---------------|\n");
		printf("|--------10输入所有教师信息-----------------|\n");
		printf("|--------11输出所有教师信息-----------------|\n");	
		printf("|--------12按教工号查找某个教师信息---------|\n");
		printf("|--------13按姓名查找某个教师信息-----------|\n");
		printf("|--------14按教工号修改某个教师信息---------|\n");
		printf("|--------15按姓名修改某个教师信息-----------|\n");
		printf("|--------16按教工号删除某个教师信息---------|\n");
		printf("|--------17按姓名删除某个教师信息-----------|\n");
		printf("|-------------------------------------------|\n");	
		printf("|--------0退出程序--------------------------|\n");
		printf("|-------------------------------------------|\n");
		printf("|--------请输入您的选择---------------------|\n");
		scanf("%d", &choice);//接收用户的输入
		if (choice == 0)
		{
			break;//用于结束距离它最近的循环
		}
		switch (choice)
		{
		case 0:
			break;
		case 1:
			//输入所有学生信息

			system("CLS");//运行前进行清屏操作
			for (i = 0; i < STUDENT_COUNT; i++)
			{
				printf("请输入第%d位学生的信息\n", i + 1);
				printf("学号 :\t");
				fflush(stdin);
				scanf("%d", &numbers[i]);
				printf("姓名 :\t");
				fflush(stdin);
				scanf("%s", names[i]);
				printf("英语 :\t");
				fflush(stdin);
				scanf("%lf", &english[i]);
				printf("数学 :\t");
				fflush(stdin);
				scanf("%lf", &maths[i]);
				printf("计算机:\t");
				fflush(stdin);
				scanf("%lf", &computer[i]);		
				sums[i] = english[i] + maths[i] + computer[i];
				printf("性别:\t");
				fflush(stdin);
				scanf("%s",Gender[i]);
				printf("出生日期:\t");
				fflush(stdin);
				scanf("%s",Birthday[i]);
				printf("身份证号:\t");
				fflush(stdin);
				scanf("%s",ID_Number[i]);
				printf("入学日期:\t");
				fflush(stdin);
				scanf("%s",Time_Enrolment[i]);
				printf("政治面貌:\t");
				fflush(stdin);
				scanf("%s",politics_Status[i]);
				printf("家庭住址:\t");
				fflush(stdin);
				scanf("%s",Home_Add[i]);
				printf("籍贯:\t");
				fflush(stdin);
				scanf("%s",Native_Place[i]);
				printf("邮政编码:\t");
				fflush(stdin);
				scanf("%s",Postal_Code[i]);
				printf("民族:\t");
				fflush(stdin);
				scanf("%s",Ethnic[i]);																												
				system("CLS");
			}		
			printf("|----------------------------|\n");
			printf("|------ 学生信息输入完毕-----|\n");
			printf("|----------------------------|\n");
			break;
		case 2:			
			//输出所有学生信息
			system("CLS");//运行前进行清屏操作
			printf("|-----所有学生信息如下 ：----|\n");
			printf("|----------------------------|\n");
			printf("||***学号 姓名 英语    数学  计算机   总成绩   性别  出生日期 身份证号 入学日期 政治面貌 家庭住址   籍贯  邮政编码  民族 ||\n");
			for (i = 0; i < STUDENT_COUNT; ++i)
			{
				printf("||***%d\t%s    \t%.1f\t%.1f\t%.1f\t%.1f\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s ||\n", 
				numbers[i], names[i], english[i], maths[i], computer[i], sums[i],Gender[i],Birthday[i],ID_Number[i],Time_Enrolment[i]
				,politics_Status[i],Home_Add[i],Native_Place[i],Postal_Code[i],Ethnic[i]);
			}
			printf("|----------------------------|\n");
			break;
		case 3:
		{
			//按学号查找某个学生信息
			int j = -1, num;
			printf("请输入要查找学生的学号：");
			scanf("%d", &num);
			for (i = 0; i < STUDENT_COUNT; i++)
			{
				if (numbers[i] == num)
				{
					j = i;
					break;
				}
			}
			if (j == -1)
			{
				system("CLS");
				printf("|---未找到该学生的信息--------|\n");
			}
			else
			{
				system("CLS");
				printf("|------该学生信息如下：------|\n");
				printf("|----------------------------|\n");
				printf("||***学号\t\t姓名\t\t英语\t数学\t计算机\t总成绩\t性别\t出生日期\t身份证号\t入学日期\t政治面貌\t家庭住址\t籍贯\t邮政编码\t民族 ||\n");
				printf("||***%d\t%s    \t%.1f\t%.1f\t%.1f\t%.1f\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s ||\n", 
				numbers[i], names[i], english[i], maths[i], computer[i], sums[i],Gender[i],Birthday[i],ID_Number[i],Time_Enrolment[i]
				,politics_Status[i],Home_Add[i],Native_Place[i],Postal_Code[i],Ethnic[i]);
				printf("|----------------------------|\n");
			}
		}
			break;
		case 4:
			//按姓名查找某个学生信息
		{
			int w, m = -1, c;
			char name[50];
			printf("请输入要查找的学生姓名 ：");
			scanf("%s", &name);
			for (w = 0; w < STUDENT_COUNT; w++)
			{
				c = strcmp(names[w], name);
				if (!c)
				{
					m = w;
					break;
				}
			}
			if (m == -1)
			{
				system("CLS");
				printf("|---未找到该学生信息---------| \n\n");
			}
			else
			{
				system("CLS");
				printf("|---该学生成绩信息如下-------|\n");
				printf("|----------------------------|\n");
				printf("||***学号\t\t姓名\t\t英语\t数学\t计算机\t总成绩\t性别\t出生日期\t身份证号\t入学日期\t政治面貌\t家庭住址\t籍贯\t邮政编码\t民族 ||\n");
				printf("||***%d\t%s    \t%.1f\t%.1f\t%.1f\t%.1f\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s ||\n", 
				numbers[w], names[w], english[w], maths[w], computer[w], sums[w],Gender[w],Birthday[w],ID_Number[w],Time_Enrolment[w]
				,politics_Status[w],Home_Add[w],Native_Place[w],Postal_Code[w],Ethnic[w]);
				printf("|----------------------------|\n");
			}
		}
			break;
		case 5:
			for (i = 0; i <= STUDENT_COUNT - 1; i++)
				for (j = i + 1; j < STUDENT_COUNT; j++)
				{
					if (sums[i] <  sums[j])
					{
						a = sums[i];
						sums[i] = sums[j];
						sums[j] = a;
						c = numbers[i];
						numbers[i] = numbers[j];
						numbers[j] = c;
						strcpy(b, names[i]);
						strcpy(names[i], names[j]);
						strcpy(names[j], b);
						c = english[i];
						english[i] = english[j];
						english[j] = c;
						d = maths[i];
						maths[i] = maths[j];
						maths[j] = d;
						e = computer[i];
						computer[i] = computer[j];
						computer[j] = e;									
					}
				}
			system("CLS");
			printf("|-按总成绩高低排序后的学生信息如下-|\n");
			printf("|----------------------------|\n");
			printf("||***学号\t\t姓名\t\t英语\t数学\t计算机\t总成绩 ||\n");
			for (i = 0; i < STUDENT_COUNT; i++)
			{
				
				printf("||***%d\t%s    \t%.1f\t%.1f\t%.1f\t%.1f ||\n", numbers[i], names[i], english[i], maths[i], computer[i], sums[i]);
			}
			printf("|----------------------------|\n");
			//按总成绩对学生排序

			break;
		case 6:	
		{
			int a;
			printf("请输入你要修改信息的学生学号:\n");
			scanf("%d", &a);
			for (i = 0; i < STUDENT_COUNT; i++)
			{
				if (a == numbers[i])
				{
					printf("请输入该学生的新信息：\n");
					printf("修改学号为 :");
					fflush(stdin);
					scanf("%d", &numbers[i]);
					printf("修改姓名为  :\t");
					fflush(stdin);
					scanf("%s", names[i]);
					printf("修改英语成绩  :\t");
					fflush(stdin);
					scanf("%lf", &english[i]);
					printf("修改数学成绩  :\t");
					fflush(stdin);
					scanf("%lf", &maths[i]);
					printf("修改计算机成绩:\t");
					fflush(stdin);
					scanf("%lf", &computer[i]);
					sums[i] = english[i] + maths[i] + computer[i];
					printf("修改性别：\t");
					fflush(stdin);
					scanf("%s",Gender[i]);
					printf("修改出生日期：\t");
					fflush(stdin);
					scanf("%s",Birthday[i]);
					printf("修改身份证号：\t");
					fflush(stdin);
					scanf("%s",ID_Number[i]);
					printf("修改入学日期：\t");
					fflush(stdin);
					scanf("%s",Time_Enrolment[i]);
					printf("修改政治面貌：\t");
					fflush(stdin);
					scanf("%s",politics_Status[i]);
					printf("修改家庭住址：\t");
					fflush(stdin);
					scanf("%s",Home_Add[i]);
					printf("修改籍贯：\t");
					fflush(stdin);
					scanf("%s",Native_Place[i]);
					printf("修改邮政编码：\t");
					fflush(stdin);
					scanf("%s",Postal_Code[i]);
					printf("修改民族：\t");
					fflush(stdin);
					scanf("%s",Ethnic[i]);
					break;
				}
			}
			if (i == STUDENT_COUNT)
			{
				system("CLS");
				printf("|-------输入的学号有误-------|\n");
			}
			else
			{
				system("CLS");
				printf("|----------------------------|\n");
				printf("|------ 信息修改完毕---------|\n");
				printf("|----------------------------|\n");				
			}			
		}
			break;
		case 7:
		{
			//按姓名修改某个学生信息
			printf("请输入你要修改信息的学生姓名:\n");
			scanf("%s", b);
			for (i = 0; i < STUDENT_COUNT; i++)
			{
				if (strcmp(b, names[i]) == 0)
				{
					printf("请输入该学生的新信息：\n");
					printf("修改学号为 :");
					fflush(stdin);
					scanf("%d", &numbers[i]);
					printf("修改姓名为 :\t");
					fflush(stdin);
					scanf("%s", names[i]);
					printf("修改英语成绩 :\t");
					fflush(stdin);
					scanf("%lf", &english[i]);
					printf("修改数学成绩 :\t");
					fflush(stdin);
					scanf("%lf", &maths[i]);
					printf("修改计算机成绩:\t");
					fflush(stdin);
					scanf("%lf", &computer[i]);
					sums[i] = english[i] + maths[i] + computer[i];
					printf("修改性别：\t");
					fflush(stdin);
					scanf("%s",Gender[i]);
					printf("修改出生日期：\t");
					fflush(stdin);
					scanf("%s",Birthday[i]);
					printf("修改身份证号：\t");
					fflush(stdin);
					scanf("%s",ID_Number[i]);
					printf("修改入学日期：\t");
					fflush(stdin);
					scanf("%s",Time_Enrolment[i]);
					printf("修改政治面貌：\t");
					fflush(stdin);
					scanf("%s",politics_Status[i]);
					printf("修改家庭住址：\t");
					fflush(stdin);
					scanf("%s",Home_Add[i]);
					printf("修改籍贯：\t");
					fflush(stdin);
					scanf("%s",Native_Place[i]);
					printf("修改邮政编码：\t");
					fflush(stdin);
					scanf("%s",Postal_Code[i]);
					printf("修改民族：\t");
					fflush(stdin);
					scanf("%s",Ethnic[i]);
					break;
				}
			}
				if (i == STUDENT_COUNT)
				{
					system("CLS");
					printf("|------输入的姓名有误--------|\n");
				}
				else
				{
					system("CLS");
					printf("|----------------------------|\n");
					printf("|------ 信息修改完毕---------|\n");
					printf("|----------------------------|\n");
				}
			}		
			break;
		case 8:
			//按学号删除某个学生信息
			printf("请输入要删除信息的学生学号:\n");
			scanf("%d", &a);
			for(i=0;i<geshu;i++)
			{
				if(a==numbers[i])
					break;
			}
			if(i==geshu)
			{
				system("CLS");
				printf("|-------输入的学号有误------|\n");
			}
			else
			{
			    geshu--;	
			    system("CLS");
				printf("|---删除后的学生信息如下-----|\n");
				printf("|----------------------------|\n");
				printf("||***学号\t\t姓名\t\t英语\t数学\t计算机\t总成绩\t性别\t出生日期\t身份证号\t入学日期\t政治面貌\t家庭住址\t籍贯\t邮政编码\t民族 ||\n");
				for (i = 0; i < geshu; i++)
				{
					 j = i + 1;
				     if (a == numbers[i])
					 {
						a = numbers[j];
						strcpy(names[i], names[j]);
						numbers[i] = numbers[j];
						english[i] = english[j];
						maths[i] = maths[j];
						computer[i] = computer[j];
						strcpy(Gender[i] , Gender[j]);
						strcpy(Birthday[i] , Birthday[j]);
						strcpy(ID_Number[i] , ID_Number[j]);
						strcpy(Time_Enrolment[i] , Time_Enrolment[j]);
						strcpy(politics_Status[i] ,politics_Status[j]);
						strcpy(Home_Add[i] , Home_Add[j]);
						strcpy(Native_Place[i] , Native_Place[j]);
						strcpy(Postal_Code[i] , Postal_Code[j]);
						strcpy(Ethnic[i] , Ethnic[j]);
						printf("||***%d\t%s    \t%.1f\t%.1f\t%.1f\t%.1f\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s ||\n", 
				numbers[i], names[i], english[i], maths[i], computer[i], sums[i],Gender[i],Birthday[i],ID_Number[i],Time_Enrolment[i]
				,politics_Status[i],Home_Add[i],Native_Place[i],Postal_Code[i],Ethnic[i]);
					 }
					else
					{
						printf("||***%d\t%s    \t%.1f\t%.1f\t%.1f\t%.1f\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s ||\n", 
				numbers[i], names[i], english[i], maths[i], computer[i], sums[i],Gender[i],Birthday[i],ID_Number[i],Time_Enrolment[i]
				,politics_Status[i],Home_Add[i],Native_Place[i],Postal_Code[i],Ethnic[i]);
					}
				}
			}
				printf("|----------------------------|\n");

			break;
		case 9:
			//按姓名删除某个学生信息
			printf("请输入删除的学生姓名：");
			scanf("%s", b);
			for(i=0;i<Tgeshu;i++)
			{
				if(strcmp(names[i],b)==0)
					break;
			}
			if(i==Tgeshu)
			{
				system("CLS");
				printf("|-------输入的姓名有误------|\n");
			}
			else
			{
			   geshu--;
			   system("CLS");
			   printf("|-----删除后的学生信息如下：-|\n");
			   printf("|----------------------------|\n");
			   printf("||***学号\t\t姓名\t\t英语\t数学\t计算机\t总成绩\t性别\t出生日期\t身份证号\t入学日期\t政治面貌\t家庭住址\t籍贯\t邮政编码\t民族 ||\n");
			   for (i = 0; i<geshu; i++)
			   {
				  j = i + 1;
				 if (strcmp(names[i], b) == 0)
				 {
					strcpy(names[i], names[j]);
					strcpy(b, names[j]);
					numbers[i] = numbers[j];
					english[i] = english[j];
					maths[i] = maths[j];
					computer[i] = computer[j];
					strcpy(Gender[i] , Gender[j]);
					strcpy(Birthday[i] , Birthday[j]);
					strcpy(ID_Number[i] , ID_Number[j]);
					strcpy(Time_Enrolment[i] , Time_Enrolment[j]);
					strcpy(politics_Status[i] ,politics_Status[j]);
					strcpy(Home_Add[i] , Home_Add[j]);
					strcpy(Native_Place[i] , Native_Place[j]);
					strcpy(Postal_Code[i] , Postal_Code[j]);
					strcpy(Ethnic[i] , Ethnic[j]);
					printf("||***%d\t%s    \t%.1f\t%.1f\t%.1f\t%.1f\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s ||\n", 
				numbers[i], names[i], english[i], maths[i], computer[i], sums[i],Gender[i],Birthday[i],ID_Number[i],Time_Enrolment[i]
				,politics_Status[i],Home_Add[i],Native_Place[i],Postal_Code[i],Ethnic[i]);
				 }
				else
					printf("||***%d\t%s    \t%.1f\t%.1f\t%.1f\t%.1f\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s ||\n", 
				numbers[i], names[i], english[i], maths[i], computer[i], sums[i],Gender[i],Birthday[i],ID_Number[i],Time_Enrolment[i]
				,politics_Status[i],Home_Add[i],Native_Place[i],Postal_Code[i],Ethnic[i]);
			   }
			}
			printf("|----------------------------|\n");
			break;
		case 10:
		//输入所有教师信息
		system("CLS");//运行前进行清屏操作
		for (i = 0; i < TEACHER_COUNT; i++)
		{
			printf("请输入第%d位教师的信息\n", i + 1);
			printf("教工号 :\t");
			fflush(stdin);
			scanf("%d", &Teacher_Number[i]);
			printf("姓名 :\t");
			fflush(stdin);
			scanf("%s", TName[i]);
			printf("性别:\t");
			fflush(stdin);
			scanf("%s", TGender[i]);
			printf("职称 :\t");
			fflush(stdin);
			scanf("%s", TProfessional_Title[i]);
			printf("所属院系 :\t");
			fflush(stdin);
			scanf("%s", TSubordinate_Departments[i]);
			printf("电话 :\t");
			fflush(stdin);
			scanf("%s", Phone_Number[i]);
			system("CLS");
		}		
		printf("|----------------------------|\n");
		printf("|-----教师信息输入完毕-----|\n");
		printf("|----------------------------|\n");
		break;
		case 11:			
			//输出全部的教师信息 
			system("CLS");//
			printf("|-----所有教师信息如下 :----|\n");
			printf("|----------------------------|\n");
			printf("||***教工号 姓名 性别 职称 所属院系 电话 ||\n");
			for (i = 0; i < TEACHER_COUNT; ++i)
			{
				printf("||***%d\t%s    \t%s\t%s\t%s\t%s ||\n", Teacher_Number[i],TName[i],TGender[i],TProfessional_Title[i],TSubordinate_Departments[i],Phone_Number[i]);
			}
			printf("|----------------------------|\n");
			break;
			case 12:
		{
			//按教工号查找某个教师信息
			int j = -1, num;
			printf("请输入要查找教师的教工号：");
			scanf("%d", &num);
			for (i = 0; i < TEACHER_COUNT; i++)
			{
				if (Teacher_Number[i] == num)
				{
					j = i;
					break;
				}
			}
			if (j == -1)
			{
				system("CLS");
				printf("|---未找到该教师的信息--------|\n");
			}
			else
			{
				system("CLS");
				printf("|-----该教师信息如下 ：----|\n");
			printf("|----------------------------|\n");
			printf("||***教工号 姓名 性别 职称 所属院系 电话 ||\n");
				printf("||***%d\t%s    \t%s\t%s\t%s\t%s\t%s ||\n", Teacher_Number[i],TName[i],TGender[i],TProfessional_Title[i],TSubordinate_Departments[i],Phone_Number[i]);
				
				printf("|----------------------------|\n");
			}
		}
			break;
		case 13:
			//按姓名查找某个教师信息
		{
			int w, m = -1, c;
			char name[50];
			printf("请输入要查找的教师姓名 ：");
			scanf("%s", &name);
			for (w = 0; w < TEACHER_COUNT; w++)
			{
				c = strcmp(TName[m], name);
				if (!c)
				{
					m = w;
					break;
				}
			}
			if (m == -1)
			{
				system("CLS");
				printf("|---未找到该教师信息---------| \n\n");
			}
			else
			{
				system("CLS");
				 printf("|-----该教师信息如下 ：----|\n");
			printf("|----------------------------|\n");
			printf("||***教工号 姓名 性别 职称 所属院系 电话 ||\n");
				printf("||***%d\t%s    \t%s\t%s\t%s\t%s\t%s ||\n", Teacher_Number[w],TName[w],TGender[w],TProfessional_Title[w],TSubordinate_Departments[w],Phone_Number[w]);				printf("|----------------------------|\n");
			}
		}
			break;
		
		case 14:	
		{
			int a;
			printf("请输入你要修改信息的教师教工号:\n");
			scanf("%d", &a);
			for (i = 0; i < TEACHER_COUNT; i++)
			{
				if (a == Teacher_Number[i])
				{
					printf("请输入该教师的新信息：\n");
					printf("修改教工号为 :");
					fflush(stdin);
					scanf("%d", & Teacher_Number[i]);
					printf("修改姓名为  :\t");
					fflush(stdin);
					scanf("%s", TName[i]);
					printf("修改性别 :\t");
					fflush(stdin);
					scanf("%s", TGender[i]);
					printf("修改职称 :\t");
					fflush(stdin);
					scanf("%s", TProfessional_Title[i]);
					printf("修改所属院系:\t");
					fflush(stdin);
					scanf("%s", TSubordinate_Departments[i]);
					printf("修改电话 :\t");
					fflush(stdin);
					scanf("%s", Phone_Number[i]);
					break;
				}
			}
			if (i == TEACHER_COUNT)
			{
				system("CLS");
				printf("|-------输入的教工号有误-------|\n");
			}
			else
			{
				system("CLS");
				printf("|----------------------------|\n");
				printf("|------ 信息修改完毕---------|\n");
				printf("|----------------------------|\n");				
			}			
		}
			break;
		case 15:
		{
			//按姓名修改某个教师信息
			printf("请输入你要修改信息的教师姓名:\n");
			scanf("%s", b);
			for (i = 0; i < TEACHER_COUNT; i++)
			{
				if (strcmp(b, TName[i])== 0)
				{
					printf("请输入该教师的新信息：\n");
					printf("修改教工号为 :");
					fflush(stdin);
					scanf("%d", & Teacher_Number[i]);
					printf("修改姓名为  :\t");
					fflush(stdin);
					scanf("%s", TName[i]);
					printf("修改性别 :\t");
					fflush(stdin);
					scanf("%s", TGender[i]);
					printf("修改职称 :\t");
					fflush(stdin);
					scanf("%s", TProfessional_Title[i]);
					printf("修改所属院系:\t");
					fflush(stdin);
					scanf("%s", TSubordinate_Departments[i]);
					printf("修改电话 :\t");
					fflush(stdin);
					scanf("%s", Phone_Number[i]);
					break;
				}
			}
				if (i == TEACHER_COUNT)
				{
					system("CLS");
					printf("|------输入的姓名有误--------|\n");
				}
				else
				{
					system("CLS");
					printf("|----------------------------|\n");
					printf("|------ 信息修改完毕---------|\n");
					printf("|----------------------------|\n");
				}
			}		
			break;
		case 16:
			//按教工号删除某个教师信息
			printf("请输入要删除信息的教师教工号:\n");
			scanf("%d", &a);
			for(i=0;i<geshu;i++)
			{
				if(a== Teacher_Number[i])
					break;
			}
			if(i==geshu)
			{
				system("CLS");
				printf("|-------输入的教工号有误------|\n");
			}
			else
			{
			    geshu--;	
			    system("CLS");
				printf("|-----删除后的教师信息如下 ：----|\n");
				printf("|----------------------------|\n");
				printf("||***教工号 姓名 性别 职称 所属院系 电话 ||\n");
				for (i = 0; i < geshu; i++)
				{
					 j = i + 1;
				     if (a == Teacher_Number[i])
					 {
						a = Teacher_Number[i]; 
						Teacher_Number[i] = Teacher_Number[j];
						strcpy(TName[i],TName[j]);
						strcpy(TGender[i],TGender[j]);
						strcpy(TProfessional_Title[i],TProfessional_Title[j]);
						strcpy(TSubordinate_Departments[i],TSubordinate_Departments[j]);
						printf("||***%d\t%s    \t%s\t%s\t%s\t%s ||\n", Teacher_Number[i],TName[i],TGender[i],TProfessional_Title[i],TSubordinate_Departments[i],Phone_Number[i]);
					 }
					else
					{
						printf("||***%d\t%s    \t%s\t%s\t%s\t%s ||\n", Teacher_Number[i],TName[i],TGender[i],TProfessional_Title[i],TSubordinate_Departments[i],Phone_Number[i]);					}
				}
			}
				printf("|----------------------------|\n");

			break;
		case 17:
			//按姓名删除某个教师信息
			printf("请输入删除的教师姓名：");
			scanf("%s", b);
			for(i=0;i<Tgeshu;i++)
			{
				if(strcmp(TName[i],b)==0)
					break;
			}
			if(i==geshu)
			{
				system("CLS");
				printf("|-------输入的姓名有误------|\n");
			}
			else
			{
			   geshu--;
			   system("CLS");
			   printf("|-----删除后的教师信息如下 ：----|\n");
				printf("|----------------------------|\n");
				printf("||***教工号 姓名 性别 职称 所属院系 电话 ||\n");
			   for (i = 0; i<Tgeshu; i++)
			   {
				  j = i + 1;
				 if (strcmp(TName[i], b) == 0)
				 {
					Teacher_Number[i] = Teacher_Number[j];
					strcpy(TName[i],TName[j]);
					strcpy(TGender[i],TGender[j]);
					strcpy(TProfessional_Title[i],TProfessional_Title[j]);
					strcpy(TSubordinate_Departments[i],TSubordinate_Departments[j]);

					printf("||***%d\t%s    \t%s\t%s\t%s\t%s||\n", Teacher_Number[i],TName[i],TGender[i],TProfessional_Title[i],TSubordinate_Departments[i],Phone_Number[i]);
				 }
				else
					printf("||***%d\t%s    \t%s\t%s\t%s\t%s ||\n", Teacher_Number[i],TName[i],TGender[i],TProfessional_Title[i],TSubordinate_Departments[i],Phone_Number[i]);			   }
			}
			printf("|----------------------------|\n");
			break;	
		default:
			system("CLS");
			printf("|----输入的菜单项有误，请重新输入！-----|\n");
		}
	}
	    printf("|----------------------------|\n");
		printf("|-----程序结束，谢谢使用-----|\n");
		printf("|----------------------------|\n");
	return 0;
}

