# [Bronze I] 진법 변환 2 - 11005 

[문제 링크](https://www.acmicpc.net/problem/11005) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 수학

### 제출 일자

2024년 7월 2일 20:13:32

### 문제 설명

<p>10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.</p>

<p>10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.</p>

<p>A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35</p>

### 입력 

 <p>첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36) N은 10억보다 작거나 같은 자연수이다.</p>

### 출력 

 <p>첫째 줄에 10진법 수 N을 B진법으로 출력한다.</p>

### ***의사 코드***
1. `10진수 숫자와 변환할 진법을 입력받는다 - number b`
2. `change_number(b, number) 함수를 실행한다`
	1. `if (number / b == 0)`
		1. `cout << number_to_ASCII(number)`
		2. `return number`
	3. `change_number(b, number / b)`
	4. `cout << number_to_ASCII(number%b)`
	5. `return number`

**number_to_ASCII 함수** - 연산된 숫자를 숫자 or 알파벳으로 바꾸는 함수(10이상은 A, B, C..)**
2. `int number_to_ASCII(int number)`
	1. `if (number가 0~9라면)`
		1. `char형태로 number + 48를 출력한다`
	2. `else`
		1. `char형태로 number+ 55를 출력한다`
