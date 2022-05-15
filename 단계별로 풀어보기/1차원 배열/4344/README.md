<h1>소수점 자리 표시 및 자료형 유의 사항</h1>
<h2>c++</h2>
<h3>형변환</h3>

    ((double)cnt) / ((double)stuCnt)*(double)100;

100에서도 형변환 필요

<h3>소수점 고정</h3>

    cout << fixed;
    cout.precision(3);
    
<h2>Python</h2>

<h3>실수형 정수형 비교</h3>

    avg = 3 // int
    grade = 3.0 // float
    -> avg < grade
  
실수형 정수형 비교 주의 필요(똑같은 3이더라도 크기 다르다.)

<h3>소수점 고정</h3>

    round(value, 고정 소수점 자리수) // 3.0은 3.0으로 나옴(자리 수 안 채워줌)
    
자리 수 채우고 싶다면
    
    ("{:.3f}" .format(value)) // 3.0을 3.000으로 채워줌
    
