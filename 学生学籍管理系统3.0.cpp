#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define  STUDENT_COUNT  3 //�궨��ѧ������ �����޸�
#define  TEACHER_COUNT  3//�궨���ʦ���� 

int numbers[STUDENT_COUNT];//�洢ѧ�ŵ�һά����
char names[STUDENT_COUNT][50];//�洢ѧ�������Ķ�ά����
double maths[STUDENT_COUNT];//�洢ѧ����ѧ�ɼ���һά����
double english[STUDENT_COUNT];//�洢ѧ��Ӣ��ɼ���һά����
double computer[STUDENT_COUNT];//�洢ѧ��������ɼ���һά����
double sums[STUDENT_COUNT];//�洢ѧ���ܳɼ���һά����
char Gender[STUDENT_COUNT][50];//�洢�Ա�Ķ�ά���� 
char Birthday[STUDENT_COUNT][50];//�洢�������ڵĶ�ά����
char ID_Number[STUDENT_COUNT][50];//�洢���֤�ŵĶ�ά���� 
char Time_Enrolment[STUDENT_COUNT][50];//�洢��ѧ���ڵĶ�ά���� 
char  politics_Status[STUDENT_COUNT][50];//�洢������ò�Ķ�ά����
char Home_Add[STUDENT_COUNT][50];//�洢��ͥסַ�Ķ�ά����
char Native_Place[STUDENT_COUNT][50];//�洢����Ķ�ά���� 
char Postal_Code[STUDENT_COUNT][50];//�洢��������Ķ�ά���� 
char Ethnic[STUDENT_COUNT][50];//�洢����Ķ�ά���� 

int Teacher_Number[TEACHER_COUNT];//�洢�̹��ŵ�һά����
char TName[TEACHER_COUNT][50];//�洢���ֵĶ�ά����
char TGender[TEACHER_COUNT][50];//�洢�Ա�Ķ�ά���� 
char TProfessional_Title[TEACHER_COUNT][50];//�洢ְ�ƵĶ�ά����
char TSubordinate_Departments[TEACHER_COUNT][50];//�洢����Ժϵ�Ķ�ά����
char Phone_Number[TEACHER_COUNT][50];//�洢�绰�Ķ�ά����

int main(void)
{
	int a, j, c, d, e, f,u,p;//������6����ʹ�õı���
	int geshu = STUDENT_COUNT;//ɾ�����ܴ��ı���
	int Tgeshu = TEACHER_COUNT; 
	char b[20];//�䵱��ʱ�����������ַ�����

	int choice;//�������û�����Ĳ˵�ѡ��
	int i;//���������ڿ���forѭ���ĳ�ʼֵ

		
	while (1)//��ʾ�˵���ֱ���û�����0Ϊֹ
	{
		printf("|---------��ӭʹ��ѧ��ѧ������ϵͳ----------|\n");
		printf("|---------��1 ��9��ѧ�����-----------------|\n");
		printf("|--------1��������ѧ����Ϣ------------------|\n");
		printf("|--------2�������ѧ����Ϣ------------------|\n");	
		printf("|--------3��ѧ�Ų���ĳ��ѧ����Ϣ------------|\n");
		printf("|--------4����������ĳ��ѧ����Ϣ------------|\n");
		printf("|--------5���ܳɼ���ѧ������----------------|\n");
		printf("|--------6��ѧ���޸�ĳ��ѧ����Ϣ------------|\n");
		printf("|--------7�������޸�ĳ��ѧ����Ϣ------------|\n");
		printf("|--------8��ѧ��ɾ��ĳ��ѧ����Ϣ------------|\n");
		printf("|--------9������ɾ��ĳ��ѧ����Ϣ------------|\n");
		printf("|-------------------------------------------|\n");
		printf("|---------��10 ��17����ʦ���---------------|\n");
		printf("|--------10�������н�ʦ��Ϣ-----------------|\n");
		printf("|--------11������н�ʦ��Ϣ-----------------|\n");	
		printf("|--------12���̹��Ų���ĳ����ʦ��Ϣ---------|\n");
		printf("|--------13����������ĳ����ʦ��Ϣ-----------|\n");
		printf("|--------14���̹����޸�ĳ����ʦ��Ϣ---------|\n");
		printf("|--------15�������޸�ĳ����ʦ��Ϣ-----------|\n");
		printf("|--------16���̹���ɾ��ĳ����ʦ��Ϣ---------|\n");
		printf("|--------17������ɾ��ĳ����ʦ��Ϣ-----------|\n");
		printf("|-------------------------------------------|\n");	
		printf("|--------0�˳�����--------------------------|\n");
		printf("|-------------------------------------------|\n");
		printf("|--------����������ѡ��---------------------|\n");
		scanf("%d", &choice);//�����û�������
		if (choice == 0)
		{
			break;//���ڽ��������������ѭ��
		}
		switch (choice)
		{
		case 0:
			break;
		case 1:
			//��������ѧ����Ϣ

			system("CLS");//����ǰ������������
			for (i = 0; i < STUDENT_COUNT; i++)
			{
				printf("�������%dλѧ������Ϣ\n", i + 1);
				printf("ѧ�� :\t");
				fflush(stdin);
				scanf("%d", &numbers[i]);
				printf("���� :\t");
				fflush(stdin);
				scanf("%s", names[i]);
				printf("Ӣ�� :\t");
				fflush(stdin);
				scanf("%lf", &english[i]);
				printf("��ѧ :\t");
				fflush(stdin);
				scanf("%lf", &maths[i]);
				printf("�����:\t");
				fflush(stdin);
				scanf("%lf", &computer[i]);		
				sums[i] = english[i] + maths[i] + computer[i];
				printf("�Ա�:\t");
				fflush(stdin);
				scanf("%s",Gender[i]);
				printf("��������:\t");
				fflush(stdin);
				scanf("%s",Birthday[i]);
				printf("���֤��:\t");
				fflush(stdin);
				scanf("%s",ID_Number[i]);
				printf("��ѧ����:\t");
				fflush(stdin);
				scanf("%s",Time_Enrolment[i]);
				printf("������ò:\t");
				fflush(stdin);
				scanf("%s",politics_Status[i]);
				printf("��ͥסַ:\t");
				fflush(stdin);
				scanf("%s",Home_Add[i]);
				printf("����:\t");
				fflush(stdin);
				scanf("%s",Native_Place[i]);
				printf("��������:\t");
				fflush(stdin);
				scanf("%s",Postal_Code[i]);
				printf("����:\t");
				fflush(stdin);
				scanf("%s",Ethnic[i]);																												
				system("CLS");
			}		
			printf("|----------------------------|\n");
			printf("|------ ѧ����Ϣ�������-----|\n");
			printf("|----------------------------|\n");
			break;
		case 2:			
			//�������ѧ����Ϣ
			system("CLS");//����ǰ������������
			printf("|-----����ѧ����Ϣ���� ��----|\n");
			printf("|----------------------------|\n");
			printf("||***ѧ�� ���� Ӣ��    ��ѧ  �����   �ܳɼ�   �Ա�  �������� ���֤�� ��ѧ���� ������ò ��ͥסַ   ����  ��������  ���� ||\n");
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
			//��ѧ�Ų���ĳ��ѧ����Ϣ
			int j = -1, num;
			printf("������Ҫ����ѧ����ѧ�ţ�");
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
				printf("|---δ�ҵ���ѧ������Ϣ--------|\n");
			}
			else
			{
				system("CLS");
				printf("|------��ѧ����Ϣ���£�------|\n");
				printf("|----------------------------|\n");
				printf("||***ѧ��\t\t����\t\tӢ��\t��ѧ\t�����\t�ܳɼ�\t�Ա�\t��������\t���֤��\t��ѧ����\t������ò\t��ͥסַ\t����\t��������\t���� ||\n");
				printf("||***%d\t%s    \t%.1f\t%.1f\t%.1f\t%.1f\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s ||\n", 
				numbers[i], names[i], english[i], maths[i], computer[i], sums[i],Gender[i],Birthday[i],ID_Number[i],Time_Enrolment[i]
				,politics_Status[i],Home_Add[i],Native_Place[i],Postal_Code[i],Ethnic[i]);
				printf("|----------------------------|\n");
			}
		}
			break;
		case 4:
			//����������ĳ��ѧ����Ϣ
		{
			int w, m = -1, c;
			char name[50];
			printf("������Ҫ���ҵ�ѧ������ ��");
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
				printf("|---δ�ҵ���ѧ����Ϣ---------| \n\n");
			}
			else
			{
				system("CLS");
				printf("|---��ѧ���ɼ���Ϣ����-------|\n");
				printf("|----------------------------|\n");
				printf("||***ѧ��\t\t����\t\tӢ��\t��ѧ\t�����\t�ܳɼ�\t�Ա�\t��������\t���֤��\t��ѧ����\t������ò\t��ͥסַ\t����\t��������\t���� ||\n");
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
			printf("|-���ܳɼ��ߵ�������ѧ����Ϣ����-|\n");
			printf("|----------------------------|\n");
			printf("||***ѧ��\t\t����\t\tӢ��\t��ѧ\t�����\t�ܳɼ� ||\n");
			for (i = 0; i < STUDENT_COUNT; i++)
			{
				
				printf("||***%d\t%s    \t%.1f\t%.1f\t%.1f\t%.1f ||\n", numbers[i], names[i], english[i], maths[i], computer[i], sums[i]);
			}
			printf("|----------------------------|\n");
			//���ܳɼ���ѧ������

			break;
		case 6:	
		{
			int a;
			printf("��������Ҫ�޸���Ϣ��ѧ��ѧ��:\n");
			scanf("%d", &a);
			for (i = 0; i < STUDENT_COUNT; i++)
			{
				if (a == numbers[i])
				{
					printf("�������ѧ��������Ϣ��\n");
					printf("�޸�ѧ��Ϊ :");
					fflush(stdin);
					scanf("%d", &numbers[i]);
					printf("�޸�����Ϊ  :\t");
					fflush(stdin);
					scanf("%s", names[i]);
					printf("�޸�Ӣ��ɼ�  :\t");
					fflush(stdin);
					scanf("%lf", &english[i]);
					printf("�޸���ѧ�ɼ�  :\t");
					fflush(stdin);
					scanf("%lf", &maths[i]);
					printf("�޸ļ�����ɼ�:\t");
					fflush(stdin);
					scanf("%lf", &computer[i]);
					sums[i] = english[i] + maths[i] + computer[i];
					printf("�޸��Ա�\t");
					fflush(stdin);
					scanf("%s",Gender[i]);
					printf("�޸ĳ������ڣ�\t");
					fflush(stdin);
					scanf("%s",Birthday[i]);
					printf("�޸����֤�ţ�\t");
					fflush(stdin);
					scanf("%s",ID_Number[i]);
					printf("�޸���ѧ���ڣ�\t");
					fflush(stdin);
					scanf("%s",Time_Enrolment[i]);
					printf("�޸�������ò��\t");
					fflush(stdin);
					scanf("%s",politics_Status[i]);
					printf("�޸ļ�ͥסַ��\t");
					fflush(stdin);
					scanf("%s",Home_Add[i]);
					printf("�޸ļ��᣺\t");
					fflush(stdin);
					scanf("%s",Native_Place[i]);
					printf("�޸��������룺\t");
					fflush(stdin);
					scanf("%s",Postal_Code[i]);
					printf("�޸����壺\t");
					fflush(stdin);
					scanf("%s",Ethnic[i]);
					break;
				}
			}
			if (i == STUDENT_COUNT)
			{
				system("CLS");
				printf("|-------�����ѧ������-------|\n");
			}
			else
			{
				system("CLS");
				printf("|----------------------------|\n");
				printf("|------ ��Ϣ�޸����---------|\n");
				printf("|----------------------------|\n");				
			}			
		}
			break;
		case 7:
		{
			//�������޸�ĳ��ѧ����Ϣ
			printf("��������Ҫ�޸���Ϣ��ѧ������:\n");
			scanf("%s", b);
			for (i = 0; i < STUDENT_COUNT; i++)
			{
				if (strcmp(b, names[i]) == 0)
				{
					printf("�������ѧ��������Ϣ��\n");
					printf("�޸�ѧ��Ϊ :");
					fflush(stdin);
					scanf("%d", &numbers[i]);
					printf("�޸�����Ϊ :\t");
					fflush(stdin);
					scanf("%s", names[i]);
					printf("�޸�Ӣ��ɼ� :\t");
					fflush(stdin);
					scanf("%lf", &english[i]);
					printf("�޸���ѧ�ɼ� :\t");
					fflush(stdin);
					scanf("%lf", &maths[i]);
					printf("�޸ļ�����ɼ�:\t");
					fflush(stdin);
					scanf("%lf", &computer[i]);
					sums[i] = english[i] + maths[i] + computer[i];
					printf("�޸��Ա�\t");
					fflush(stdin);
					scanf("%s",Gender[i]);
					printf("�޸ĳ������ڣ�\t");
					fflush(stdin);
					scanf("%s",Birthday[i]);
					printf("�޸����֤�ţ�\t");
					fflush(stdin);
					scanf("%s",ID_Number[i]);
					printf("�޸���ѧ���ڣ�\t");
					fflush(stdin);
					scanf("%s",Time_Enrolment[i]);
					printf("�޸�������ò��\t");
					fflush(stdin);
					scanf("%s",politics_Status[i]);
					printf("�޸ļ�ͥסַ��\t");
					fflush(stdin);
					scanf("%s",Home_Add[i]);
					printf("�޸ļ��᣺\t");
					fflush(stdin);
					scanf("%s",Native_Place[i]);
					printf("�޸��������룺\t");
					fflush(stdin);
					scanf("%s",Postal_Code[i]);
					printf("�޸����壺\t");
					fflush(stdin);
					scanf("%s",Ethnic[i]);
					break;
				}
			}
				if (i == STUDENT_COUNT)
				{
					system("CLS");
					printf("|------�������������--------|\n");
				}
				else
				{
					system("CLS");
					printf("|----------------------------|\n");
					printf("|------ ��Ϣ�޸����---------|\n");
					printf("|----------------------------|\n");
				}
			}		
			break;
		case 8:
			//��ѧ��ɾ��ĳ��ѧ����Ϣ
			printf("������Ҫɾ����Ϣ��ѧ��ѧ��:\n");
			scanf("%d", &a);
			for(i=0;i<geshu;i++)
			{
				if(a==numbers[i])
					break;
			}
			if(i==geshu)
			{
				system("CLS");
				printf("|-------�����ѧ������------|\n");
			}
			else
			{
			    geshu--;	
			    system("CLS");
				printf("|---ɾ�����ѧ����Ϣ����-----|\n");
				printf("|----------------------------|\n");
				printf("||***ѧ��\t\t����\t\tӢ��\t��ѧ\t�����\t�ܳɼ�\t�Ա�\t��������\t���֤��\t��ѧ����\t������ò\t��ͥסַ\t����\t��������\t���� ||\n");
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
			//������ɾ��ĳ��ѧ����Ϣ
			printf("������ɾ����ѧ��������");
			scanf("%s", b);
			for(i=0;i<Tgeshu;i++)
			{
				if(strcmp(names[i],b)==0)
					break;
			}
			if(i==Tgeshu)
			{
				system("CLS");
				printf("|-------�������������------|\n");
			}
			else
			{
			   geshu--;
			   system("CLS");
			   printf("|-----ɾ�����ѧ����Ϣ���£�-|\n");
			   printf("|----------------------------|\n");
			   printf("||***ѧ��\t\t����\t\tӢ��\t��ѧ\t�����\t�ܳɼ�\t�Ա�\t��������\t���֤��\t��ѧ����\t������ò\t��ͥסַ\t����\t��������\t���� ||\n");
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
		//�������н�ʦ��Ϣ
		system("CLS");//����ǰ������������
		for (i = 0; i < TEACHER_COUNT; i++)
		{
			printf("�������%dλ��ʦ����Ϣ\n", i + 1);
			printf("�̹��� :\t");
			fflush(stdin);
			scanf("%d", &Teacher_Number[i]);
			printf("���� :\t");
			fflush(stdin);
			scanf("%s", TName[i]);
			printf("�Ա�:\t");
			fflush(stdin);
			scanf("%s", TGender[i]);
			printf("ְ�� :\t");
			fflush(stdin);
			scanf("%s", TProfessional_Title[i]);
			printf("����Ժϵ :\t");
			fflush(stdin);
			scanf("%s", TSubordinate_Departments[i]);
			printf("�绰 :\t");
			fflush(stdin);
			scanf("%s", Phone_Number[i]);
			system("CLS");
		}		
		printf("|----------------------------|\n");
		printf("|-----��ʦ��Ϣ�������-----|\n");
		printf("|----------------------------|\n");
		break;
		case 11:			
			//���ȫ���Ľ�ʦ��Ϣ 
			system("CLS");//
			printf("|-----���н�ʦ��Ϣ���� :----|\n");
			printf("|----------------------------|\n");
			printf("||***�̹��� ���� �Ա� ְ�� ����Ժϵ �绰 ||\n");
			for (i = 0; i < TEACHER_COUNT; ++i)
			{
				printf("||***%d\t%s    \t%s\t%s\t%s\t%s ||\n", Teacher_Number[i],TName[i],TGender[i],TProfessional_Title[i],TSubordinate_Departments[i],Phone_Number[i]);
			}
			printf("|----------------------------|\n");
			break;
			case 12:
		{
			//���̹��Ų���ĳ����ʦ��Ϣ
			int j = -1, num;
			printf("������Ҫ���ҽ�ʦ�Ľ̹��ţ�");
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
				printf("|---δ�ҵ��ý�ʦ����Ϣ--------|\n");
			}
			else
			{
				system("CLS");
				printf("|-----�ý�ʦ��Ϣ���� ��----|\n");
			printf("|----------------------------|\n");
			printf("||***�̹��� ���� �Ա� ְ�� ����Ժϵ �绰 ||\n");
				printf("||***%d\t%s    \t%s\t%s\t%s\t%s\t%s ||\n", Teacher_Number[i],TName[i],TGender[i],TProfessional_Title[i],TSubordinate_Departments[i],Phone_Number[i]);
				
				printf("|----------------------------|\n");
			}
		}
			break;
		case 13:
			//����������ĳ����ʦ��Ϣ
		{
			int w, m = -1, c;
			char name[50];
			printf("������Ҫ���ҵĽ�ʦ���� ��");
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
				printf("|---δ�ҵ��ý�ʦ��Ϣ---------| \n\n");
			}
			else
			{
				system("CLS");
				 printf("|-----�ý�ʦ��Ϣ���� ��----|\n");
			printf("|----------------------------|\n");
			printf("||***�̹��� ���� �Ա� ְ�� ����Ժϵ �绰 ||\n");
				printf("||***%d\t%s    \t%s\t%s\t%s\t%s\t%s ||\n", Teacher_Number[w],TName[w],TGender[w],TProfessional_Title[w],TSubordinate_Departments[w],Phone_Number[w]);				printf("|----------------------------|\n");
			}
		}
			break;
		
		case 14:	
		{
			int a;
			printf("��������Ҫ�޸���Ϣ�Ľ�ʦ�̹���:\n");
			scanf("%d", &a);
			for (i = 0; i < TEACHER_COUNT; i++)
			{
				if (a == Teacher_Number[i])
				{
					printf("������ý�ʦ������Ϣ��\n");
					printf("�޸Ľ̹���Ϊ :");
					fflush(stdin);
					scanf("%d", & Teacher_Number[i]);
					printf("�޸�����Ϊ  :\t");
					fflush(stdin);
					scanf("%s", TName[i]);
					printf("�޸��Ա� :\t");
					fflush(stdin);
					scanf("%s", TGender[i]);
					printf("�޸�ְ�� :\t");
					fflush(stdin);
					scanf("%s", TProfessional_Title[i]);
					printf("�޸�����Ժϵ:\t");
					fflush(stdin);
					scanf("%s", TSubordinate_Departments[i]);
					printf("�޸ĵ绰 :\t");
					fflush(stdin);
					scanf("%s", Phone_Number[i]);
					break;
				}
			}
			if (i == TEACHER_COUNT)
			{
				system("CLS");
				printf("|-------����Ľ̹�������-------|\n");
			}
			else
			{
				system("CLS");
				printf("|----------------------------|\n");
				printf("|------ ��Ϣ�޸����---------|\n");
				printf("|----------------------------|\n");				
			}			
		}
			break;
		case 15:
		{
			//�������޸�ĳ����ʦ��Ϣ
			printf("��������Ҫ�޸���Ϣ�Ľ�ʦ����:\n");
			scanf("%s", b);
			for (i = 0; i < TEACHER_COUNT; i++)
			{
				if (strcmp(b, TName[i])== 0)
				{
					printf("������ý�ʦ������Ϣ��\n");
					printf("�޸Ľ̹���Ϊ :");
					fflush(stdin);
					scanf("%d", & Teacher_Number[i]);
					printf("�޸�����Ϊ  :\t");
					fflush(stdin);
					scanf("%s", TName[i]);
					printf("�޸��Ա� :\t");
					fflush(stdin);
					scanf("%s", TGender[i]);
					printf("�޸�ְ�� :\t");
					fflush(stdin);
					scanf("%s", TProfessional_Title[i]);
					printf("�޸�����Ժϵ:\t");
					fflush(stdin);
					scanf("%s", TSubordinate_Departments[i]);
					printf("�޸ĵ绰 :\t");
					fflush(stdin);
					scanf("%s", Phone_Number[i]);
					break;
				}
			}
				if (i == TEACHER_COUNT)
				{
					system("CLS");
					printf("|------�������������--------|\n");
				}
				else
				{
					system("CLS");
					printf("|----------------------------|\n");
					printf("|------ ��Ϣ�޸����---------|\n");
					printf("|----------------------------|\n");
				}
			}		
			break;
		case 16:
			//���̹���ɾ��ĳ����ʦ��Ϣ
			printf("������Ҫɾ����Ϣ�Ľ�ʦ�̹���:\n");
			scanf("%d", &a);
			for(i=0;i<geshu;i++)
			{
				if(a== Teacher_Number[i])
					break;
			}
			if(i==geshu)
			{
				system("CLS");
				printf("|-------����Ľ̹�������------|\n");
			}
			else
			{
			    geshu--;	
			    system("CLS");
				printf("|-----ɾ����Ľ�ʦ��Ϣ���� ��----|\n");
				printf("|----------------------------|\n");
				printf("||***�̹��� ���� �Ա� ְ�� ����Ժϵ �绰 ||\n");
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
			//������ɾ��ĳ����ʦ��Ϣ
			printf("������ɾ���Ľ�ʦ������");
			scanf("%s", b);
			for(i=0;i<Tgeshu;i++)
			{
				if(strcmp(TName[i],b)==0)
					break;
			}
			if(i==geshu)
			{
				system("CLS");
				printf("|-------�������������------|\n");
			}
			else
			{
			   geshu--;
			   system("CLS");
			   printf("|-----ɾ����Ľ�ʦ��Ϣ���� ��----|\n");
				printf("|----------------------------|\n");
				printf("||***�̹��� ���� �Ա� ְ�� ����Ժϵ �绰 ||\n");
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
			printf("|----����Ĳ˵����������������룡-----|\n");
		}
	}
	    printf("|----------------------------|\n");
		printf("|-----���������ллʹ��-----|\n");
		printf("|----------------------------|\n");
	return 0;
}

