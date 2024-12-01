#include <stdio.h>
int main() {
    int arr[100], currentLength = 0, numElements, value, addIndex;
    printf("Nhap so phan tu: ");
    scanf("%d", &numElements);
    if (numElements < 0 || numElements > 100) return printf("So phan tu khong hop le!\n"), 1;
    for (int i = 0; i < numElements; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength = numElements;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri (0-99): ");
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex >= 100) return printf("Vi tri khong hop le!\n"), 1;
    if (addIndex >= currentLength) currentLength = addIndex + 1;
    else for (int i = currentLength++; i > addIndex; i--) arr[i] = arr[i - 1];
    arr[addIndex] = value;
    for (int i = 0; i < currentLength; i++) printf("%d ", arr[i]);
    return 0;
}
