#include <stdio.h>

void printTitle();
void printFoodList();
void printRecipe(int menu);

int main(void) {
    printTitle();
    printFoodList();

    printf("Enter MENU: ");
    int menu;
    scanf("%d", &menu);

    printRecipe(menu);
}

void printTitle() {
    printf("---------------------------------------------\n");
    printf("---------------------------------------------\n");
    printf("----------- Secret Cooking Recipe -----------\n");
    printf("---------------------------------------------\n");
    printf("---------------------------------------------\n");
    printf("\n");
    printf("                  Welcome                    \n");
    printf("\n\n");
}

void printFoodList() {
    printf("메뉴(MENU)\n\n");
    printf("#1 : 김치볶음밥(Kimchi Fried Rice)\n");
    printf("\n\n");
}

void printRecipe(int menu) {
    if (menu == 1) {
        printf("Recipe for 김치볶음밥(Kimchi Fried Rice)\n\n");
        printf("1. 밥, 스팸, 김치, 참치 볶을 준비하기\n");
        printf("2. 스팸, 김치, 참치 볶기\n");
        printf("\n*** 중요 ***\n");
        printf("굴소스 미리 꺼내서 추출하기 쉽게 하기\n\n");
        printf("3. 간장 2스푼 넣고 볶기\n");
        printf("4. 밥 + 굴 소스 1스푼 넣고 볶기\n");
        printf("5. 계란 2~3개 넣고 볶기\n");

        printf("\nEnjoy!\n");
    } else {
        printf("Invalid Menu :(\n\n");
    }
}