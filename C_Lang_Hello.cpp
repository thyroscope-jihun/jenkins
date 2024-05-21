// C_Lang_Hello.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 의도적으로 사용되지 않는 변수를 추가 (style 경고)
int unused_variable;

int main()
{
    int buf[10];
    buf[1000] = 0; // 의도적인 배열 범위 초과 접근 (error)

    std::cout << "Hello World!\n";

    int *ptr = new int[10];
    ptr[5] = 10;
    delete ptr; // 잘못된 메모리 해제 방법 (performance 경고)

    // 포팅 가능성 문제 예제 (portability 경고)
    long long large_number = 10000000000LL;

    return 0; // 의도적으로 추가된 반환값 (information 경고)
}
