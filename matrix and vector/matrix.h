using namespace std;
int** allocate(const int rM, const int cM);
void ramdom(int** M, const int rM, const int cM);
void zeros(int** M, const int rM, const int cM);
void add(int** M1, const int rM1, const int cM1, int** M2, const int rM2, const int cM2, int** M3, const int rM3, const int cM3);
void mult(int** M1, const int rM1, const int cM1, int** M4, const int rM4, const int cM4, int** M5, const int rM5, const int cM5);
void printMatrix(int** C, const int rC, const int cC);
void deallocate(int** M, const int rM);