# [Bronze I] 단어 공부 - 1157 

[문제 링크](https://www.acmicpc.net/problem/1157) 

### 성능 요약

메모리: 4936 KB, 시간: 72 ms

### 분류

구현, 문자열

### 제출 일자

2024년 6월 23일 20:01:54

### 문제 설명

<p>알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.</p>

### 입력 

 <p>첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.</p>

### 출력 

 <p>첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.</p>

### ***의사 코드***
1. `string 문자열을 입력받는다 - cin >> word`
2. `getMostChar(word)`
	1. `딕셔너리<char, int> m` - 문자마다 카운트를 +1 해준다
	2. `for (i = 0 ~ 문자열 길이만큼)`
		1. `char_upper(word[i])` - 소문자라면 대문자로 변경하는 함수
			1. `if (alpha >= 'a' && alpha <= 'z') alpha -= 32;`
		2. `if (m.find(word[i]) != m.end())` - 딕셔너리에 없는 문자라면
			1. `m[word[i]] = 1`
		3. `else`
			1. `m[word[i]] += 1`
	3. `생성된 딕셔너리에서 가장 value가 큰 값들 찾아서 key를 반환한다`
		1. `int max = 0`
		2. `char max_char`
		3. `bool isDouble = false` - 큰값이 중복되는 지 체
		4. `for (auto i = m.begin ~ m.end)`
			1. `if (max와 i의 value가 같다면)`
				1. `isDouble = true`
			2. `else if (max보다 i의 value가 크다면)`
				1. `max = i->second`
				2. `max_char = i->first`
				3. `isDouble = false`
		5. `if ( isDouble )` - max가 중복되었다면
			1. `return '?'`
		6. `return max_char`
3. `getMostChar의 반환값을 출력한다`

- char getMostChar(word) - 입력된 문자열의 문자들을 딕셔너리로 만든 후 최대 문자를 반환
- void char_upper(char &alpha) - 소문자인 문자를 대문자로 변경(레퍼런스 변수)
- char max_char(map<char, int> m) - 딕셔너리에서 가장 큰 값 및 중복을 검사하여 문자를 반환
