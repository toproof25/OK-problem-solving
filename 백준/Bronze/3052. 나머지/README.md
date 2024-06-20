# [Bronze II] 나머지 - 3052 

[문제 링크](https://www.acmicpc.net/problem/3052) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 수학

### 제출 일자

2024년 6월 20일 12:21:02

### 문제 설명

<p>두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. </p>

<p>수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.</p>

### 출력 

 <p>첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.</p>


### ***의사 코드***
1. `고정 배열 array 크기 10만큼 생성한다`
2. `나머지를 담는 고정 배열 remainder 크기 10만큼 생성한다`
3. `different 고정 배열 크기 10만큼 생성 후 -1로 초기화한다`
4. `int count = 0`
5. `for (0~9 반복)`
	1. `정수 number를 입력받는다`
	2. `array[i] = number`
	3. `remainder[i] = number % 42`
6. `for (0~9 반복)`
	1. `remainder배열에 i번째 값을 number 변수에 할당한다`
	2. `bool duplication = func(number, different)` - 나머지 중복 여부를 확인하는 함수
		1. `for (0~9 반복)`
			1. `if (different 배열에 number가 있는 지 확인한다)
				1. `있다면 true를 리턴한다`
			2. `else if ( different == -1 중복되지 않은 경우)` 
				1. `different[i] = number` - 중복되지 않으면 새로운 값을 넣는다
				2. `break`
		2. `return false`
	3. `if (중복인가? not duplication)`
		1. `count++`
7. `count값을 출력한다`


### ***해결 과정(어려움 및 해결 방법)***
1. 문제 조건은 중복이 아니면 즉 다른 값이면 count가 +1이 되어야 하는데 왜 안되나 봤을 때 처음 설정한 조건은 중복이면 count가 되도록 설정을 했다. 즉 isDuplication이 반대가 되면 끝
```cpp
bool remainder_duplication(int different[], int number){
  for(int i = 0; i < 10; i++){
    if (different[i] == number){
      cout << different[i] << " : " << number << " 이거는 트루트루\n";
      return true;
    }
    else if (different[i] == -1){
      cout << different[i] << " : " << number << " 이거는 펄스펄스\n";
      different[i] = number;
      break;
    } 
  }
  return false;
}

int main(){

	...

	for (int i=0; i<10; i++){
	    int number = remainder[i];
	    bool isDuplication = remainder_duplication(different, number);
	    if (isDuplication) {
	      count++;
	    }
	}
}
```
2. 두번째 오류는 `if (~isDuplication)`  여기서 ~ 이 단항 연산자가 not을 의미하는 줄 알았는데 알보고니 보수 연산을 취하는 거였다. not은 ! 를 사용하니 해결이됨
