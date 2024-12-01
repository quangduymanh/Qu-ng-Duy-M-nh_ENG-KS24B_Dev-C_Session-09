#include <stdio.h>
int nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    if (*n <= 0) {
        printf("So phan tu khong hop le!\n");
        *n = 0;
        return 1;
    }
    for (int i = 0; i < *n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    return 0;
}
int hienThiMang(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return 1;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
int inSoChan(int arr[], int n) {
    int sum = 0;
    printf("Cac phan tu chan trong mang: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTong cac so chan: %d\n", sum);
    return 0;
}
int inMinMax(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return 1;
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
    return 0;
}
int inSNT(int arr[], int n) {
    int sum = 0;
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++) {
        int is_prime = 1;
        if (arr[i] < 2) {
            is_prime = 0;
        } else {
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTong cac so nguyen to: %d\n", sum);
    return 0;
}
int thongKeSo(int arr[], int n) {
    int x, count = 0;
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) count++;
    }
    printf("So %d xuat hien %d lan trong mang.\n", x, count);
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
    printf("Nhap vi tri (0-%d): ", *n);
    scanf("%d", &index);
    if (index < 0 || index > *n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    for (int i = (*n)++; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    return 0;
}
int main() {
    int arr[100];
    int n = 0;
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
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
                inSoChan(arr, n);
                break;
            case 4:
                inMinMax(arr, n);
                break;
            case 5:
                inSNT(arr, n);
                break;
            case 6:
                thongKeSo(arr, n);
                break;
            case 7:
                themPhanTu(arr, &n);
                break;
            case 8:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le Vui long chon lai.\n");
        }
    } while (choice != 8);
    return 0;
}
