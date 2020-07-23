#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int u;
int jadval(char mat[3][3])
{
    printf("\n     1      2      3 \n");
    printf("\n1.   %3c   |%3c   |%3c   ", mat[0][0], mat[0][1], mat[0][2]);
    printf("\n     _________________");
    printf("\n2,   %3c   |%3c   |%3c   ", mat[1][0], mat[1][1], mat[1][2]);
    printf("\n     _________________");
    printf("\n3.   %3c   |%3c   |%3c   ", mat[2][0], mat[2][1], mat[2][2]);
    printf("\n \n \n  ");
}
int check(char mat[3][3])
{
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            if (mat[a][b] == '\0')
            {
                u = 1;
                break;
            }
            else
            {
                u = 0;
            }
        }
        if (u == 1)
        {
            break;
        }
    }
}
int dooz(char xo, char y)
{
    int g, p;
    int i, j;
    int k, l;
    char mat[3][3] = {};
    jadval(mat);
    srand(time(NULL) * 13);
    if (rand() % 2 == 0)
    {
        printf("\n you first!\n \n \n");
        while (1 > 0)
        {
            printf("\n lotfan satr o sotun ra vared konid : ");
            scanf("%d %d", &k, &l);
            mat[k - 1][l - 1] = xo;
            jadval(mat);
            for (int t = 0; t < 3; t++)
            {
                if ((mat[t][0] == mat[t][1]) && (mat[t][0] == mat[t][2]) && (mat[t][0] != '\0'))
                {
                    printf("\n you win1");
                    return -1;
                }
            }
            for (int h = 0; h < 3; h++)
            {
                if ((mat[0][h] == mat[1][h]) && (mat[0][h] == mat[2][h]) && (mat[0][h] != '\0'))
                {
                    printf("\n you win");
                    return -1;
                }
            }
            if (((mat[0][0] == mat[1][1]) && (mat[0][0] == mat[2][2]) && (mat[0][0] != '\0')) || ((mat[2][0] == mat[1][1]) && (mat[2][0] == mat[0][2]) && (mat[1][1] != '\0')))
            {
                printf("\n you win");
                return -1;
            }
            check(mat);
            if (u == 0)
            {
                printf("\n draw");
                return -1;
            }
            while (1 > 0)
            {
                g++;
                p++;
                srand(time(NULL) * p);
                i = rand() % 3;
                srand(time(NULL) * g);
                j = rand() % 3;
                if (mat[i][j] == '\0')
                {
                    mat[i][j] = y;
                    jadval(mat);
                    for (int t = 0; t < 3; t++)
                    {
                        if ((mat[t][0] == mat[t][1]) && (mat[t][0] == mat[t][2]) && (mat[t][0] != '\0'))
                        {
                            printf("\n you loss");
                            return -1;
                        }
                    }
                    for (int h = 0; h < 3; h++)
                    {
                        if ((mat[0][h] == mat[1][h]) && (mat[0][h] == mat[2][h]) && (mat[0][h] != '\0'))
                        {
                            printf("\n you loss");
                            return -1;
                        }
                    }
                    if (((mat[0][0] == mat[1][1]) && (mat[0][0] == mat[2][2]) && (mat[0][0] != '\0')) || ((mat[2][0] == mat[1][1]) && (mat[2][0] == mat[0][2]) && (mat[1][1] != '\0')))
                    {
                        printf("\n you loss");
                        return -1;
                    }
                    check(mat);
                    if (u == 0)
                    {
                        printf("\n draw");
                        return -1;
                    }
                    break;
                }
                else
                {
                }
            }
        }
    }
    else
    {
        printf("\n my turn!\n \n \n");
        while (1 > 0)
        {
            while (1 > 0)
            {
                g++;
                p++;
                srand(time(NULL) * p);
                i = rand() % 3;
                srand(time(NULL) * g);
                j = rand() % 3;
                if (mat[i][j] == '\0')
                {
                    mat[i][j] = y;
                    jadval(mat);
                    for (int t = 0; t < 3; t++)
                    {
                        if ((mat[t][0] == mat[t][1]) && (mat[t][0] == mat[t][2]) && (mat[t][0] != '\0'))
                        {
                            printf("\n you loss");
                            return -1;
                        }
                    }
                    for (int h = 0; h < 3; h++)
                    {
                        if ((mat[0][h] == mat[1][h]) && (mat[0][h] == mat[2][h]) && (mat[0][h] != '\0'))
                        {
                            printf("\n you loss");
                            return -1;
                        }
                    }
                    if (((mat[0][0] == mat[1][1]) && (mat[0][0] == mat[2][2]) && (mat[0][0] != '\0')) || ((mat[2][0] == mat[1][1]) && (mat[2][0] == mat[0][2]) && (mat[1][1] != '\0')))
                    {
                        printf("\n you loss");
                        return -1;
                    }
                    check(mat);
                    if (u == 0)
                    {
                        printf("\n draw");
                        return -1;
                    }
                    break;
                }
                else
                {
                }
            }
            while (1 > 0)
            {
                printf("\n lotfan satr o sotun ra vared konid : ");
                scanf("%d %d", &k, &l);
                mat[k - 1][l - 1] = xo;
                jadval(mat);
                for (int t = 0; t < 3; t++)
                {
                    if ((mat[t][0] == mat[t][1]) && (mat[t][0] == mat[t][2]) && (mat[t][0] != '\0'))
                    {
                        printf("\n you win!");
                        return -1;
                    }
                }
                for (int h = 0; h < 3; h++)
                {
                    if ((mat[0][h] == mat[1][h]) && (mat[0][h] == mat[2][h]) && (mat[0][h] != '\0'))
                    {
                        printf("\n you win!");
                        return -1;
                    }
                }
                if (((mat[0][0] == mat[1][1]) && (mat[0][0] == mat[2][2]) && (mat[0][0] != '\0')) || ((mat[2][0] == mat[1][1]) && (mat[2][0] == mat[0][2]) && (mat[1][1] != '\0')))
                {
                    printf("\n you win!");
                    return -1;
                }
                check(mat);
                if (u == 0)
                {
                    printf("\n draw!");
                    return -1;
                }
                break;
            }
        }
    }
}
int main()
{
    char xo;
    printf("\n choose X or O : ");
    scanf("%c", &xo);
    if (xo == 'X')
    {
        char y = 'O';
        dooz(xo, y);
    }
    else
    {
        if (xo == 'O')
        {
            char y = 'X';
            dooz(xo, y);
        }
        else
        {
            printf("\n bayad X ya O entekhab mikardi,dobare talash konid!\n");
            return -1;
        }
    }
}