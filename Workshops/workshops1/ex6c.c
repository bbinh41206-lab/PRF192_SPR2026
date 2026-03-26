#include <stdio.h>
int main()
{
	float score1, score2, score3;
	char diemChu;
	float sumScore;
	printf("Nhap diem chuyen can, giua ky, cuoi ky: ");
	int kq = scanf(" %f %f %f ",&score1, &score2, &score3);
	if(kq != 1 || score1<0 || score1>10 || score2<0 || score2>10 || score2<0 || score2>10)
	{
		printf("Nhap sai!");
		return 0;
	}
	    sumScore = score1 * 0.1 + score2 * 0.3 + score3 * 0.6;
	    if (sumScore >= 8.5)
				{
					diemChu = 'A';
				}
				else
				{
					if (sumScore >= 7)
					{
						diemChu = 'B';
					}
					else
					{
						if (sumScore >= 5.5)
						{
							diemChu = 'C';
						}
						else
						{
							if (sumScore >= 4)
							{
								diemChu = 'D';
							}
							else
							{
								diemChu = 'F';
							}
						}
					}
				}
				printf ("Diem tong ket: %.2f \n",sumScore);
				printf ("Diem chu: %c \n", diemChu);
				if (score1 < 4 || score2 < 4 || score3 < 4 || diemChu == 'F')
				{
					printf ("Khong du dieu kien tot nghiep \n");
				}
				else
				{
					printf ("Khong du dieu kien tot nghiep \n");
				}
			}
			return 0;
		}
	}
}	