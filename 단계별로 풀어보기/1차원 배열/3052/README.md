<h1>집합 연산자</h1>
<h2>python</h2>

set()은 불변의 값만 가질 수 있다. 

<h3>len(s)</h3>
전체 개수 반환

<h3>s.copy</h3>
얕은 복사

<h3>교집합, 합집합, 차집합, 대칭차집합</h3>
조합 가능 동시 연산 가능, id 변화 없음
<ul>
  <li>교집합: & / s1.intersection(s2)</li>
  <li>합집합: | / s1.union(s2)</li>
  <li>차집합: - / s1.difference(s2)</li>
  <li>대칭차집합: ^ / s1.symmetric_difference(s2)</li>
</ul>
  
<h3>값 수정</h3>
<ul>
  <li>값 1개 추가: s.add(value)</li>
  <li>값 여러개 추가: s.update(sequence)</li>
  <li>특정 값 제거(없으면 에러 발생): s.remove(value)</li>
  <li>특정 값 제거(없어도 에러 발생 x): s.discard(value)</li>
  <li>랜덤 제거 후 해당 값 반환: s.pop()</li>
  <li>모든 요소 제거: s.clear()</li>
</ul>

<h3>집합 관계 확인</h3>
<ul>
  <li>부분집합: s1.issubset(s2)</li>
  <li>상위 집합: s1.issuperset(s2))</li>
  <li>교집합: s1.isdisjoint(s2)</li>
</ul>
