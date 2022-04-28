<h1>소수 부분 자릿수 표현</h1>

<h2>C++</h2>
<p>
    소수점 아래에 숫자가 있을 때,</br>
    std::cout의 출력 자릿수 default는 <b>6</b>이다.</br>
    이 자리 수를 바꾸려면 <b>std::cout.precision(n)</b>이라는 함수를 사용하면된다.
</p>
    <li>std::cout.precision(n)</li></br>
<p>
    n = 전체 출력 자릿수</br>
    지정된 자릿수보다 원래 값이 <b>길다면</b>, n+1 자리에서 <b>반올림</b>하여 나타난다.</br>
    지정된 자릿수보다 원래 값이 <b>짧다면</b>, 나머지 자리는 <b>0</b>으로 채운다.
    
</br>
</br>

</p>
    <li>std::cout&lt&ltfixed</li></br>
<p>
    소수점 자릿수 고정을 원할 시에는 <b>cout&lt&ltfixed</b>를 쓴 후, <b>cout.precision(n)</b>을 쓰면 된다.(n=고정을 원하는 소수점 자릿수)</br>
    fixed를 해제하고 싶다면, <b>cout.unsetf(ios::fixed)</b>를 사용하면 된다.
</p>
