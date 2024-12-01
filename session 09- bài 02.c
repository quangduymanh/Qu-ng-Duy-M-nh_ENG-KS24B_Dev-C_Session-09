#include <stdio.h>
int main() {
    int arr[] = {40, 50, 60, 70, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, n;
    for (int i = 0; i < size; i++)
	    printf("%d ", arr[i]);
    printf("\nNhap vi tri sua : ");
    scanf("%d", &i);
    if (i < 0 || i >= size){
    	printf("Vi tri khong hop le!\n");
	    return 1;
	}
    printf("Nhap gia tri moi: ");
    scanf("%d", &n);
    arr[i] = n;
    for (int i = 0; i < size; i++)
	printf("%d ", arr[i]);
    return 0;
}
