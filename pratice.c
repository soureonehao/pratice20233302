#include<stdio.h>//ע��gets();������scanf���ã��������Ҫ��scanf�������getchar();
float rankmax(float figure1, float figure2) {
	if (figure1 > figure2)
		return figure1;
	else
		return figure2;
}
float rankmin(float figure1, float figure2) {
	if (figure1  < figure2)
		return figure1;
	else
		return figure2;
}

char name(char name[80]) {
	int i = 0;
	char name4[3];
	if (name != 'A') {
		name4[i] = gets(name);
		return name;
	}
	else if (name == 'A') 
		return name4[0];
	else if (name == 'B') 
		return name4[1];
	else if (name == 'B')
		return name4[2];
	i++;		
}
//float arr(int a) {
//	int i = 0;
//	if (a == 1)
//		return name('A');
//	if (a == 2)
//		return name('B');
//	if (a == 3)
//		return name('C');
//}
char rank(float a) {
	float arr[3];
	int i = 0;
	arr[i] = a;
}

void main() {
	char name1[80], name2[80], name3[80];
	int i, j,a, rankx[3];
	float score[7], max, min, sum = 0.0, lscore, rank[3],box;
	for (i = 0; i < 3; i++) {
		printf("�������%dλ�����ߵ�������", i + 1);
		if (i == 0) {
			gets(name1);			
			printf("\n������%s�߸���ί�����֣�", name1);			
		}	
		 if (i == 1) { 
			 gets(name2);
			 printf("������%s�߸���ί�����֣�", name2);
			
		}		
		 if (i == 2) {
			 gets(name3);
			printf("\n������%s�߸���ί�����֣�", name3);
		}	
		 
		for (j = 0; j < 7; j++) {
			scanf_s("%f", &score[j]);
		}
		getchar();
		for (j = 0; j < 7; j++) {
			printf("%.2f  ", score[j]);
		}
		max = score[0];
		min = score[0];
		for (j = 1; j < 7; j++) {
			max = rankmax(max, score[j]);
		}
		printf("\n��%dλ����߷�Ϊ��%f",i + 1, max);
		for (j = 1; j < 7; j++) {
			min = rankmin(min, score[j]);
		}
		printf("\n��%dλ����ͷ�Ϊ��%f",i + 1, min);
		for (j = 0; j < 7; j++) {
			sum += score[j];
		}
		lscore = (sum - min - max) / 5;
		printf("\n��%dλ���������ĵ÷֣�%f",i + 1, lscore);
		rank[i] = lscore;
		rankx[i] = i++;
	}
	for (j = 0; j < 3; j++) {
		for (a = 0; a < 2; a++) {
			if (rank[a] < rank[a + 1])
				box = rank[i];
			rank[a] = rank[a + 1];
			rank[a + 1] = box;
		}
	}
	for (j = 0; j < 3; j++) {
		printf("��%dλ�ŵ�%d��", arr(rankx[j])                                                                      );
	}
	
}
