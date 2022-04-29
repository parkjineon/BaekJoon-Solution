<h1>string 멤버 함수 정리</h1>

<h2>C++</h2>

<li><b>생성자</b>: string str(문자열/변수) or 선언 후 초기화 </li>

<h3>string 인덱스 접근</h3>
<li><b>s[index]</b> : char형으로 index(0부터 시작) 위치의 문자를 반환</li>
<li><b>s.at(pos)</b> : char형으로 pos(1부터 시작) 위치의 문자를 반환</li>

<h3>string 추가</h3>
<li><b>s.append(문자열)</b>: string s 뒤에 문자열 붙이기</li>
<li><b>s.insert(index,문자열)</b>: index(0부터 시작) 위치에 문자열 넣기(교환 ×, 삭제×)</li>

<h3>string 일부 추출</h3>
<li><b>s.substr(index,count=npos)</b> : index(0부터 시작) 위치에서부터 count 길이 만큼의 문자열 추출</li>
//<li><b></b></li>
//<li><b></b></li>
//<li><b></b></li>

