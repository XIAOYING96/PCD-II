//#include<stdio.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//typedef struct {
//	char perfomerName[20];
//	char songName[20];
//	int year;
//	int playingTime;
//}Songs;
//
//int main() {
//	Songs songList[10] = { {"Ed sheeran","Perfect place",2019,253 },{"Taylor Swift","Love Story",2008,260},{"Taylor Swift","Semtember",2018,225},{"Bruno Mars","24K Magic",2016,249},{"Taylor Swift","Style",2014, 194},{ "Ed Sheeran", "Happier", 2018, 203 }, {"Taylor Swift", "You belong with me" ,2008,235},
//		   {"Bruno Mars", "Just the way you are", 2010, 190 }, { "Ed Sheeran", "Lege home", 2011, 193 },{ "Bruno Mars", "It will rain", 2011, 195 } };
//
//	int i = 0;
//	int totalSec = 0, s, e, result;
//	char name[20];
//
//	//a
//	printf("\t\t\tMY COLLECTION OF SONGS\n");
//	printf("--------------------------------------------------------------------------\n");
//	printf("Performer\t\tSong\t\t\tYear\tPlaying Time\n");
//	printf("--------------------------------------------------------------------------\n");
//	totalSec = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%-8s\t%-29s\t%d\t  %ds\n", songList[i].perfomerName, songList[i].songName, songList[i].year, songList[i].playingTime);
//		totalSec = songList[i].playingTime + totalSec;
//	}
//	printf("-----------------------------------------------------------------------\n");
//	printf("\tTotal Playing Time = %d seconds(%d minutes %d sec)\n\n", totalSec, totalSec / 60, totalSec % 60);
//
//	//b
//	printf("\t\tList of songs - 2015\n");
//	printf("--------------------------------------------------------------------------\n");
//	printf("Perfomer\t\tSong\t\t Year\t\tPlaying Time\n");
//	printf("---------------------------------------------------------------------------\n");
//	int count = 0;
//	for (i = 0; i < 10; i++) {
//		if (songList[i].year <= 2015) {
//			printf("%-8s\t\t%-29s\t%d\t%ds\n", songList[i].perfomerName, songList[i].songName, songList[i].year, songList[i].playingTime);
//			count++;
//		}
//	}
//	printf("---------------------------------------------------------------------\n");
//	printf("\t\t%d songs is listed\n", count);
//
//	//c
//	count = 0;
//	printf("Perfomer's Name to search >\n");
//	scanf("%[^\n]", name);
//
//	printf("Song\t\tYear relesed\t\tPlaying Time\n");
//	printf("--------------------------------------------\n");
//
//	for (i = 0; i < 10; i++) {
//		if (strcmp(name, songList[i].perfomerName) == 0) {
//			printf("%-8s\t%d\t%ds\n", songList[i].perfomerName, songList[i].year, songList[i].playingTime);
//			count++;
//		}
//	}
//	printf("--------------------------------------------\n");
//	printf("\t%d records found Perfomer's Name = %s\n ", count, name);
//
//	totalSec = 0;
//	rewind(stdin);
//	printf("Searching based on 2 criteria :\n\n");
//
//	printf("1.Perfomer's Name to search >\n");
//	scanf("%[^\n]",name);
//	rewind(stdin);
//
//	printf("2.Playing Time range - From >\n");
//	scanf("%d", &s);
//	printf("                       -To>\n");
//	scanf("%d", &e);
//
//	printf("Perfomer\t\tSong\t\tYear\t\tPlaying Time\n");
//	printf("---------------------------------------------------------\n");
//	for (i = 0; i < 10; i++) {
//		if ((strcmp(name, songList[i].perfomerName) == 0) && songList[i].playingTime >= s && songList[i].playingTime <= e) {
//			printf("%-8s\t\t%-29s\t%d\t%ds\n", songList[i].perfomerName, songList[i].songName, songList[i].year, songList[i].playingTime);
//			totalSec += songList[i].playingTime;
//		}
//		printf("-------------------------------------------------------------------\n");
//		printf("\n\tTotal Playing Time = %d seconds (%d min %sec)",totalSec,totalSec/60,totalSec%60);
//	}
//}
