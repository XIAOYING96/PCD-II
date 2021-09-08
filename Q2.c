//#include<stdio.h>
//#pragma warning(disable:4996)
//
//typedef struct {
//	int x, y;
//} Coord;
//
//int main() {
//	FILE* sp;
//	Coord point = { '7', '8' }; 
//
//	sp = fopen("COORD.bin", "wb");
//	fwrite(&point.x, sizeof(Coord), 1, sp); 
//	fclose(sp);
//}