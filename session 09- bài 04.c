#include <stdio.h>
int nhapMang(int *arr, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    if (*n <= 0 || *n > 100) {
        printf("So phan tu khong hop le\n");
        *n = 0;
        return 1;
    }
    for (int i = 0; i < *n; i++) {
        printf("Phan tu %d: ", i);
        scanf("%d", &arr[i]);
    }
    return 0;
}
int hienThiMang(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong\n");
        return 1;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
int themPhanTu(int arr[], int *n) {
    if (*n >= 100) {
        printf("Mang da day, khong the them phan tu!\n");
        return 1;
    }
    int value, index;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri %d: ", *n);
    scanf("%d", &index);
    if (index < 0 || index > *n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    for (int i = (*n)++; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    printf("Da them phan tu\n");
    return 0;
}
int suaPhanTu(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong, khong co gi de sua\n");
        return 1;
    }
    int index, value;
    printf("Nhap vi tri can sua %d : ", n - 1);
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le \n");
        return 1;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    arr[index] = value;
    printf("Da sua phan tu \n");
    return 0;
}
int xoaPhanTu(int arr[], int *n) {
    if (*n == 0) {
        printf("Mang rong \n");
        return 1;
    }
    int index;
    printf("Nhap vi tri can xoa %d : ", *n - 1);
    scanf("%d", &index);
    if (index < 0 || index >= *n) {
        printf("Vi tri khong hop le \n");
        return 1;
    }
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Da xoa phan tu\n");
    return 0;
}
int main() {
    int arr[100];
    int n = 0;
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                hienThiMang(arr, n);
                break;
            case 3:
                themPhanTu(arr, &n);
                break;
            case 4:
                suaPhanTu(arr, n);
                break;
            case 5:
                xoaPhanTu(arr, &n);
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 6);
    return 0;
}
