#include <stdio.h>
int main() {
    int arr[100];
	int c = 0;
	int n;
	int d;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    if (n < 0 || n > 100){
    	printf("So phan tu khong hop le!\n");
    	return 1;
	}
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    c = n;
    printf("Mang ban dau: ");
    for (int i = 0; i < c; i++) 
	printf("%d ", arr[i]);
    printf("\n");
    printf("Nhap vi tri xoa: ");
    scanf("%d", &d);
    if (d < 0 || d >= c){
    	printf("Vi tri khong hop le!\n"), 1;
    	return 1;
	} 
    for (int i = d; i < c - 1; i++) {
        arr[i] = arr[i + 1];
    }
    c--;
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < c; i++)
	printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

 
