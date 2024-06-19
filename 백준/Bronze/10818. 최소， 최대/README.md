# [Bronze III] 최소, 최대 - 10818 

[문제 링크](https://www.acmicpc.net/problem/10818) 

### 성능 요약

메모리: 5928 KB, 시간: 100 ms

### 분류

구현, 수학

### 제출 일자

2024년 6월 19일 22:12:48

### 문제 설명

<p>N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.</p>

### 출력 

 <p>첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.</p>

### ***슈도 코드***
1. `cin >> number 배열의 크기를 입력받는다`
2. `int *array = new int[number] 입력받은 크기만큼 동적 배열을 할당한다`
3. `for(0부터 number까지)`
	1. `cin >> array[i]`
4. `int min = func_min(int array[], int number) - min값을 찾는 함수를 실행`
	1. `배열의 첫번째 값을 최소값으로 지정한다`
	2. `for (1 ~ number만큼 반복을 수행한다)`
		1. `if (현재 array[i]가 min보다 작다면)`
			1. `min = array[i]`
	3. `return min`
5. `int max = func_max(int array[], int number) - max값을 찾는 함수를 실행`
	1. `배열의 첫번째 값을 최대값으로 지정한다`
	2. `for (1 ~ number만큼 반복을 수행한다)`
		1. `if (현재 array[i]가 max보다 크다면)`
			1. `max = array[i]`
	3. `return max`
6. `min, max값을 출력한다`
7. `동적 할당된 배열을 제거한다`
