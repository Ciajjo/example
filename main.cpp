#include <iostream>
  (use "git restore <file>..." to discard changes in working directory)
using namespace std;

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        // 每次遍历后，最大的元素会冒泡到最后
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换相邻元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {12, 4, 89, 21, 78};
    int size = sizeof arr / sizeof arr[0];
    sort(arr, size);
}
