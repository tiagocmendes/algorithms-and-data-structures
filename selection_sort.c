#include <stdio.h>

void selection_sort(T *data,int first,int one_after_last)
{
    int i,j,k;
    for(i = one_after_last - 1;i > first;i--)
    {
        for(j = first,k = 1;k <= i;k++)
            if(data[k] > data[j])
                j = k;
        if(j < i)
        {
            T tmp = data[i];
            data[i] = data[j];
            data[j] = tmp;
        }
    }
}


int main(int argc, char **argv)
{
    int numbers[] = {3,4,6,1,2,67,8,1,2,4,5,1,24,15,35,12,21,124,123,1255,122,6123,36,8,1,7,8,2,3,7,1,2,57,23,1235,125,124,1124,123,12,12,12,125,351,75,23,65};
    
    selection_sort(numbers, 0, 17);

    printf("\n\nProgramm finished with exit code 0\n");
    return 0;
}