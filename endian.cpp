#include <stdio.h>
int main() {

    int i;
    int test = 0x12345678;
    char* ptr = (char*)&test; // 1 ����Ʈ���� ����Ű�� �����͸� ����

    for (i = 0; i < sizeof(int); i++) {

        printf("%x", ptr[i]); // 1 ����Ʈ�� ������� �� ���� ���

    }
}
