
#include <stdio.h>
#include <string.h>

int main() {
    int isPalindrome = 1; // กำหนดค่าเริ่มต้นให้เป็น 1 (คือเป็น palindrome)
    int K = 0; // K เป็นอักษรตอนต้น 
    int W; // W เป็นอักษรตอนท้าย
    char word[100]; 
    
    printf("Enter word: ");
    scanf("%s", word);
    
    W = strlen(word) - 1; // กำหนดค่า W ให้เป็นอักษรตัวสุดท้าย

    while (K < W) { // เปรียบเทียบอักษรจากต้นและปลาย
        if (word[K] != word[W]) { // ถ้าตัวอักษรไม่ตรงกัน
            isPalindrome = 0; // ไม่ใช่ palindrome
            break;
        }
        K++; // เลื่อนไปอักษรถัดไปจากด้านหน้า
        W--; // เลื่อนไปอักษรถัดไปจากด้านหลัง
    }
    
    if (isPalindrome) { // ถ้าเป็น palindrome
        printf(" Not Pass.\n");
    } else {
        printf("Pass.\n");
    }

    return 0;
}