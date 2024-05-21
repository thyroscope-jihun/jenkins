// C_Lang_Hello.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// Portability: 플랫폼 종속적 코드 (portability 경고)
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
    // Error: 배열 범위를 초과하는 접근 (error)
    int buf[10];
    buf[1000] = 0;

    // Warning: 비교 연산자를 잘못 사용 (warning)
    int a = 10;
    if (a = 5) {
        std::cout << "Warning example\n";
    }

    // Style: 사용되지 않는 변수 (style)
    int unused_variable;

    // Performance: 잘못된 메모리 해제 방법 (performance)
    int *ptr = new int[10];
    ptr[5] = 10;
    delete[] ptr;  // delete[]를 사용하여 잘못된 메모리 해제 방법 문제 해결

    // Information: 반환값이 있는 main 함수 (information)
    std::cout << "Hello World!\n";

    return 0;
}
